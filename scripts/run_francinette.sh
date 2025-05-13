#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to check if Francinette detected the project correctly
check_detection() {
  local output="$1"
  if echo "$output" | grep -q "cannot find project"; then
    return 1 # Detection failed
  fi
  return 0 # Detection likely succeeded
}

# Change to the project root directory if script is run from scripts folder
SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR/.." || exit 1

echo -e "${YELLOW}=== Francinette (paco) Test Runner ===${NC}"

# Check if francinette/paco is installed
if ! command -v francinette &> /dev/null && ! command -v paco &> /dev/null; then
    echo -e "${RED}Francinette is not installed.${NC}"
    echo -e "${YELLOW}Would you like to install it now? (y/n)${NC}"
    read -r answer
    if [[ "$answer" =~ ^[Yy]$ ]]; then
        echo -e "${BLUE}Installing Francinette...${NC}"
        bash -c "$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/install.sh)"
    else
        echo -e "${RED}Francinette is required to run these tests. Exiting.${NC}"
        exit 1
    fi
fi

# Ensure the project is built
echo -e "${BLUE}Building the project...${NC}"
make re

# Check if libft.a was created
if [ ! -f "libft.a" ]; then
    echo -e "${RED}Failed to build libft.a. Make sure your Makefile is correct.${NC}"
    exit 1
fi

# Command to run
CMD="francinette"
if ! command -v francinette &> /dev/null; then
    CMD="paco"
fi

# Parse arguments
RUN_ALL=true
RUN_BASIC=false
RUN_STRICT=false
RUN_TRIPOUILLE=false

if [ "$#" -gt 0 ]; then
    RUN_ALL=false
    for arg in "$@"; do
        case $arg in
            --basic)
                RUN_BASIC=true
                ;;
            --strict)
                RUN_STRICT=true
                ;;
            --tripouille|-t)
                RUN_TRIPOUILLE=true
                ;;
            --all|-a)
                RUN_ALL=true
                ;;
            *)
                echo -e "${RED}Unknown argument: $arg${NC}"
                echo -e "${YELLOW}Usage: $0 [--basic] [--strict] [--tripouille|-t] [--all|-a]${NC}"
                exit 1
                ;;
        esac
    done
fi

# Help Francinette detect the project
echo -e "${BLUE}Ensuring proper project detection...${NC}"

# Run the setup script if it exists
if [ -f "./scripts/setup_for_francinette.sh" ]; then
    echo -e "${BLUE}Running setup script for Francinette...${NC}"
    chmod +x ./scripts/setup_for_francinette.sh
    ./scripts/setup_for_francinette.sh
fi

# Set project type for our own use
PROJECT_TYPE="libft"

# Run tests based on arguments
if [ "$RUN_ALL" = true ] || [ "$RUN_BASIC" = true ]; then
    echo -e "${BLUE}Running basic Francinette tests...${NC}"
    $CMD
    
    # If the previous command failed, try specifying project explicitly with different methods
    if [ $? -ne 0 ]; then
        echo -e "${YELLOW}Trying alternate methods to specify project...${NC}"
        $CMD "$PROJECT_TYPE" || echo -e "${RED}Basic tests failed${NC}"
    fi
fi

if [ "$RUN_ALL" = true ] || [ "$RUN_STRICT" = true ]; then
    echo -e "${BLUE}Running Francinette tests in strict mode...${NC}"
    $CMD --strict
    
    # If the previous command failed, try specifying project explicitly with different methods
    if [ $? -ne 0 ]; then
        echo -e "${YELLOW}Trying alternate methods for strict mode...${NC}"
        $CMD "$PROJECT_TYPE" --strict || echo -e "${RED}Strict tests failed${NC}"
    fi
fi

if [ "$RUN_ALL" = true ] || [ "$RUN_TRIPOUILLE" = true ]; then
    echo -e "${BLUE}Running Tripouille tester...${NC}"
    $CMD -t tripouille
    
    # If the previous command failed, try specifying project explicitly with different methods
    if [ $? -ne 0 ]; then
        echo -e "${YELLOW}Trying alternate methods for Tripouille tester...${NC}"
        $CMD "$PROJECT_TYPE" -t tripouille || echo -e "${RED}Tripouille tests failed${NC}"
    fi
fi

echo -e "${GREEN}All specified Francinette tests completed.${NC}"

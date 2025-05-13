#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

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

# Run tests based on arguments
if [ "$RUN_ALL" = true ] || [ "$RUN_BASIC" = true ]; then
    echo -e "${BLUE}Running basic Francinette tests...${NC}"
    $CMD
fi

if [ "$RUN_ALL" = true ] || [ "$RUN_STRICT" = true ]; then
    echo -e "${BLUE}Running Francinette tests in strict mode...${NC}"
    $CMD --strict
fi

if [ "$RUN_ALL" = true ] || [ "$RUN_TRIPOUILLE" = true ]; then
    echo -e "${BLUE}Running Tripouille tester...${NC}"
    $CMD -t tripouille
fi

echo -e "${GREEN}All specified Francinette tests completed.${NC}"

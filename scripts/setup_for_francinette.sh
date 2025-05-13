#!/bin/bash

# This script creates additional files that help Francinette detect the project type
# It's intended to be run before Francinette in CI environments or when detection fails

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${YELLOW}=== Francinette Project Setup Helper ===${NC}"

# Check for libft project
if [ -f "libft.h" ] || [ -f "Makefile" ] && grep -q "libft" Makefile 2>/dev/null; then
    echo -e "${GREEN}Setting up for libft project...${NC}"
    
    # Create a clean build
    make fclean 2>/dev/null || true
    make > /dev/null 2>&1
    
    # Create marker files that help Francinette with detection
    echo "libft" > .project_type
    
    # Create markers to help with detection
    touch .fsoares
    
    # Set up Francinette cache to remember this project
    mkdir -p ~/.cache/francinette
    echo "$(pwd)" > ~/.cache/francinette/last_path
    
    # Create a symlink if needed by Francinette (some testers expect a specific structure)
    ln -sf "$(pwd)" ~/.cache/francinette/my_libft 2>/dev/null || true
    
    # Create symbolic links if they don't exist (some testers expect specific file names)
    for file in ft_*.c; do
        if [ -f "$file" ]; then
            base=$(basename "$file" .c)
            if [ ! -f "${base/_ft/ft_}" ] && [ ! -L "${base/_ft/ft_}" ]; then
                ln -sf "$file" "${base/_ft/ft_}" 2>/dev/null || true
            fi
        fi
    done
    
    echo -e "${GREEN}Setup complete for libft project${NC}"
    exit 0
fi

# If we get here, we couldn't detect the project
echo -e "${RED}Could not detect the project type automatically${NC}"
echo -e "${YELLOW}Please run Francinette directly in the correct project folder${NC}"
exit 1

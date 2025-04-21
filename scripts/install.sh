#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

echo -e "${YELLOW}=== Libft Installation Script ===${NC}"
echo ""

# Default installation directory
DEFAULT_INSTALL_DIR="/usr/local"
INSTALL_DIR=${1:-$DEFAULT_INSTALL_DIR}

# Check if running with sudo if installing to system directories
if [[ "$INSTALL_DIR" == "/usr/local" || "$INSTALL_DIR" == "/usr" ]] && [ "$EUID" -ne 0 ]; then
    echo -e "${RED}To install in $INSTALL_DIR, please run this script with sudo${NC}"
    exit 1
fi

# Make sure libft.a exists
if [ ! -f "libft.a" ]; then
    echo -e "${YELLOW}Library file not found. Building libft...${NC}"
    make
    
    if [ ! -f "libft.a" ]; then
        echo -e "${RED}Failed to build libft. Aborting installation.${NC}"
        exit 1
    fi
fi

# Create installation directories
echo -e "${YELLOW}Creating installation directories...${NC}"
mkdir -p "$INSTALL_DIR/include/libft"
mkdir -p "$INSTALL_DIR/lib"

# Copy files
echo -e "${YELLOW}Installing library files...${NC}"
cp libft.a "$INSTALL_DIR/lib/"
cp libft.h "$INSTALL_DIR/include/libft/"

# Create a simple pkgconfig file for integration with other projects
echo -e "${YELLOW}Creating pkg-config file...${NC}"
mkdir -p "$INSTALL_DIR/lib/pkgconfig"

cat > "$INSTALL_DIR/lib/pkgconfig/libft.pc" << EOF
prefix=$INSTALL_DIR
exec_prefix=\${prefix}
includedir=\${prefix}/include
libdir=\${prefix}/lib

Name: libft
Description: 42 School libft library
Version: 1.0.0
Cflags: -I\${includedir}/libft
Libs: -L\${libdir} -lft
EOF

echo -e "${GREEN}Libft has been successfully installed to $INSTALL_DIR${NC}"
echo ""
echo -e "${YELLOW}Usage in your projects:${NC}"
echo "- When compiling manually:"
echo "  gcc your_program.c -I$INSTALL_DIR/include/libft -L$INSTALL_DIR/lib -lft"
echo ""
echo "- When using pkg-config:"
echo "  gcc your_program.c \$(pkg-config --cflags --libs libft)"
echo ""
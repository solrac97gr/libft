# Libft

My own implementation of standard C library functions.

## Description

Libft is a personal recreation of some useful standard C library functions. This project is part of the 42 school curriculum and serves as a foundation for future programming projects.

## Functions

### Character Classification Functions
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is in the ASCII set
- `ft_isprint` - Check if character is printable

### String Manipulation Functions
- `ft_strlen` - Calculate the length of a string
- `ft_strlcpy` - Size-bounded string copying
- `ft_strlcat` - Size-bounded string concatenation

### Memory Functions
- `ft_memset` - Fill memory with a constant byte
- `ft_bzero` - Fill memory with zeros
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlapping memory)

## Installation

### Option 1: Download the latest release
1. Go to the GitHub releases page
2. Download the latest release zip file
3. Extract it to your project
4. Include it in your code with: `#include "include/libft.h"`
5. Compile with: `gcc your_program.c -I./include -L./lib -lft`

### Option 2: Build from source
```bash
git clone https://github.com/solrac97gr/libft.git
cd libft
make
```

### Option 3: Install system-wide
```bash
git clone https://github.com/solrac97gr/libft.git
cd libft
make
sudo ./scripts/install.sh
```
Then in your projects:
```bash
gcc your_program.c $(pkg-config --cflags --libs libft)
```

## Usage Example

```c
#include "libft.h"
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";

    printf("Length of string: %zu\n", ft_strlen(str));

    if (ft_isalpha('A')) {
        printf("A is an alphabet character\n");
    }

    char buffer[10];
    ft_memset(buffer, 'X', 10);
    buffer[9] = '\0';
    printf("Buffer after memset: %s\n", buffer);

    return 0;
}
```

## Testing

Run the tests with:
```bash
./scripts/run_tests.sh
```

## License

This project is licensed under the MIT License - see the LICENSE file for details.

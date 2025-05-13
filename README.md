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

### Character Conversion Functions
- `ft_toupper` - Convert a lowercase letter to uppercase
- `ft_tolower` - Convert an uppercase letter to lowercase

### String Manipulation Functions
- `ft_strlen` - Calculate the length of a string
- `ft_strlcpy` - Size-bounded string copying
- `ft_strlcat` - Size-bounded string concatenation
- `ft_strchr` - Locate first occurrence of character in string
- `ft_strrchr` - Locate last occurrence of character in string
- `ft_strncmp` - Compare two strings up to n characters
- `ft_strnstr` - Locate a substring in a string (size-bounded)
- `ft_strdup` - Duplicate a string
- `ft_substr` - Extract a substring from a string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim specified characters from beginning and end of string
- `ft_split` - Split a string into an array of substrings using a delimiter

### Memory Functions
- `ft_memset` - Fill memory with a constant byte
- `ft_bzero` - Fill memory with zeros
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlapping memory)
- `ft_memchr` - Locate byte in memory area
- `ft_calloc` - Allocate and zero-initialize memory

### Conversion Functions
- `ft_atoi` - Convert a string to an integer
- `ft_itoa` - Convert an integer to a string

## Functional Functions
- `ft_strmapi ` - Apply a function to each character of a string and return a new string
- `ft_striteri` - Apply a function to each character of a string with its index

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

    // Example of ft_substr
    char *substr = ft_substr(str, 7, 5);
    printf("Substring: %s\n", substr);
    free(substr);

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

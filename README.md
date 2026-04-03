# Libft - C Standard Library Recreation

This project is the first project of the 42 school Commun Core. It implements a subset of the C standard library functions.

**Author**: ptran <ptran@student.42belgium.be>  
**School**: 42 Bruxelles Belgium

## Overview

**Libft** is a C library providing essential utility functions organized into tree parts:
- **Part 1**: Standard libc functions
- **Part 2**: Additional functions not include in the libc, or exist in a different form
- **Part 3**: Linked list manipulation functions

## Building

```bash
make              # Compile library
make clean        # Remove object files
make fclean       # Remove object files and library
make re           # Rebuild everything
```
---

## Part 1: Standard libc functions

### Character Classification (is*)

| Function | Description |
|----------|-------------|
| [`ft_isalpha`](https://man7.org/linux/man-pages/man3/isalpha.3.html) | Check if character is alphabetic (A-Z, a-z) |
| [`ft_isdigit`](https://man7.org/linux/man-pages/man3/isdigit.3.html) | Check if character is decimal digit (0-9) |
| [`ft_isalnum`](https://man7.org/linux/man-pages/man3/isalnum.3.html) | Check if character is alphanumeric |
| [`ft_isascii`](https://man7.org/linux/man-pages/man3/isascii.3.html) | Check if character is in ASCII range (0-127) |
| [`ft_isprint`](https://man7.org/linux/man-pages/man3/isprint.3.html) | Check if character is printable (ASCII 32-126) |

### String Functions (str*)

| Function | Description |
|----------|-------------|
| [`ft_strlen`](https://man7.org/linux/man-pages/man3/strlen.3.html) | Calculate string length (without null-terminator) |
| [`ft_strchr`](https://man7.org/linux/man-pages/man3/strchr.3.html) | Locate first occurrence of character in string |
| [`ft_strrchr`](https://man7.org/linux/man-pages/man3/strrchr.3.html) | Locate last occurrence of character in string |
| [`ft_strncmp`](https://man7.org/linux/man-pages/man3/strncmp.3.html) | Compare two strings (first n bytes) |
| [`ft_strlcpy`](https://man7.org/linux/man-pages/man3/strlcpy.3.html) | Copy string with size limitation |
| [`ft_strlcat`](https://man7.org/linux/man-pages/man3/strlcat.3.html) | Concatenate strings with size limitation |
| [`ft_strnstr`](https://man7.org/linux/man-pages/man3/strstr.3.html) | Locate substring in string (limited length) |
| [`ft_strdup`](https://man7.org/linux/man-pages/man3/strdup.3.html) | Duplicate a string |

### Memory Functions (mem*)

| Function | Description |
|----------|-------------|
| [`ft_memset`](https://man7.org/linux/man-pages/man3/memset.3.html) | Fill memory with constant byte |
| [`ft_bzero`](https://man7.org/linux/man-pages/man3/bzero.3.html) | Zero out memory block |
| [`ft_memcpy`](https://man7.org/linux/man-pages/man3/memcpy.3.html) | Copy memory area |
| [`ft_memmove`](https://man7.org/linux/man-pages/man3/memmove.3.html) | Copy memory area (handles overlaps) |
| [`ft_memchr`](https://man7.org/linux/man-pages/man3/memchr.3.html) | Search for byte in memory |
| [`ft_memcmp`](https://man7.org/linux/man-pages/man3/memcmp.3.html) | Compare two memory areas |
| [`ft_calloc`](https://man7.org/linux/man-pages/man3/calloc.3.html) | Allocate and initialize memory |


## Part 2: Additional functions

### String Conversion

| Function | Description |
|----------|-------------|
| [`ft_atoi`](https://man7.org/linux/man-pages/man3/atoi.3.html) | Convert string to integer |
| `ft_itoa` | Convert integer to string (allocates memory) |

### Character Case Conversion

| Function | Description |
|----------|-------------|
| [`ft_tolower`](https://man7.org/linux/man-pages/man3/tolower.3.html) | Convert uppercase to lowercase |
| [`ft_toupper`](https://man7.org/linux/man-pages/man3/toupper.3.html) | Convert lowercase to uppercase |

### Output to File Descriptor (put*_fd)

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Write single character to fd |
| `ft_putstr_fd` | Write string to fd |
| `ft_putendl_fd` | Write string + newline to fd |
| `ft_putnbr_fd` | Write integer to fd |

### Advanced String Manipulation

| Function | Parameters | Description |
|----------|-----------|-------------|
| `ft_substr` | `(s, start, len)` | Extract substring from string |
| `ft_strjoin` | `(s1, s2)` | Concatenate two strings (allocates) |
| `ft_strtrim` | `(s, set)` | Remove characters from edges |
| `ft_split` | `(s, c)` | Split string by delimiter (allocates array) |
| `ft_strmapi` | `(s, f)` | Apply function to each character (allocates) |
| `ft_striteri` | `(s, f)` | Apply function to each character (in-place) |

---

## Part 3: Linked list manipulation functions

All Linked list functions work with the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

### List Creation & Manipulation

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list node |
| `ft_lstadd_front` | Add node to front of list |
| `ft_lstadd_back` | Add node to back of list |
| `ft_lstsize` | Count nodes in list |
| `ft_lstlast` | Get last node of list |

### List Deletion & Iteration

| Function | Description |
|----------|-------------|
| `ft_lstdelone` | Delete single list node |
| `ft_lstclear` | Delete all nodes of list |
| `ft_lstiter` | Apply function to each node's content |
| `ft_lstmap` | Create new list applying function to content |

---

## Function Compilation

Each function is compiled from its corresponding `.c` file:
- `ft_*.c` files contain the implementation
- `libft.h` contains function prototypes and `t_list` structure definition
- All files follow 42 school coding style

## Documentation

Complete API documentation is available in:
- **libft.h** - Function prototypes and structure definitions
- **libft.pdf** - Official subject document
- **Doxygen comments** - In-code documentation for Doxygen generation



*This project has been created as part of the 42 curriculum by betdemir.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The goal of the project is to recreate standard C library functions and implement additional utility functions for string, memory, character, and file descriptor manipulation.

The project also includes functions for creating and manipulating singly linked lists.

## Instructions

Compile the library with:

```bash
make
```

This creates `libft.a`.

Other Makefile commands:

```bash
make clean
make fclean
make re
```

To use the library in a C program:

```c
#include "libft.h"
```

Compile it with:

```bash
cc main.c libft.a
```

## Library

The library contains:

- Standard C functions such as `ft_strlen`, `ft_memcpy`, `ft_strncmp`, `ft_atoi`, `ft_calloc` and `ft_strdup`.
- Additional functions such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa` and file descriptor output functions.
- Linked-list functions such as `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter` and `ft_lstmap`.

The linked-list part uses:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

This structure allows each node to store a content pointer and the address of the next node.

## Resources

- 42 Libft project subject
- C manual pages (`man`)
- C documentation for memory allocation, strings, pointers and linked lists
- Tutorials and reference materials about C programming and linked lists

### AI Usage

AI was used as a learning and debugging assistant to understand C concepts, pointers, function pointers, linked lists, memory management, and to analyze implementation and compilation errors.


# libft

Libft is a School 42 project. The purpose of this project is to create own C library.

[`libft.en.pdf`](/libft.en.pdf) is the task file.

## Usage

To compile the library, run:

```shell
$ make
```

## List

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)	- test for ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)	- alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c)	- alphabetic character test.
* [`ft_isdigit`](libft/ft_isdigit.c)	- decimal-digit character test.
* [`ft_isprint`](libft/ft_isprint.c)	- printing character test (space character inclusive).
* [`ft_tolower`](libft/ft_tolower.c)	- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)	- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		- convert ASCII string to integer.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/ft_strlen.c)				- find length of string.
* [`ft_strchr`](libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](libft/ft_strstr.c)		- locate a substring in a string.
* [`ft_strnstr`](libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](libft/ft_strcmp.c) 		- compare strings.
* [`ft_strncmp`](libft/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strcpy`](libft/ft_strcpy.c) 		- copy strings.
* [`ft_strncpy`](libft/ft_strncpy.c) 	- copy strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strcat`](libft/ft_strcat.c) 		- concatenate strings (s2 into s1).
* [`ft_strncat`](libft/ft_strncat.c) 	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcat`](libft/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar`](libft/ft_putchar.c) 	- output a character to stdout.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/ft_putstr.c) 		- output string to stdout.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl`](libft/ft_putendl.c) 	- output string to stdout with newline.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr`](libft/ft_putnbr.c) 		- output integer to stdout.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/ft_strsplit.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](libft/ft_lstnew.c)				- create new list.
* [`ft_lstadd`](libft/ft_lstadd.c)	- add new element at end of list.
* [`ft_lstdelone`](libft/ft_lstdelone.c)		- delete element from list.
* [`ft_lstiter`](libft/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap.c)				- apply function to content of all list's elements into new list.

## Final score

125/100 (max)
![](screenshots/score.png)

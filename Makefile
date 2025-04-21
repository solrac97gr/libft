build:
	gcc -c -Wall -Werror -Wextra ft_isalpha.c -o libft.o
	ar rcs libft.a libft.o

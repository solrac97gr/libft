# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 22:25:00 by carloga2          #+#    #+#              #
#    Updated: 2025/04/21 22:25:00 by carloga2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Source files
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HEADER = libft.h

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compile source files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJS)

# Clean object files and library
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Run all tests
test: $(NAME)
	./scripts/run_tests.sh

# Non-file targets
.PHONY: all clean fclean re test

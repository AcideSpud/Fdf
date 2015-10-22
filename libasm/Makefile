# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/11 16:27:02 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:40:25 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

TEST = test

CC = ~/.brew/Cellar/nasm/2.11.08/bin/nasm

ASMFLAGS = -f macho64

OBJ = ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
	ft_isprint.o ft_toupper.o ft_tolower.o ft_memset.o ft_strlen.o\
	ft_puts.o ft_memcpy.o ft_strcat.o  ft_strdup.o ft_isrange.o\
	 ft_cat.o ft_putlstr.o ft_isspace.o ft_putchar.o ft_putstr.o\
	 ft_max.o ft_min.o

all: $(NAME)

$(NAME):
	$(CC) $(ASMFLAGS) ft_bzero.s -o ft_bzero.o
	$(CC) $(ASMFLAGS) ft_isrange.s -o ft_isrange.o
	$(CC) $(ASMFLAGS) ft_strcat.s -o ft_strcat.o
	$(CC) $(ASMFLAGS) ft_puts.s -o ft_puts.o
	$(CC) $(ASMFLAGS) ft_putlstr.s -o ft_putlstr.o
	$(CC) $(ASMFLAGS) ft_putstr.s -o ft_putstr.o
	$(CC) $(ASMFLAGS) ft_isalpha.s -o ft_isalpha.o
	$(CC) $(ASMFLAGS) ft_isalnum.s -o ft_isalnum.o
	$(CC) $(ASMFLAGS) ft_isdigit.s -o ft_isdigit.o
	$(CC) $(ASMFLAGS) ft_isascii.s -o ft_isascii.o
	$(CC) $(ASMFLAGS) ft_isprint.s -o ft_isprint.o
	$(CC) $(ASMFLAGS) ft_toupper.s -o ft_toupper.o
	$(CC) $(ASMFLAGS) ft_tolower.s -o ft_tolower.o
	$(CC) $(ASMFLAGS) ft_isspace.s -o ft_isspace.o
	$(CC) $(ASMFLAGS) ft_putchar.s -o ft_putchar.o
	$(CC) $(ASMFLAGS) ft_max.s -o ft_max.o
	$(CC) $(ASMFLAGS) ft_min.s -o ft_min.o
	$(CC) $(ASMFLAGS) ft_memset.s -o ft_memset.o
	$(CC) $(ASMFLAGS) ft_memcpy.s -o ft_memcpy.o
	$(CC) $(ASMFLAGS) ft_strlen.s -o ft_strlen.o
	$(CC) $(ASMFLAGS) ft_strdup.s -o ft_strdup.o
	$(CC) $(ASMFLAGS) ft_cat.s -o ft_cat.o
	ar rc $(NAME) $(OBJ)

$(TEST) : $(NAME)
	gcc main.c -o test -L . -lfts libfts.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean $(NAME)

.PHONY : all clean fclean re %.o

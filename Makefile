##
## Makefile for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/lib
##
## Made by thomas brennetot
## Login   <brenne_t@epitech.net>
##
## Started on  Mon Oct 15 12:06:27 2007 thomas brennetot
## Last update Mon Feb 23 15:28:19 2009 thomas brennetot
##

NAME		=	libmy_${OSTYPE}.a

SRC		=	my_strncpy.c\
			my_strdup.c\
			my_params_in_list.c\
			my_list_size.c\
			my_islower.c\
			my_str_isalpha.c\
			my_is_prime.c\
			my_str_isnum.c\
			my_isneg.c\
			my_str_isprintable.c\
			my_str_isupper.c\
			my_power_rec.c\
			my_strcapitalize.c\
			my_put_nbr.c\
			my_strcmp.c\
			my_putchar.c\
			my_strcpy.c\
			my_strlen.c\
			my_putstr.c\
			my_strlowcase.c\
			my_revstr.c\
			my_strncmp.c\
			my_showmem.c\
			my_find_prime_sup.c\
			my_showstr.c\
			my_strstr.c\
			my_getnbr.c\
			my_sort_int_tab.c\
			my_strupcase.c\
			my_square_root.c\
			my_swap.c\
			is_big_endian.c\
			my_getnbr_base.c\
			my_putnbr_base.c\
			my_str_to_wordtab.c

#AR		=	ar r

CC_FreeBSD	=	gcc
CC_solaris	=	/usr/sfw/bin/gcc
CC_linux	=	gcc
CC		=	$(CC_${OSTYPE})

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS		=	-I. -W -Wall -ansi -pedantic -D${OSTYPE}

$(NAME)		:	$(OBJ)
			ar r $(NAME) $(OBJ)
			cp $(NAME) $(HOME)/rendu/lib
			ranlib ../$(NAME)

all		:	$(NAME)

clean		:
			$(RM) $(OBJ)
			$(RM) *~

c		:	clean

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		=	all clean fclean re c

##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

INC_PATH	=	include/

SRCS	=	src/my_putchar.c		\
			src/my_putchar_err.c	\
			src/my_putstr.c			\
			src/my_putstr_err.c		\
			src/my_strlen.c 		\
			src/my_arraylen.c		\
			src/print_array.c		\
			src/my_str_to_word_array.c

CFLAGS	+=	-I $(INC_PATH)
CFLAGS	+=	-pedantic
CFLAGS	+=	-W -Wall -Wextra
CFLAGS	+=	-Wno-long-long
CFLAGS	+=	-g3
CFLAGS	+=	-Werror

OBJS	=	$(SRCS:.c=.o)

LIBCOMP	=	ar rc

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
	$(LIBCOMP) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) ./a.out

re:	fclean all
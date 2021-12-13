# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2021/12/13 19:18:28 by mvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADERS = ft_printf.h ./libft/libft.h
CFLAGS = -Wall -Wextra -Werror

SRCS = conv_cdi.c conv_p.c conv_uxX.c conversion.c ft_count.c ft_printf.c \
ft_putchar.c ft_putstr.c ./libft/ft_calloc.c ./libft/ft_itoa.c ./libft/ft_strlen.c

SRCOBJ = $(SRCS:.c=.o)

OBJ = $(SRCOBJ)

all: $(NAME)

so : $(NAME2)

$(NAME2): linuxobjects
	$(CC) -shared -o $(NAME2) *.o

linuxobjects:
	$(CC) -fPIC -c $(SRCS)

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<

clean:
	rm -f $(SRCOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2021/12/14 16:30:42 by mvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADERS = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
LIB = ./libft/libft.a

SRCS = conv_csdi.c conv_p.c conv_uxX.c conversion.c ft_count.c ft_printf.c \
ft_putchar.c ft_putstr.c spec_check.c ft_itoa_printf.c

SRCOBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): libft
	ar crs $(NAME) $(SRCOBJ) $(LIB)

%.o : %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<

libft: $(SRCOBJ)
	cd libft && make

clean:
	rm -f $(SRCOBJ)

#fclean: clean
#	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
fclean: clean
	rm -f $(NAME)
	cd libft && make $@
	

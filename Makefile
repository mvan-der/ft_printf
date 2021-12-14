# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2021/12/14 17:40:54 by mvan-der      ########   odam.nl          #
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
	ar crs $(NAME) $(SRCOBJ)

%.o : %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<

libft: $(SRCOBJ)
	cd libft && make
	cp $(LIB) ../ft_printf/$(NAME)

clean:
	rm -f $(SRCOBJ)

re: fclean all

.PHONY: all clean fclean re
fclean: clean
	rm -f $(NAME)
	cd libft && make $@
	

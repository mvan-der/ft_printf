# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2021/12/15 19:08:44 by mvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADERS = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
LIB = ./libft/libft.a

SRCS = conv_csdi.c conv_p.c conv_uxX.c ft_count.c ft_printf.c \
ft_putchar.c ft_putstr.c spec_conv.c ft_itoa_printf.c \
ft_utoa_printf.c

SRCOBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): libft
	cp $(LIB) $(NAME)
	ar crs $(NAME) $(SRCOBJ)

%.o : %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<

libft: $(SRCOBJ)
	$(MAKE) -C ./libft

clean:
	rm -f $(SRCOBJ)

.PHONY: all clean fclean re
fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ./libft $@
re: fclean all

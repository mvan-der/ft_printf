# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2021/12/22 14:06:12 by mvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADERS = ft_printf.h
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_conv_csdi.c ft_conv_p.c ft_conv_uxX.c ft_count.c \
ft_printf.c ft_putchar.c ft_putstr.c ft_spec_conv.c \
ft_itoa_printf.c ft_utoa_printf.c ft_strlen.c ft_calloc.c \
ft_strjoin.c

SRCOBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCOBJ)
	ar crs $(NAME) $(SRCOBJ)

%.o : %.c $(HEADER)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(SRCOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

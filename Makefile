#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 10:53:27 by cpires-p          #+#    #+#              #
#    Updated: 2017/01/10 01:42:28 by cpires-p         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_isascii.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_strdel.c \
ft_strlcat.c ft_strncpy.c ft_strstr.c ft_isdigit.c ft_memcpy.c ft_putendl.c \
ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c ft_strsub.c ft_atoi.c \
ft_isprint.c ft_memdel.c ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strmap.c \
ft_strnew.c ft_strtrim.c ft_bzero.c ft_itoa.c ft_memmove.c ft_putnbr.c \
ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c ft_tolower.c \
ft_isalnum.c ft_memalloc.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c ft_striteri.c \
ft_strncat.c ft_strrchr.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_putchar.c \
ft_putstr.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c ft_memccpy.c \
ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
ft_lstappend.c ft_putnchar.c ft_ismodulo.c ft_touche.c ft_strrev.c

OBJS  = $(SRC:.c=.o)

.SILENT: clean fclean

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJS)

clean:
	rm -fv $(OBJS)

fclean: clean
	rm -fv $(NAME) $(OBJS)

re: fclean all
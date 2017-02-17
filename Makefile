#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzheng <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 12:13:13 by dzheng            #+#    #+#              #
#    Updated: 2017/02/08 20:03:19 by dzheng           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CFLAGS += -Wall -Wextra -Werror
SRC = 	ft_atoi.c ft_abs.c ft_itoa.c ft_swap.c ft_intlen.c \
		\
		ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strcat.c ft_strlcat.c		  \
		ft_strclr.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c		  \
		ft_strnstr.c ft_strnew.c ft_strdel.c ft_strmap.c ft_strmapi.c		  \
		ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strnjoin.c		  \
		ft_strtrim.c ft_strrev.c ft_strsplit.c ft_strchar.c ft_strcmp.c		  \
		ft_strcpy.c ft_strdup.c	ft_striter.c ft_striteri.c					  \
		\
		ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr.c	  \
		ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c							  \
		\
		ft_isspace.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	  \
		ft_isprint.c ft_ishex.c ft_toupper.c ft_tolower.c ft_ispunct.c		  \
		ft_isblank.c														  \
		\
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c 		  \
		ft_memcmp.c ft_memalloc.c ft_memdel.c ft_memchr.c					  \
	 	\
	 	ft_lstnew.c ft_lstdel.c	ft_lstadd.c	ft_lstmap.c	ft_lstiter.c	  	  \
	 	ft_lstdelone.c ft_lstaddend.c ft_lstselectsort.c ft_lstsize.c		  \
	 	\
	 	ft_printf.c ft_print_unsigned.c ft_print_signed.c ft_print_char.c	  \
		ft_printf_pointer.c ftf_size_prec_lenght.c ftf_check_if_flags.c		  \
		ft_write_null.c ftf_convert_arg.c ftf_itoa_max_int.c 				  \
		ftf_convert_to_o_hex.c ft_print_unicode.c ft_free_return.c			  \
		ftf_lenght_width_spec.c ftf_checker.c ft_join_unicode.c				  \
		ft_get_width_prec.c \
		\
		get_next_line.c \
		\
		ft_print_tab.c ft_print_grid.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

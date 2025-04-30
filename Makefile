# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 16:23:46 by kaisuzuk          #+#    #+#              #
#    Updated: 2025/04/30 21:46:13 by kaisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc -Wall -Werror -Wextra -Iincludes
L_SRCS_LIST = ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c\
		ft_putnbr.c\
		ft_putstr.c \
		ft_putchar.c \
		ft_convert_to_decimal.c
B_SRCS_LIST = ft_lstnew.c \
	 ft_lstadd_front.c \
	 ft_lstsize.c \
	 ft_lstlast.c \
	 ft_lstadd_back.c \
	 ft_lstdelone.c \
	 ft_lstclear.c \
	 ft_lstiter.c \
	 ft_lstmap.c
P_SRCS = ft_printf.c \
		ft_print_judge.c\
		ft_printf_i.c\
		ft_printf_p.c\
		ft_printf_u.c\
		ft_printf_ux.c\
		ft_printf_x.c
		
L_SRCS = $(addprefix srcs/libft/, $(L_SRCS_LIST))
B_SRCS = $(addprefix srcs/libft/, $(B_SRCS_LIST))

LOBJS = $(L_SRCS:%.c=%.o)
BOBJS = $(B_SRCS:%.c=%.o)
POBJS = $(P_SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(LOBJS) $(BOBJS) $(POBJS)
	ar rcs $(NAME) $(LOBJS) $(BOBJS) $(POBJS) 

%.o: %.c
	$(CC) -c -o $@  $<

clean :
	rm -rf $(LOBJS)
	rm -rf $(BOBJS)
	rm -rf $(POBJS)

fclean :
	rm -rf $(NAME)

re : clean fclean all

.PHONY: clean fclean all
	
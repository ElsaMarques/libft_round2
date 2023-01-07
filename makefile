# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 19:15:31 by ede-oliv          #+#    #+#              #
#    Updated: 2023/01/07 18:06:29 by ede-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

BFUNCTIONS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

OBJS = $(FUNCTIONS:.c=.o)
BONUS_O = ${BFUNCTIONS_ .c=.o}

.PHONY: all bonus clean fclean re

all: $(NAME)
 
$(OBJS): $(FUNCTIONS)
		gcc $(FLAGS) -c $(FUNCTIONS) -I $(HEADER)

$(BONUS_O): $(BFUNCTIONS)
		gcc $(FLAGS) -c $(BFUNCTIONS) -I $(HEADER)
		
$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus: .bonus_flag

.bonus_flag: ${BONUS_O}
	@ar -ruvcs ${NAME} ${BONUS_O}
	-@touch .bonus_flag

clean:
		rm -f $(OBJS) $(BONUS_O)
		-@rm -f .bonus_flag

fclean: clean
		rm -f $(NAME)

re: fclean all

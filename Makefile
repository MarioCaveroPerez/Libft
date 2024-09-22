# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marioper <marioper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 15:27:23 by marioper          #+#    #+#              #
#    Updated: 2024/09/20 23:57:44 by marioper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
FILES		= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen\
				ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat\
				ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr\
				ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr\
				ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri\
				ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
RM			= rm -f
SRC 		= $(addsuffix .c, $(FILES))
OBJ 		= $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
  

clean: $(RM) $(OBJ)

fclean: $(RM) $(NAME)

re: fclean all

.PHONY:  all clean fclean re


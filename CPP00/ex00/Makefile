# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 14:05:49 by juhaamid          #+#    #+#              #
#    Updated: 2023/11/02 14:05:12 by juhaamid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = megaphone.o

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all = $(NAME)

$(NAME): ${OBJS}
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

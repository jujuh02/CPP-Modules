# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 09:32:50 by juhaamid          #+#    #+#              #
#    Updated: 2023/11/15 09:15:52 by juhaamid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = 

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98 

all = ${NAME}

$(NAME): ${OBJS}
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean ${NAME}
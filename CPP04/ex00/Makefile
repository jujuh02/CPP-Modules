# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 09:32:50 by juhaamid          #+#    #+#              #
#    Updated: 2023/12/03 12:15:12 by juhaamid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aanimal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

all = ${NAME}

$(NAME): ${OBJS}
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean ${NAME}
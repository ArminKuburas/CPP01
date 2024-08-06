# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 08:47:56 by akuburas          #+#    #+#              #
#    Updated: 2024/08/05 08:48:42 by akuburas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exercise03

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
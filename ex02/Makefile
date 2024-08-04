# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 19:35:58 by akuburas          #+#    #+#              #
#    Updated: 2024/08/04 19:36:51 by akuburas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exercise02

SRCS = main.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:00:26 by brhajji-          #+#    #+#              #
#    Updated: 2022/11/11 10:24:02 by brhajji-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR = objs

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp\

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME = a.out

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98  #-g -fsanitize=address


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -MMD -o $(NAME)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJS_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS) $(OBJS_DIR) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re

-include $(DEPS)
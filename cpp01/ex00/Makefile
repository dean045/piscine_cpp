# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:00:26 by brhajji-          #+#    #+#              #
#    Updated: 2022/10/24 15:01:33 by brhajji-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR = objs

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp\

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME = zombie

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98  -g# -fsanitize=address


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:00:26 by brhajji-          #+#    #+#              #
#    Updated: 2022/10/25 18:14:04 by brhajji-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR = objs

SRCS = main.cpp zombieHorde.cpp Zombie.cpp\

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME = zombie

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98  -g3# -fsanitize=address


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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 16:30:18 by acomet            #+#    #+#              #
#    Updated: 2024/02/27 20:15:59 by acomet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Iell_deadlies

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -Wconversion

BUILD		=	build

SRCS		= 	main.cpp \
				Iell_deadlies.cpp \

OBJS 		= 	$(SRCS:%.cpp=$(BUILD)/%.o)

all: $(NAME)
.PHONY: all

$(BUILD)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(BUILD) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(BUILD)
.PHONY: clean

fclean: clean
	rm -f $(NAME)
.PHONY: fclean

re: fclean all
.PHONY: re

# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zenotan <zenotan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/15 00:31:01 by zenotan       #+#    #+#                  #
#    Updated: 2021/09/20 11:33:37 by ztan          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

FILES =	main.cpp

OUT = test1.txt.replace

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

.PHONY: all fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling executable..."
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@echo "compiling $@"
	@$(CC) -c $(FLAGS) -o $@ $<

clean:
	@echo "Removing objects..."
	@rm -rf $(OBJDIR)
	@rm -f $(OUT)

fclean: clean
	@echo "Deleting executable..."
	rm -f $(NAME)

re: fclean all

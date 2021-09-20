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

OUT = *.replace

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAM = -o $(NAME)

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

.PHONY: all fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) $(NAM)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) -c $(FLAGS) -o $@ $< 

clean:
	@rm -rf $(OBJDIR)
	@rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

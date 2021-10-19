# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ztan <ztan@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/19 20:48:53 by ztan          #+#    #+#                  #
#    Updated: 2021/10/19 20:48:54 by ztan          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

FILES =	main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) -c $(FLAGS) -o $@ $< 

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
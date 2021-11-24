NAME = Form

FILES =	main.cpp \
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Intern.cpp

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OUTPUTDIR = output_utils

OUTPUTLIB = $(OUTPUTDIR)/output.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(OUTPUTDIR)
	@echo "Compiling executable..."
	@$(CC) -L$(OUTPUTDIR) $(OUTPUTLIB) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@echo "Compiling $@"
	@$(CC) -I$(OUTPUTDIR) -c $(FLAGS) -o $@ $< 

clean:
	@make clean -C $(OUTPUTDIR)
	@echo "Removing objects..."
	@rm -rf $(OBJDIR)
	@rm -f *_shrubbery

fclean: clean
	@make fclean -C $(OUTPUTDIR)
	@echo "Deleting executable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME = ClapTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp\

all : $(NAME)

$(NAME): $(SRC)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm $(NAME)

fclean: clean

re: clean all

.PHONY: all re clean fclean
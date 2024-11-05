# Define the source file
SRC = main.cpp
# Generate object files from source files
OBJ = $(SRC:.cpp=.o)
# Compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
# Remove command
RM = rm -f
# Name of the output executable
NAME = Reference

# Default target
all: $(NAME)

# Linking the object files to create the executable
$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "compiled $(NAME)"

# Compiling the source files into object files
%.o: %.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

# Cleaning object files
clean:
		@$(RM) $(OBJ)
		@echo "removed object files"

# Full clean
fclean: clean
		@$(RM) $(NAME)
		@echo "removed $(NAME)"

# Rebuild
re: fclean all

.PHONY: all clean fclean re

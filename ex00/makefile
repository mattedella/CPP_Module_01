SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
NAME = Zombie
HEADERS = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo compiled $(NAME)

%.o: %.cpp $(HEADERS)
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)
		@echo removed object files

fclean: clean
		@$(RM) $(NAME)
		@echo removed $(NAME)

re: fclean all

.PHONY: all clean fclean re
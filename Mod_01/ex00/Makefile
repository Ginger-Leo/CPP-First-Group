NAME		= zombies
CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++11

CFILES 		= main.cpp \
			  Zombie.cpp \
			  newZombie.cpp \
			  randomChump.cpp

OFILES  	= $(CFILES:.cpp=.o) 


%.o			: %.cpp
				$(CC) $(FLAGS) -c $< -o $@

$(NAME)		: $(OFILES)
				$(CC) $(FLAGS) -o $(NAME) $(OFILES)

all			: $(NAME)

clean		:
				rm -f $(OFILES)

fclean		: clean
				rm -f $(NAME)

re			: fclean all

.PHONY		: all clean fclean re

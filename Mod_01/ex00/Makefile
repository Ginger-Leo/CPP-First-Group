NAME		= zombies
CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++11
CFILES 		= 	main.cpp\
				Zombies.cpp\
				newZombie.cpp\
				randomChump.cpp

OFILES  	= $(CFILES:.cpp=.o) 

$(NAME)		:	$(OFILES)
			$(CC) $(FLAGS) -o $(NAME) $(OFILES)

%.o			:%.cpp
			$(CC) $(FLAGS) -c $< -o $@

all			:	$(NAME)

clean		:
			rm -rf $(OFILES)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all

.PHONY 		: all clean fclean re 
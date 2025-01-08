NAME		= megaphone
CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++11
OBJ_DIR 	= obj
INCLUDES	= ./
CFILES 		= megaphone.cpp

OFILES  	= $(CFILES:.cpp=.o) 

$(NAME)		:	$(OFILES)
			$(CC) $(FLAGS) -o $(NAME) $(OFILES)

%.o			:%.cpp
			$(CC) $(FLAGS) -c $< -o $@

all			:	$(NAME)

clean		:
			rm -f $(OFILES)
			rm -rf $(OBJ_DIR)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all

.PHONY 		: all clean fclean re 
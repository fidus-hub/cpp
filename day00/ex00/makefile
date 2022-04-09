NAME = megaphone

SRC = megaphone.cpp

CC = c++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
	
fclean : clean

re : clean all
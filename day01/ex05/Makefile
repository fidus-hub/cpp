NAME = Harl

SRC =	main.cpp Harl.cpp

CC = c++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all :	$(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all
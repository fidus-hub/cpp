NAME = Formii

SRC =	main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp

CC = c++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all :	$(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all
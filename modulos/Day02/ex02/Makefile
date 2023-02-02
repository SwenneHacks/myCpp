# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/02/02 15:03:44 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed_2
SRC			=	Fixed.cpp main.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
CPP			=	c++ $(FLAGS)

OBJ			=	$(SRC:%.cpp=%.o)

#RAINBOW
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

all: $(NAME)

$(NAME):
	$(CPP) $(SRC) -o $(NAME)
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

test: re
	./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

clean:
	$(RM) $(OBJ)
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)F$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re

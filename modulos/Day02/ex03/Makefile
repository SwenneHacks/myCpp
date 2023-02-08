# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/02/08 17:26:43 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed_03
SRC			=	Fixed.cpp Point.cpp main.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
OBJ			=	$(SRC:%.cpp=%.o)
CPP			=	c++ $(FLAGS)

#RAINBOW
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

#OBJECTS:
%.o: %.cpp
	@echo "$(P)Compiling$(W) $<"
	@$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $^ -o $(NAME)
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

clean:
	$(RM) $(OBJ)
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)F$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

run: re
	./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

.PHONY:	all clean fclean re

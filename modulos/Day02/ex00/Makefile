# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/02/07 14:48:22 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#PROJECT:
NAME		=	Fixed_00
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -o
SRC			=	Fixed.cpp main.cpp
OBJ			=	$(SRC:%.cpp=%.o)

#SETUP:
CPP			=	c++
RM			= 	rm -rf
NEW_DIR		= 	mkdir -p

#COLORS:
P = \x1b[35m
B = \x1b[34m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

#OBJECTS:
%.o: %.cpp
	@echo "\n$(P)Compiling$(W) $< $@"
	$(CPP) $(FLAGS) -c $< -o $@

#RULES:

all: $(NAME)
	
$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(NAME) $^
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

run: re
	./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

clean:
	$(RM) $(OBJ)
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)f$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re
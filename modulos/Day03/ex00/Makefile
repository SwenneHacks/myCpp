# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/03/24 14:25:30 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#PROJECT:
NAME		=	ClapTrap
FLAGS		=	-Wall -Wextra -Werror -std=c++98 
SRC			=	ClapTrap.cpp main.cpp
OBJ			=	$(SRC:%.cpp=%.o)

#SETUP:
CPP			=	c++
RM			= 	rm -rf
NEW_DIR		= 	mkdir -p

#COLORS:
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

#OBJECTS:
%.o: %.cpp
	@echo "$(P)Compiling$(W) $<"
	@$(CPP) $(FLAGS) -I . -c $< -o $@ 

#RULES:
all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(P)Compiling$(W) with $(FLAGS)"
	@$(CPP) $(FLAGS) $^ -o $(NAME)
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

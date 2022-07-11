# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2020/10/10 21:40:10 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	crappy_phonebook
SRC			=	phonebook.cpp add.class.cpp search.class.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
CPP			=	clang++

OBJ			=	$(SRC:%.cpp=%.o)

#RAINBOW
P = \x1b[35;01m
B = \x1b[34;01m
Y = \x1b[33;01m
G = \x1b[32;01m
R = \x1b[31;01m
W = \x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -o $(NAME) $^
	@mkdir -p obj
	@mv $(OBJ) obj
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"
	touch .gitignore
	echo $(NAME) >> .gitignore

%.o: %.c
	@echo "\n$(P)Compiling$(W) $< $@"
	$(CPP) $(FLAGS) -c $< -o $@

test: all
	./crappy_phonebook ADD

clean:
	$(RM) $(OBJ)
	@rm -rf obj
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)f$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re
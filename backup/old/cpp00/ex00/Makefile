# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2021/01/18 22:59:05 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRC			=	megaphone.cpp
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
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"
	@touch .gitignore
	@echo $(NAME) > .gitignore
	@echo .gitignore >> .gitignore

%.o: %.c
	@echo "\n$(P)Compiling$(W) $< $@"
	$(CPP) $(FLAGS) -o $@ -c $<

test: re
	./megaphone bla bla bla
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone
	@echo "\n$(B)\______ Done Testing _____/ $(W)\n"

clean:
	$(RM) $(OBJ) .gitignore
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)f$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re
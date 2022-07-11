# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2021/01/29 09:17:03 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	crappy_phonebook
SRC			=	main.cpp phonebook.class.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
CPP			=	clang++

OBJ			=	$(SRC:%.cpp=%.o)

#RAINBOW
P = \x1b[35m
B = \x1b[34m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
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

test: re
	./crappy_phonebook
	@echo "\n$(B)COOL COOL COOL - hope you had fun o/\n$(W)"

clean:
	$(RM) $(OBJ)
	@rm -rf obj .gitignore
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)f$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re
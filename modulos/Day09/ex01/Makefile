# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/12/15 20:18:26 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	RPN
PROJECT 	= 	Exercise 01: Reverse Polish Notation
SRC			=	main.cpp BitcoinExchange.cpp

FLAGS		= 	-Wall -Werror -Wextra 
CPP			= 	c++ -std=c++98

#FILES:
INC			:= include
SRCS		:= $(shell find ./* -type f -name "*.cpp")
OBJS		:= $(SRCS:%.cpp=%.o)

#MESSAGES:
START_MSG 	= "$(P)Compiling$(W) $<"
FLAGS_MSG 	= "$(P)Compiling$(W) using $(CPP) \n$(P)and flags $(W)$(FLAGS)\n"
RUN_MSG 	= "$(G)run tests $(W)with $(Y)'make run'\n"
DONE_MSG 	= "\n$(R)\______ Done $(B)$@$(R) _____/ $(W)\n"

#COLORS:
C = \x1b[37m
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

%.o: %.cpp
	@echo $(START_MSG)
	@$(CPP) $(FLAGS) -I $(DIRS) -c $< -o $@ 

all: start $(NAME) 
	@echo $(DONE_MSG)

start:
	@echo $(START_MSG)$(PROJECT)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $(NAME)
	@echo $(FLAGS_MSG)$(RUN_MSG) $(DONE_MSG) 

clean:
	@$(RM) $(OBJS) 
	@echo $(DONE_MSG)

fclean: clean
	@$(RM) $(NAME)
	@echo $(DONE_MSG)

re:	fclean all
	@echo $(DONE_MSG)

run: re clean
	./$(NAME)

test: re
	./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	echo $P 42
	./RPN "7 7 * 7 -"
	echo $P 42
	./RPN "1 2 * 2 / 2 * 2 4 - +"
	echo $P 0
	./RPN "(1 + 1)"
	echo $P Error
	run: 	all
	./$(NAME) "5 5 * 1 - 1 +"
	
test: 	re
		./test.sh

.PHONY:	all clean fclean re
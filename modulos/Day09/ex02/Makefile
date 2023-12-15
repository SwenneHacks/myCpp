# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2023/12/15 20:19:58 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	PmergeMe
PROJECT		= 	Exercise 02: PmergeMe
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
	./$(NAME) `jot -r 3000 1 1000 | tr '\n' ' '`

test: re clean
	./PmergeMe 3 5 9 7 4
	echo $P Before: 3 5 9 7 4
	echo $P After: 3 4 5 7 9
	echo $P Time to process a range of 5 elements with std::[..] : 0.00031 us
	echo $P Time to process a range of 5 elements with std::[..] : 0.00014 us
	./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
	echo $P Before: 141 79 526 321 [...]
	echo $P After: 79 141 321 526 [...]
	echo $P Time to process a range of 3000 elements with std::[..] : 62.14389 us
	echo $P Time to process a range of 3000 elements with std::[..] : 69.27212 us
	./PmergeMe "-1" "2"
	echo $P Error

# For OSX USER: ./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`

.PHONY:	all clean fclean re
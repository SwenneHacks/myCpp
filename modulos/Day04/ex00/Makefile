# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xander <xander@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/29 14:21:50 by xander        #+#    #+#                  #
#    Updated: 2023/04/11 11:45:35 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	polymorphism
PROJECT		= 	CPP Modulo 4 - ex00

FLAGS		= 	-Wall -Werror -Wextra 
CPP			= 	c++ -std=c++98

#FILES:
DIRS		:= Classes
SRCS		:= $(shell find ./* -type f -name "*.cpp")
INCS		:= $(shell find ./* -type f -name "*.hpp")
OBJS		:= $(SRCS:%.cpp=%.o)

#COLORS:
C = \x1b[37m
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

%.o: %.cpp
	@echo "$(P)Compiling$(W) $<"
	@$(CPP) $(FLAGS) -I $(DIRS) -c $< -o $@ 

all: $(NAME)
	@echo "\n$(G) you can now run ./$(NAME) $(W)\n"
	@echo "\n$(P)\______ Done $(PROJECT) _____/ $(W)\n"

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $(NAME)
	@echo "$(C)Compiling$(W) with $(CPP)"
	@echo "$(C)and flags $(W)$(FLAGS)"
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

clean:
	$(RM) $(OBJS)
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)F$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

run: all
	@./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

.PHONY:	all clean fclean re

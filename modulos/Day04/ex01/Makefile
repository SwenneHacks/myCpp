# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/11 11:25:37 by swofferh      #+#    #+#                  #
#    Updated: 2023/04/16 18:49:47 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	world_on_fireee
PROJECT		= 	CPP Modulo 4 - ex01

FLAGS		= 	-Wall -Werror -Wextra #-g -fsanitize=address
CPP			= 	c++ -std=c++98

#FILES:
DIRS		:= Classes
SRCS		:= $(shell find ./* -type f -name "*.cpp")
INCS		:= $(shell find ./* -type f -name "*.hpp")
OBJS		:= $(SRCS:%.cpp=%.o)

#COLORS:
C = \x1b[36m
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
	@echo "\n$(P) you can now run ./$(NAME) $(W)\n"

$(NAME): $(OBJS)
	@echo "$(P)Compiling$(W) with $(CPP) $(FLAGS)"
	@$(CPP) $(FLAGS) $^ -o $(NAME)
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

clean:
	$(RM) $(OBJS)
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)F$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

run: re
	@./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

.PHONY:	all clean fclean re

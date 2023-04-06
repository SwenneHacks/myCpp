# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xander <xander@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/29 14:21:50 by xander        #+#    #+#                  #
#    Updated: 2023/04/06 15:31:55 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	world_on_fireee
FLAGS		= 	-Wall -Werror -Wextra -std=c++98

#SETUP:
CC			=	c++
RM			= 	rm -rf
NEW_DIR		= 	mkdir -p

#FILES:
DIRS		:= Classes
SRCS		:= $(shell find ./* -type f -name "*.cpp")
INCS		:= $(shell find ./* -type f -name "*.hpp")
OBJS		:= $(SRCS:%.cpp=%.o)

#COLORS:
P = \x1b[35m
B = \x1b[34;1m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

%.o: %.cpp
	@echo "$(P)Compiling$(W) $<"
	@$(CC) $(FLAGS) -I $(DIRS) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(P)Compiling$(W) with $(FLAGS)"
	@$(CC) $(FLAGS) $^ -o $(NAME)
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"

clean:
	$(RM) $(OBJ)
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

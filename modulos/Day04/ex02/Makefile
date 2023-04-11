# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xander <xander@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/29 14:21:50 by xander        #+#    #+#                  #
#    Updated: 2023/04/11 14:47:23 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME		=	abstract_class
PROJECT		= 	CPP Modulo 4 - ex02

FLAGS		= 	-Wall -Werror -Wextra 
CPP			= 	c++ -std=c++98

#FILES:
DIRS		:= Classes Colors
SRCS		:= $(shell find ./* -type f -name "*.cpp")
INCS		:= $(shell find ./* -type f -name "*.hpp")
OBJS		:= $(SRCS:%.cpp=%.o)

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

run: all
	@./$(NAME)
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

.PHONY:	all clean fclean re

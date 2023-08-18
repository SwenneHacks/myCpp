# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/08/04 16:38:45 by swofferh      #+#    #+#                  #
#    Updated: 2023/08/18 16:47:52 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	converter
PROJECT		= 	CPP Modulo 06 - ex00

FLAGS		= 	-Wall -Werror -Wextra 
CPP			= 	c++ -std=c++98

#FILES:
DIRS		:= sources
SRCS		:= $(shell find ./* -type f -name "*.cpp")
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
	@echo "\n$(G)\______ Done Remaking _____/ $(W)\n"

run: re clean
	@./$(NAME) 5
	@echo " _________________ " 
	@./$(NAME) 99
	@echo " _________________ " 
	@./$(NAME) 33
	@echo " _________________ " 
	@./$(NAME) 126
	@echo " _________________ " 
	@./$(NAME) t
	@echo " _________________ " 
	@./$(NAME) 32.5
	@echo " _________________ "
	@./$(NAME) nan
	@echo " _________________ " 
	@./$(NAME) 0
	@echo " _________________ " 
	@./$(NAME) +1
	@echo " _________________ " 
	@./$(NAME) -1.5
	@echo " _________________ " 
	@./$(NAME) 0.5f
	@echo " _________________ " 
	@./$(NAME) 6.6666666f
	@echo " _________________ " 
	@./$(NAME) tttttt
	@echo " _________________ "  
	
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

.PHONY:	all clean fclean re

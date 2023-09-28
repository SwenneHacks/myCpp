# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/08/04 16:38:45 by swofferh      #+#    #+#                  #
#    Updated: 2023/09/28 17:59:37 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	converter
PROJECT		= 	CPP Modulo 06 - ex00

FLAGS		= 	-Wall -Werror -Wextra 
CPP			= 	c++ -std=c++98

#FILES:
INC			:= includes
SRCS		:= $(shell find ./* -type f -name "*.cpp")
OBJS		:= $(SRCS:%.cpp=%.o)

#MESSAGES:
START_MSG 	= "$(P)Compiling$(W) $<"
FLAGS_MSG 	= "$(P)Compiling$(W) using $(CPP) \n$(P)and flags $(W)$(FLAGS)\n"
RUN_MSG 	= "$(G)  run tests with $(Y)'make run'\n"
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
	@$(CPP) $(FLAGS) -I $(INC) -c $< -o $@ 

all: start $(NAME) 
	@echo $(DONE_MSG)

start: 
	@echo $(START_MSG)$(PROJECT)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $(NAME)
	@echo $(FLAGS_MSG) $(RUN_MSG) $(DONE_MSG) 

clean:
	@$(RM) $(OBJS) 
	@echo $(DONE_MSG)

fclean: clean
	@$(RM) $(NAME)
	@echo $(DONE_MSG)

re:	fclean all
	@echo $(DONE_MSG)

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
	@echo $(DONE_MSG)

.PHONY:	all clean fclean re

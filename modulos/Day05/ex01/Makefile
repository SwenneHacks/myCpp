# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/07/21 18:37:51 by swofferh      #+#    #+#                  #
#    Updated: 2023/07/21 18:37:53 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Bureaucrat
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC_DIR	=	.
INC_DIR	=	.

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
INCS	=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp

SHELL		:= /bin/bash
SOURCES		:= $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJS		:= $(SOURCES:.cpp=.o)
OBJECTS		:= $(patsubst %,%,$(OBJS))

PINK = \x1b[35;01m
BLUE = \x1b[34;01m
YELLOW = \x1b[33;01m
GREEN = \x1b[32;01m
RED = \x1b[31;01m
WHITE = \x1b[31;37m
RESET = \x1b[0m

START			=	"$(BLUE)---\nStarting...!\n---\n$(RESET)"
MESSAGE			=	"$(BLUE)---\nCompiling done!\n---\n$(RESET)"
COMP_MESSAGE	=	"$(GREEN)Building C++ object... $(RESET)%-33.33s\r\n"
REM_MESSAGE		=	"$(RED)Removing files...$(RESET)"

ifdef FSAN
	CFLAGS += -g -fsanitize=address
else ifdef DEBUG
	CFLAGS += -g
else
	CFLAGS += -Ofast
endif

all:	$(NAME)

%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

$(OBJ_DIR):
	@mkdir $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@printf $(START)
	@printf $(COMP_MESSAGE) $(SOURCES)
	@printf $(MESSAGE)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

fsan:
	make FSAN=1

resan: fclean
	make fsan

debug:
	make DEBUG=1

rebug: fclean
	make debug

run: all
	./$(NAME)

rerun: fclean all
	./$(NAME)

.PHONY:	all clean fclean re

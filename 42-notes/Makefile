# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/07 20:56:32 by swofferh      #+#    #+#                  #
#    Updated: 2020/11/01 18:07:57 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
CPP			=	clang++

#RAINBOW
P = \x1b[35m
B = \x1b[34m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

t0:
	@$(CPP) D00.cpp
	@./a.out
	@echo "\n$(P)\______ Done testing d00 _____/ $(W)\n"

t1:
	@$(CPP) D01.cpp
	@echo ""
	@./a.out
	cat example.txt
	@echo "\n$(P)\______ Done testing d01 _____/ $(W)\n"

clean:
	$(RM) a.out example.txt
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"


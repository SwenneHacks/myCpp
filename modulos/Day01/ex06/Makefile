
NAME		=	harlFilter
SRC			=	Harl.cpp main.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
CPP			=	c++

OBJ			=	$(SRC:%.cpp=%.o)

#RAINBOW
P = \x1b[35m
B = \x1b[34m
Y = \x1b[33m
G = \x1b[32m
R = \x1b[31m
W = \x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -o $(NAME) $^
	@mkdir -p obj
	@mv $(OBJ) obj
	@echo "\n$(P)\______ Done Compiling _____/ $(W)\n"
	touch .gitignore
	@echo $(NAME) >> .gitignore
	@echo $(OBJ)  >> .gitignore
	@echo .gitignore >> .gitignore

%.o: %.c
	@echo "\n$(P)Compiling$(W) $< $@"
	$(CPP) $(FLAGS) -c $< -o $@

test: re
	./$(NAME) WARNING
	@echo "\n$(B)\______ Done Testing _____/\n$(W)"

clean:
	@$(RM) $(OBJ)
	@$(RM) -r obj .gitignore
	@echo "\n$(R)\______ Done Cleaning _____/ $(W)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "\n$(R)\______ Done $(B)f$(R)cleaning _____/ $(W)\n"

re:	fclean all
	@echo "\n$(G)\______ Done with Re _____/ $(W)\n"

.PHONY:	all clean fclean re
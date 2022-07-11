
NAME = span
SRC = span.cpp main.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98
CXX = clang++

ifeq ($(DEBUG), 1)
	CFLAGS += -g -fsanitize=address
endif

all: $(NAME)

%.o: %.cpp
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

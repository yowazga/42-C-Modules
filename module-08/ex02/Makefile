
NAME := mutated
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

SRC := main.cpp
OBJ := $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o : %.cpp MutantStack.hpp MutantStack.tpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

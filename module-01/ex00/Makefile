NAME := BrainZ
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra   -std=c++98
SRC := main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ :=  $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o : %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
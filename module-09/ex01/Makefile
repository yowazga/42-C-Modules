NAME = RPN
SRCS = main.cpp RPN.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
CXX = c++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o : %.cpp BitcoinExchange.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
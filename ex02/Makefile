CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++11

SRC = Fixed.cpp main.cpp
OBJS = $(SRC:.cpp=.o)

# Target executable
TARGET = fixed

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
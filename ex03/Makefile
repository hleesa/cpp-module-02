
CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SOURCES		= \
	bsp.cpp \
	Fixed.cpp \
	main.cpp \
	Point.cpp \

OBJECTS		= $(SOURCES:.cpp=.o)

TARGET		= fixed

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS)

fclean:clean
	$(RM) $(TARGET)

re: fclean
	make all

.PHONY: all clean fclean re

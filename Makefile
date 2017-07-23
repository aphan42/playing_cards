CXX= g++
CXX_STD= c++11
CXXFLAGS= -Wall -g -std=$(CXX_STD)

SRCS= $(wildcard src/*.cpp)
HEADER= $(wildcard includes/*.h)
OBJS= $(SRCS:.cpp=.o)
UNIT_TEST=unit_tests/

all: test
	# @echo $(SRCS)
	# @echo $(HEADER)
	# @echo $(OBJS)

test: card_tests

card_tests: comparison_test print_test

comparison_test:  $(SRCS) $(HEADER)
	$(CXX) $(CXXFLAGS) $^ $(addprefix $(UNIT_TEST), comparison_test.cpp) -o $@

print_test: $(SRCS) $(HEADER)
	$(CXX) $(CXXFLAGS) $^ $(addprefix $(UNIT_TEST), print_test.cpp)  -o $@

.PHONY: clean

clean:
	rm -f src/*.o $(UNIT_TEST)*.o *.o

distclean: clean
	rm -f comparison_test print_test

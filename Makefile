CC = g++
C11 = -std=c++11
CPP_SRC = $(shell find src -name *.cpp)
CPP_OBJS = $(patsubst src/%.cpp, objs/%.o, $(CPP_SRC))
LKFLAGS = -fPIC -shared
INC = -I/Users/lxy/Documents/c++/inc

main: $(CPP_OBJS)
	$(CC) -o main $(CPP_OBJS)

objs/%.o: src/%.cpp
	$(CC) $(C11) -c $^ -o $@ $(INC)


.PHONY = clean debug
clean:
	rm objs/*.o main
debug:
	@echo $(CPP_OBJS)
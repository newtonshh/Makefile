CC = g++
C11 = -std=c++11
CPP_SRC = $(shell find src -name *.cpp)
CPP_OBJS = $(patsubst src/%.cpp, objs/%.o, $(CPP_SRC))
LKFLAGS = -fPIC -shared
INC = -I./inc
OBJ = objs/*.o
TARGET = libadd.so

$(TARGET): objs/add.o
	$(CC) $(LKFLAGS) -o $@ $^
	mv $(TARGET) ../

objs/%.o: src/%.cpp
	$(CC) $(C11) -c $^ -o $@ $(INC)

.PHONY = clean debug
clean:
	rm objs/*.o ../$(TARGET)
debug:
	@echo $(CPP_OBJS)
TARGET = bin/guessing-game
SRC = $(wildcard src/*.c)
OBJ = $(patsubt src/%.c, obj/%.o, $(SRC))

default: $(TARGET)

clean: 
	rm -f obj/*.o
	rm -f bin/*

$(TARGET): $(OBJ) 
	gcc -o $@ $? 

obj/%.o : src/%.c 
	gcc -c $^ -o $@ -Iinclude 

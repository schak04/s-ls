all: main

 # g flag because I'll try learning gdb better by using it in this project too
 # -fsanitize=address since it is useful for memory-related bugs
main: src/main.c 
	gcc src/main.c -Wall -Wextra -g -fsanitize=address -o bin/s-ls

clean:
	rm -f bin/s-ls

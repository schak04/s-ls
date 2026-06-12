all: main

 # g flag because I'll try learning gdb better by using it in this project too
main: src/main.c 
	gcc src/main.c -Wall -Wextra -g -o bin/s-ls

clean:
	rm -f bin/s-ls

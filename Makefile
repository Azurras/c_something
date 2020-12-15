build:
	gcc -o main src/main.c src/file_endings.h src/file_endings.c

clean:
	rm ./main

run:
	./main
all: original_fizz_buzz base_5_fizz_buzz fizz_buzz_woof


fizz.o: fizz.c fizz.h
	gcc -c fizz.c

buzz.o: buzz.c buzz.h
	gcc -c buzz.c

fizz_buzz.o: fizz.h buzz.h fizz_buzz.c fizz_buzz.h
	gcc -c fizz_buzz.c

original_fizz_buzz.o: fizz.h buzz.h fizz_buzz.h original_fizz_buzz.c
	gcc -c original_fizz_buzz.c

base_5_fizz_buzz.o: fizz.h buzz.h fizz_buzz.h base_5_fizz_buzz.c
	gcc -c base_5_fizz_buzz.c

fizz_buzz_woof.o: fizz.h buzz.h fizz_buzz_woof.c
	gcc -c fizz_buzz_woof.c

original_fizz_buzz: fizz.o buzz.o fizz_buzz.o original_fizz_buzz.o
	gcc fizz.o buzz.o fizz_buzz.o original_fizz_buzz.o -o original_fizz_buzz

base_5_fizz_buzz: fizz.o buzz.o fizz_buzz.o base_5_fizz_buzz.o
	gcc fizz.o buzz.o fizz_buzz.o base_5_fizz_buzz.o -o base_5_fizz_buzz

fizz_buzz_woof: fizz.o buzz.o fizz_buzz_woof.o
	gcc fizz.o buzz.o fizz_buzz_woof.o -o fizz_buzz_woof

# CLEAN
clean:
	rm -rf *.o

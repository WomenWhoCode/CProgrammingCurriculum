all: file_hider_shift message_hider_shift


shift_cipher.o: shift_cipher.c shift_cipher.h
	gcc -c shift_cipher.c

message_hider.o: message_hider.c shift_cipher.h
	gcc -c message_hider.c

file_hider.o: file_hider.c shift_cipher.h
	gcc -c file_hider.c

file_hider_shift: file_hider.o shift_cipher.o
	gcc file_hider.o shift_cipher.o -o file_hider_shift

message_hider_shift: message_hider.o shift_cipher.o
	gcc message_hider.o shift_cipher.o -o message_hider_shift

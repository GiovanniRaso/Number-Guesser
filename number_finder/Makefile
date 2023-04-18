number_game: number_game.o check_num.o
	gcc number_game.o check_num.o -o number_game

number_game.o: number_game.c
	gcc -c number_game.c -o number_game.o

check_num.o: check_num.c 
	gcc -c check_num.c -o check_num.o
clean:
	rm -f *.o number_game
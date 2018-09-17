main: main.o quick.o create.o display.o partition.o swap.o
		gcc -g -o main main.o quick.o create.o display.o partition.o swap.o
main.o: main.c
		gcc -c -o main.o main.c
quick.o: quick.c
		gcc -c -o quick.o quick.c
create.o: create.c
		gcc -c -o create.o create.c
display.o: display.c
		gcc -c -o display.o display.c
partition.o: partition.c
		gcc -g -c -o partition.o partition.c
swap.o: swap.c
		gcc -g -c -o swap.o swap.c
clean:
		rm -rf *.o

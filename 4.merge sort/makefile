main:	main.o merge_sort.o merge.o copy.o
	gcc -g -o main main.o merge_sort.o merge.o copy.o
main.o: main.c
	gcc -g -c -o main.o main.c
merge_sort.o: merge_sort.c
	gcc -g -c -o merge_sort.o merge_sort.c
merge.o: merge.c
	gcc -g -c -o merge.o merge.c
copy.o:	copy.c
	gcc -g -c -o copy.o copy.c
clean:
	rm -rf *.o main

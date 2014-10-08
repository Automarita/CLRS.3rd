CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -ansi
OBJ_MYSORT = mysort.o quick_sort.o selection_sort.o insertion_sort.o bubble_sort.o merge_sort.o
all : mysort rand_num_gen

mysort : $(OBJ_MYSORT)
	$(CC) -o mysort $(OBJ_MYSORT) $(CFLAGS)
	
mysort.o: mysort.c
	$(CC) -c mysort.c $(CFLAGS)

quick_sort.o: quick_sort.c
	$(CC) -c quick_sort.c $(CFLAGS)
	
selection_sort.o: selection_sort.c
	$(CC) -c selection_sort.c $(CFLAGS)
	
insertion_sort.o: insertion_sort.c
	$(CC) -c insertion_sort.c $(CFLAGS)
	
bubble_sort.o: bubble_sort.c
	$(CC) -c bubble_sort.c $(CFLAGS)

merge_sort.o: merge_sort.c
	$(CC) -c merge_sort.c $(CFLAGS)


rand_num_gen: rand_num_gen.o

rand_num_gen.o: rand_num_gen.c
	$(CC) -c rand_num_gen.c $(CFLAGS)

.PHONY: clean

clean : 
	rm mysort rand_num_gen rand_num_gen.o $(OBJ_MYSORT)

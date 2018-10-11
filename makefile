all: main.o
	gcc -o linked_list main.o

main.o: linked_list.o
	gcc -c main.c
	
list_list.o:
	gcc -c linked_list.c

run:
	./linked_list
	
clean:
	rm *.o
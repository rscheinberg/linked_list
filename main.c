#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"

int main() {
	struct node *head = make_node(5, NULL);
	for(int i = 4; i; i--) {
		head = insert_front(head, i);
	}

	printf("\nStruct stores it's original position (int), and a pointer to the next node\n");
	printf("struct node {int original_position; struct node *next;};\n\n");
	printf("[Testing list with elements 1-5]\n");
	printf("(Using print_list)\n");
	
	print_list(head);

	printf("\n[Testing list with elements 0-5]\n");
	printf("(Element 0 added using insert_front)\n");
	head = insert_front(head, 0);
	print_list(head);

	printf("\n[Testing free]t\n");
	printf("(Before using free)\n");
	printf("Value of head pointer is %d\n", (int) head);
	head = free_list(head);
	printf("(After using free, should be different value)\n");
	printf("Value of pointer is %d\n", (int) head);
	return 0;
}
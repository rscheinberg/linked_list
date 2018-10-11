#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct node * make_node(int position, struct node *following) {
	struct node *new = malloc(sizeof(struct node));
	new->original_position = position;
	new->next = following;
	return new;
}

void print_list(struct node *linked_node) {
	while(linked_node) {
		printf("Element's Position: %d\n", linked_node->original_position);
		linked_node = linked_node->next;
	}
}

struct node * insert_front(struct node *front, int position) {
	struct node *insert = make_node(position, front);
	return insert;
}

struct node * free_list(struct node *linked_node) {
	struct node *front = linked_node;	
	int i = 1;
	struct node *val;
	while(linked_node) {
		struct node *following = linked_node->next;
		free(linked_node);
		if(i) {
			struct node *val = linked_node;
		}
		linked_node = following;
	}
	return val;
}
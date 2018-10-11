struct node {int original_position; struct node *next;};
struct node * make_node(int position, struct node *following);
void print_list(struct node *linked_node);
struct node * insert_front(struct node *insert, int position);
struct node * free_list(struct node *list);
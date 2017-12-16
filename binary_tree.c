#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"
#define HEIGHT 10

/*Function to add a new node to the tree*/
node* new_node(int data) {
	node* node = malloc(sizeof *node);
	node -> data = data;
	node -> left = node -> right = NULL;

	return node;
}

void print_2d_util(node *root, int space) {
	if (root == NULL) return;
	space += HEIGHT;
	print_2d_util(root -> right, space);
	printf("\n");
	for (int i = HEIGHT; i < space ; i++) printf(" ");
	printf("%d\n", root -> data);
	print_2d_util(root -> left, space);
}

void print_2d(node *root) {
	print_2d_util(root, 0);
}

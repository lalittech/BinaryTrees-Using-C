#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct node {
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node node;

node* new_node(int data);

void print_2d_util(node *root, int space);

void print_2d(node *root);

#endif

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

/*Utility to Print the Binary Tree*/

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

/*Tree Transversals, Depth First Transversals*/

/*In-Order Transversal, process the left node, print the root, process the right node*/
void inorder_transversal(node* root) {
	if (root == NULL) return;
	inorder_transversal(root -> left);
	printf("%d ", root -> data);
	inorder_transversal(root -> right);
}

/*Pre-Order Transversal, print the root, process the left node, process the right node*/
void preorder_transversal(node *root) {
	if (root == NULL) return;
	printf("%d ", root -> data);
	preorder_transversal(root -> left);
	preorder_transversal(root -> right);
}

/*Post-Order Transversal, process the left node, process the right node,  print the root*/
void postorder_transversal(node *root) {
	if (root == NULL) return;
	preorder_transversal(root -> left);
	preorder_transversal(root -> right);
	printf("%d ", root -> data);
}

/*Tree Transversals, Breadth First Search*/

void levelorder_transversal(node *root) {

	/*Find the height of the Tree*/
	int total_height = height(root);
	for (int level = 1 ; level <= total_height ; level++)
		print_level(root, level);
}

void print_level(node *root, int level) {
	if (root == NULL) return;
	if (level == 1)
		printf("%d ", root -> data);
	print_level(root -> left, level - 1);
	print_level(root -> right, level - 1);
}

int height(node *root) {
	if (root == NULL) return 0;
	int l_height = height(root -> left);
	int r_height = height(root -> right);

	if (l_height > r_height) return (l_height+1);
	return (r_height+1);
}

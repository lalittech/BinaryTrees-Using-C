#include <stdio.h>

#include "binary_tree.h"

int main() {
	node *root = new_node(1);
	root -> left = new_node(2);
	root -> right = new_node(3);
	root -> left -> left = new_node(4);
	root -> left -> right = new_node(5);
	printf("Binary Tree : \n");
	print_2d(root);
	printf("\nIn-Order Depth First Transversal\n");
	inorder_transversal(root);
	printf("\nPre-Order Depth First Transversal\n");
	preorder_transversal(root);
	printf("\nPost-Order Depth First Transversal\n");
	postorder_transversal(root);
	printf("\n");
}

#include <stdio.h>

#include "binary_tree.h"

int main() {
	node *root = new_node(1);
	root -> left = new_node(2);
	root -> right = new_node(3);
	root -> left -> left = new_node(4);

	print_2d(root);
}

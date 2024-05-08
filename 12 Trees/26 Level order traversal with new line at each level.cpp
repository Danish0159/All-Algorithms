/* Function to line by line print level order traversal a
* tree*/

#include <bits/stdc++.h>
using namespace std;
/*
A binary tree node has data, pointer to left child and a pointer to right child.


*/

/* A binary tree node has data,
pointer to left child
and a pointer to right child */


class node {
public:
	int data;
	node *left, *right;
};

/* Function prototypes */
void printCurrentLevel(node* root, int level);
int height(node* node);
node* newNode(int data);

/* Print nodes at a given level */

// SEE AN IMAGE FROM INTERNET OF BINARY TREE AND SEE HOW printLevelOrder and printGivenLevel are working in conjunction.
/*
If the current level is greater than 1, the function recursively calls itself for the left and right subtrees with a reduced level (level - 1). This ensures that the function moves down the tree to the specified level.
The recursive calls to printGivenLevel for the left and right subtrees effectively traverse the tree level by level until the desired level is reached. When the level becomes 1, it prints the data of the nodes encountered at that level.

This function is typically used in conjunction with the printLevelOrder function, which prints the nodes of the tree in a level-wise fashion, calling printGivenLevel for each level from 1 to the height of the tree.
*/

void printGivenLevel(struct node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		printf("%d ", root->data);
	else if (level > 1) {
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

void printLevelOrder(struct node* root)
{
	int h = height(root);
	int i;
	for (i = 1; i <= h; i++) {
		printGivenLevel(root, i);
		printf("\n");
	}
}

/* Compute the "height" of a tree -- the number of
nodes along the longest path from the root node
down to the farthest leaf node.*/
int height(node* node)
{
	if (node == NULL)
		return 0;
	else {
		/* compute the height of each subtree */
		int lheight = height(node->left); //compares the heights of the left and right subtrees. If the left subtree is taller, the height of the current subtree is set to lheight + 1. The +1 represents the current level of the node itself.
		int rheight = height(node->right); // If the right subtree is taller or if the heights are equal, the height of the current subtree is set to rheight + 1. The function essentially calculates the height of each subtree and returns the height of the larger subtree plus 1, taking into account the current level. This process continues recursively until it reaches the base case where a NULL node is encountered, and the height is considered as 0.

		/* use the larger one */
		if (lheight > rheight) {
			return (lheight + 1);
		}
		else {
			return (rheight + 1);
		}
	}
}


/* Helper function that allocates
a new node with the given data and
NULL left and right pointers. */
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

/* Driver code*/
int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Level Order traversal of binary tree is \n";
	printLevelOrder(root);

	return 0;
}


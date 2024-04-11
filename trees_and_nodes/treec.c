#include <stdio.h>
#include <stdlib.h>

/**make a node*/
struct node{
	int data;
	struct node *left;
	struct node *right;
};
/** traverse through the node using pre-order traversal*/
void preorderTraversal(struct node* root)
{
	if (root == NULL)
		return;
	printf("%d ->", root->data);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

/** create a new node*/
struct node* createNode(int value)
{
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}
/** insert on the left side of the node*/
struct node* insertLeft(struct node* root, int value)
{
	root->left = createNode(value);
	return (root->left);
}
/*insert on the right side of the node*/
struct node* insertRight(struct node* root, int value)
{
	root->right = createNode(value);
	return (root->right);
}

int main()
{
	struct node* root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 4);
	insertLeft(root->left, 5);
	insertRight(root->left, 9);

	printf("\nPreorder Traversal\n");
	preorderTraversal(root);

	return 0;

}




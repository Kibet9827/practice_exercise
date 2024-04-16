#include <stdio.h>
#include <stdlib.h>

/** defining the tree node*/

struct treenode {
	int value;
	struct treenode *left;
	struct treenode *right;
};

/** function to create new node*/
struct treenode* createnode(int value){
	struct treenode* result = malloc(sizeof(struct treenode));
		if (result != NULL) {
			result->left = NULL;
			result->right = NULL;
			result->value = value;
		}
	return (result);
}

void preorderTraversal(struct treenode* root)
{
	if (root == NULL)
		return;
	printf("%d ->", root->value);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
struct treenode* insertLeft(struct treenode* root, int value)
{
	root->left = createnode(value);
	return (root->left);
}

struct treenode* insertRight(struct treenode* root, int value)
{
	root->right = createnode(value);
	return (root->right);
}
/**void printtree(treenode *root)
*{
*	/**prints out the tree node for it to be visible in the output*)
	/** prints empty instead of no output
	{
		printf("--<empty>--\n");
	}
	printf("value = %d\n", root->value);
	printf("left\n");
	printtree(root->left);
	printf("right\n");
	printtree(root->right);
	printf("done\n");
}*/



int main()
{
	struct treenode* root = createnode(11);
	insertLeft(root, 14);
	insertRight(root, 24);
	insertLeft(root->left, 9);
	insertRight(root->left, 15);

	printf("\nPreorder Traversal\n");
	preorderTraversal(root);
}

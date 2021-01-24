#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*left,*right;
};
void *add(int data)
{
	struct Node* node;
	node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}
void display(struct Node* root)
{
	if(root==NULL)
	{
		printf("\nEmpty");
	}
	else
	{
		printf("%d",root->data);
		printf("%d",root->left->data);
		printf("%d",root->right->data);
		printf("%d",root->left->left->data);
		printf("%d",root->left->right->data);
	}

}
int main(void)
{
struct Node* root=add(1);
root->left=add(2);
root->right=add(3);
root->left->left=add(4);
root->left->right=add(5);
display(root);
}
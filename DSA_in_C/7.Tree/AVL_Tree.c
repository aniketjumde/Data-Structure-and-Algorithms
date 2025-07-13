#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *left;
	struct node *right;
	int height;
};

int getHeight(struct node *root)
{
	if(root==NULL)
	{	
		return 0;
	}
	return root->height;
}

int max(int a,int b)
{
	return (a>b) ? a : b;
}

struct node* createNode(int val)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->left=NULL;
	newNode->right=NULL;
	newNode->height=1;
	return newNode;
}

struct node* rightRotate(struct node *y)
{
	struct node *x=y->left;
	struct node *T2=x->right;
	
	x->right=y;
	y->left=T2;
	
	y->height=max(getHeight(y->left),getHeight(y->right))+1;
	x->height=max(getHeight(x->left),getHeight(y->right))+1;
	
	return x;
}

int getBalance(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	return getHeight(root->left)-getHeight(root->right);
}

struct node* leftRotate(struct node *x)
{
	struct node *y=x->right;
	struct node *T2=y->left;
	
	y->left=x;
	x->right=T2;
	
	x->height=max(getHeight(x->left),getHeight(x->right))+1;
	y->height=max(getHeight(y->left),getHeight(y->right))+1;
	
	return y;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node* insert(struct node *root,int key)
{
	if(root==NULL)
	{
		return createNode(key);
	}
	
	if(key<root->data)
	{
		root->left=insert(root->left,key);
	}
	else if(key>root->data)
	{
		root->right=insert(root->right,key);
	}
	else
	{
		return root;
	}
	
	root->height=1+max(getHeight(root->left),getHeight(root->right));
	
	int balance=getBalance(root);
	
	//left
	if(balance >1 &&key <root->left->data)
	{
		return rightRotate(root);
	}
	
	//right
	if(balance<-1 &&key>root->right->data)
	{
		return leftRotate(root);
	}
	
	//left-right
	if(balance >1 && key <root->left->data)
	{
		root->left=leftRotate(root);
		return rightRotate(root);
	}
	
	//right left
	if(balance<-1 &&key>root->right->data)
	{
		root->right=rightRotate(root);
		return leftRotate(root);
	}
	
	return root;
}	


int main()
{
	struct node *root=NULL;
	root=insert(root,55);
	root=insert(root,88);
	root=insert(root,33);
	root=insert(root,11);
	root=insert(root,22);

	printf("In-order Traversal: ");
     inorder(root);

}



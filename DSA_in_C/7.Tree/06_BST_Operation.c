#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *left;
   struct Node *right;
};

struct Node* createNode(int val)
{
	struct Node *newNode=(struct Node* )malloc(sizeof(struct Node));
	newNode->data=val;
	newNode->left=NULL;
	newNode->right=NULL;
	
	return newNode;
}

struct Node* insert(struct Node* root,int val)
{
	if(root==NULL)
	{
		return createNode(val);
	}
	
	if(val <root->data)
	{
		root->left=insert(root->left,val);
	}
	else if(val >root->data)
	{
		root->right=insert(root->right,val);
	}
	
	return root;
}

void inorder(struct Node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}

}

struct Node* search(struct Node* root,int key)
{
	if(root==NULL || root->data==key)
	{
		return root;
	}
	
	if(key <root->left)
	{
	   return search(root->left,key);
	}
	else
	{
	   return search(root->right,key);
	}
}

struct Node* findmin(struct Node* root)
{
	if(root->left !=NULL)
	{
		root=root->left;
	}
	return root;
}

struct Node* deletion(struct Node* root,int key)
{
	if(root==NULL)
	{
		return root;
	}
	
	if(key<root->data)
	{
	   root->left=deletion(root->left,key);
	}
	else if(key > root->data)
	{
	   root->right=deletion(root->right,key);
	}
	else
	{
		if(root->left==NULL)
		{
			struct Node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct Node *temp=root->left;
			free(root);
			return temp;
		}
	
	
	struct Node *temp=findmin(root->right);
	root->data=temp->data;
	root->right=deletion(root->right,temp->data);
	
	}
	return root;
}

int main()
{
	struct Node* root=NULL;
        struct Node* result;

	
	root=insert(root,11);
	root=insert(root,12);

	printf("In-order before deletion: ");
    	inorder(root);

   	// Delete a node
    	int delVal;
    	printf("\nEnter value to delete: ");
    	scanf("%d", &delVal);
    	root = deletion(root, delVal);

    	printf("In-order after deletion: ");
    	inorder(root);
    	printf("\n");
    	
    	int key;
    	printf("Enter the number to Search :");
    	scanf("%d",&key);
        if (search(root, key) != NULL)
            printf("Found %d in the BST.\n", key);
        else
            printf("%d not found in the BST.\n", key);


	return 0;
}

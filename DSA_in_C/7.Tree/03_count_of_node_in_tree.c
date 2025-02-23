#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    struct node *left;
    int data;
    struct node *right;

};

struct node *root;
int cnt;

void init()
{
    root=NULL;
}

void bts(int item)
{
    struct node *t,*t1,*t2;
    t=NEWNODE;
    t->data=item;
    t->left=NULL;
    t->right=NULL;

    if(root==NULL)
    {
        root=t;
    }
    else
    {
        t1=root;
        while(t1!=NULL)
        {
            t2=t1;
            if(item<t1->data)
            {
                t1=t1->left;
            }
            else
            {
                t1=t1->right;
            }

        }

        if(item<t2->data)
        {
            t2->left=t;
        }
        else
        {
            t2->right=t;
        }
    }
}

void inorder(struct node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        inorder(t->right);
        printf(" %d ",t->data);
    }
}

void count(struct node *t)
{
    if(t!=NULL)
    {
        count(t->left);
        count(t->right);
        cnt++;
    }
}

void count_leaf_node(struct node *t)
{
    if(t!=NULL)
    {
        count_leaf_node(t->left);
        count_leaf_node(t->right);
        if(t->left==NULL &&t->right==NULL)
        {
            cnt++;
        }
    }
}

void count_nonleaf_node(struct node *t)
{
    if(t!=NULL)
    {
        count_nonleaf_node(t->left);
        count_nonleaf_node(t->right);
        if(t->left!=NULL || t->right!=NULL)
        {
            cnt++;
        }
    }
}

int main()
{
    init();
    int n;
    int item;
    printf("\nHow many number you want to store : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter the data :");
        scanf("%d",&item);
        bts(item);
    }

    printf("\nDisplaying Tree INORDER WISE   : ");//LDC
    inorder(root);

    cnt=0;
    count(root);
    printf("\nNO.of Node in tree : %d ",cnt);

    cnt=0;
    count_leaf_node(root);
    printf("\nNO.of Leaf-Node in tree : %d ",cnt);

    cnt=0;
    count_nonleaf_node(root);
    printf("\nNO.of NON-Leaf Node in tree : %d ",cnt);


    return 0;
}
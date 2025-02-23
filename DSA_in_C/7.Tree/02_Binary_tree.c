#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    struct node* LC;
    int data;
    struct node* RC;
};

struct node *root;

void init()
{
    root=NULL;
}

void bts(int item)
{
    struct node *t,*t1,*t2;
    t=NEWNODE;
    t->data=item;
    t->LC=NULL;
    t->RC=NULL;

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
                t1=t1->LC;
            }
            else
            {
                t1=t1->RC;
            }
        }
        
        if(item<t2->data)
        {
            t2->LC=t;
        }
        else
        {
            t2->RC=t;
        }
    }
}

void inorder(struct node *t) //LDR
{
    if(t!=NULL)
    {
        inorder(t->LC);
        printf(" %d ",t->data);
        inorder(t->RC);

    }
}

void postorder(struct node *t)//LRD
{
    if(t!=NULL)
    {
        postorder(t->LC);
        postorder(t->RC);
        printf(" %d ",t->data);
    }
}

void preorder(struct node *t)//DLR
{
    if(t!=NULL)
    {
        printf(" %d ",t->data);
        preorder(t->LC);
        preorder(t->RC);
        
    }
}

void displya_leaf_node(struct node *t)
{
    if(t!=NULL)
    {
        displya_leaf_node(t->LC);
        displya_leaf_node(t->RC);
        if(t->LC==NULL && t->RC==NULL)
        {
            printf(" %d ",t->data);
        }
    }
}

void displya_nonleaf_node(struct node *t)
{
    if(t!=NULL)
    {
        displya_nonleaf_node(t->LC);
        displya_nonleaf_node(t->RC);
        if(t->LC!=NULL || t->RC!=NULL)
        {
            printf(" %d ",t->data);
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

    printf("\nDisplaying Tree POSTORDER WISE : ");//LCD
    postorder(root);

    printf("\nDisplaying Tree PREORDER WISE  : ");//DLC
    preorder(root);

    printf("\nLeaf node Of Tree is : ");
    displya_leaf_node(root);

    printf("\nNon-Leaf node Of Tree is : ");
    displya_nonleaf_node(root);

    

    return 0;
}
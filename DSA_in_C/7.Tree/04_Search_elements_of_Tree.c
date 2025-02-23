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

int search(struct node *t,int key)
{
    while(t!=NULL)
    {
        if(key==t->data)
        {
            return 1;
        }
        else if(key<t->data)
        {
            t=t->LC;
        }
        else
        {
            t=t->RC;
        }

    }

    return 0;
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
    
    printf("\nEnter data to find : ");
    scanf("%d",&item);

    if(search(root,item)==1)
    {
        printf("%d is Found!!!",item);
    }
    else
    {
        printf("%d is Not Found!!!",item);
    }

    return 0;
}
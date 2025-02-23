#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node 
{
    struct node *left;
    char data;
    struct node *right;                                                                                                      

};

struct node *root;

void init()
{
    root=NULL;
}

void bts(char item[])
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
        printf(" %s ",t->data);
    }
}

int main()
{
    init();
    int n;
    char data[100];
    printf("\nHow many character you want to store : ");
    scanf("%d",&n);

    getchar();  // To clear the newline after entering the number
    for(int i=0;i<n;i++)
    {
        
        printf("\nEnter the char :");
        gets(data);
        getchar();  // To consume the newline character after each input
        bts(data);
    }

    printf("\nDisplaying Tree INORDER: ");
    inorder(root);


}
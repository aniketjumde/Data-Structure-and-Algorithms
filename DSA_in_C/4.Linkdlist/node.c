#include<stdio.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next; 
};

struct node* create(int n)
{
    int i;
    struct node *f,*l,*t;
    f=NEWNODE;
    printf("Enter the data :");
    scanf("%d",&f->data);
    l=f;
    l->next=NULL;

    for(i=2;i<=n;i++)
    {
        t=NEWNODE;
        l->next=t;
        printf("Enter the data :");
        scanf("%d",&t->next);
        t->next=NULL;
        l=t;
    
    }

    return f;

}

void display(struct node *f)
{
    struct node* t;
    for(t=f;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}

struct node* earesall(struct node *f)
{
    struct node* t;
    while(f!=NULL)
    {
        t=f;
        f=f->next;
        free(t);
    }

    return f;

}

int main()
{
    struct node *head = NULL;
    int n;

    printf("How many nodes :");
    scanf("%d",&n);

    head=create(n);
    display(head);
    head=earesall(head);
    return 0;
}
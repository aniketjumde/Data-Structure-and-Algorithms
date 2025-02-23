#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
  struct node *prev;
  int data;
  struct node *next;  
};

struct node* create(int n)
{
    struct node *f,*t,*l;
    f=NEWNODE;
    printf("Enter the data : ");
    scanf("%d",&f->data);
    f->next=NULL;
    f->prev=NULL;
    l=f;
    
    for(int i=2;i<=n;i++)
    {
        t=NEWNODE;
        printf("Enter the data : ");
        scanf("%d",&t->data);
        l->next=t;
        t->prev=l;
        l=l->next;
        l->next=NULL;
    }
    l->next=f;
    f->prev=l;

    return f;
}

void display(struct node *f)
{
    struct node *t;
    t=f;
    do
    {
        printf("%d ",t->data);
        t=t->next;
        /* code */
    } while (f!=t);
    
}

struct node* eraseall(struct node *f)
{
    struct node *t;
    t=f;
    f=f->next;
    t->next=NULL;

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
    struct node *head;
    int n;
    printf("How many node create : ");
    scanf("%d",&n);

    head=create(n);
    printf("Circular Doubly Linked List  : ");
    display(head);

    head=eraseall(head);
    
    return 0;
}
#include<stdio.h>
#include<aclui.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
};

struct node* create(int n)
{
    struct node *f,*l,*t;
    f=NEWNODE;
    printf("Enter the data : ");
    scanf("%d",&f->data);
    f->next=NULL;
    l=f;
    for(int i=2;i<=n;i++)
    {
        t=NEWNODE;
        printf("Enter the data : ");
        scanf("%d",&t->data);
        l->next=t;
        l=l->next;
        l->next=NULL;
    }
    l->next=f;
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
    } while (t!=f);
    
}

struct node* earesall(struct node *f)
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
    struct node *Head;
    int n;
    printf("How many node Create : ");
    scanf("%d",&n);

    Head=create(n);
    printf("Circular Linked List : ");
    display(Head);

    Head=earesall(Head);

    return 0;
}
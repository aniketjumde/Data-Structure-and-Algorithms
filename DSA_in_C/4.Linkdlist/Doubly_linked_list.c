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
    printf("Enter the data :");
    scanf("%d",&f->data);
    f->next=NULL;
    f->prev=NULL;
    l=f;

    for(int i=2;i<=n;i++)
    {
        t=NEWNODE;
        printf("Enter the data :");
        scanf("%d",&t->data);
        l->next=t;
        t->prev=l;
        l=l->next;
        l->next=NULL;
    }

    return f;
}

void display(struct node *f)
{
    struct node *t;
    for(t=f;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}

void reverse_Display(struct node *f)
{
    struct node *t;
    for(t=f;t->next !=NULL;t=t->next);   //Traversing location
    for( ;t!=NULL;t=t->prev)
    {
        printf("%d ",t->data);
    }
}

struct node* eraseall(struct node *f)
{
    struct node *t;
    while(f!=NULL)
    {
       t=f;
       f=f->next;
       free(t);
    }
    return f;
}

struct node* insert(struct node *f,int pos)
{
    struct node *t,*s;
    t=NEWNODE;
    printf("Enter the data : ");
    scanf("%d",&t->data);
    t->next=NULL;
    t->prev=NULL;

    if(pos==1)
    {
        t->next=f;
        f->prev=t;
        f=t;
        return f;
    }
    else
    {
        s=f;
        for(int i=1;s!=NULL && i<=pos-2;i++)
        {
            s=s->next;
        }

        if(s==NULL)
        {
            printf("Invalid Position");
            free(t);
            return f;
        }
        else
        {
            t->next=s->next;
            if(s->next != NULL)
            {
               s->next->prev=t;
            }
            s->next=t;
            t->prev=s;

            return f;
        }

    }
}

struct node* delete(struct node *f,int pos)
{
    struct node *t,*s;
    int i;
    if(pos==1)
    {
        t=f;
        f=f->next;
        free(t);
        f->prev=NULL;
        return f;
    }
    else
    {
        for(s=f,i=1;s!=NULL && i<=pos-2;i++ )
        {
            s=s->next;
        }

        if(s==NULL)
        {
            printf("Invalid position");
            return f;

        }
        else
        {
            t=s->next;
            s->next=t->next;
            if(t->next != NULL)
            {
                t->next->prev=s;
            }
            free(t);
            return f;
        }

    }
}

int main()
{
    struct node *head;
    int n;
    printf("How many node Created : ");
    scanf("%d",&n);

    head=create(n);
    printf("Doubly Linked List : ");
    display(head);

    printf("\nReverse Display  : ");
    reverse_Display(head);

    int pos;
    printf("\nEnter the position to add an element : ");
    scanf("%d",&pos);
    head=insert(head,pos);
    display(head);

    printf("\nEnter the position to delete an element : ");
    scanf("%d",&pos);
    head=delete(head,pos);
    display(head);



    head=eraseall(head);

    return 0;
}
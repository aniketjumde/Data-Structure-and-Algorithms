#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    int data;
    struct node* next;
};

struct node* create(int n)
{
    struct node *t,*f,*l;
    f=NEWNODE;
    printf("Enter the data :");
    scanf("%d",&f->data);
    f->next=NULL;
    l=f;

    for(int i=2;i<=n;i++)
    {
        t=NEWNODE;
        printf("Enter the Data :");
        scanf("%d",&t->data);
        t->next=NULL;
        l->next=t;
        l=l->next;
    }

    return f;
}

void display(struct node* head)
{
    struct node *t;

    for(t=head;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
}

struct node* insertion(struct node* head,int pos)
{
    struct node *t,*s,*l;
    t=NEWNODE;
    printf("Enter the data:");
    scanf("%d",&t->data);
    t->next=NULL;

    if(pos==1)
    {
        t->next=head;
        head=t;
        return head;
    }
    else
    {   
        s=head;
        for(int i=1;i<=pos-2 && s!=NULL;i++,s=s->next);
        if(s==NULL)
        {
            printf("Erroe:Invalid Position\n");
            free(t);
            return head;
        }

        t->next=s->next;
        s->next=t;

        return head;

    }
}

struct node* deletion(struct node *head,int pos)
{
    struct node *t,*s;
    if(pos==1)
    {
        t=head;
        head=head->next;
        free(t);
        return head;
    }
    else
    {
        s=head;
        for(int i=1;i<=pos-2&& s!=NULL;i++,s=s->next);
        if(s==NULL || s->next==NULL)
        {
            printf("Invalid Position");
            return head;
        }

        t=s->next;
        s->next=t->next;
        free(t);

        return head;

    }
}


void free_linkedlist(struct node* head)
{
    struct node *t;

    while (head!=NULL)
    {
        t=head;
        head=head->next;
        free(t);
    }

    
}

int main()
{
    int choice;
    struct node *head;
    int n;
    int pos;
    int p;
    while(1)
    {
        printf("1.Create Linked list.\n");
        printf("2.Insertion\n");
        printf("3.Deletion.\n");
        printf("4.Display Linked list.\n");
        printf("5.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    printf("How many nodes create : ");
                    scanf("%d",&n);
                    head=create(n);
                    printf("Singly Linkdlist is Created Sucessfuly.!\n");
                    break;

            case 2:
                    printf("Enter the position you want to enter  the Node :");
                    scanf("%d",&pos);
                    head=insertion(head,pos);
                     printf("Linkedlist is added succesfully.!");
                    break;

            case 3:
                
                    printf("Enter the position you want to delete :");
                    scanf("%d",&p);
                    head=deletion(head,p);
                    printf("Node is deleted succesfully.!");
                    break;

            case 4:
                    printf("Singly Linkedlist :\n");
                    display(head);
                    break;

            case 5:
                    printf("Exiting..!");
                    free_linkedlist(head);
                    exit(0);

            default:
                    printf("Invalid Option...!");
                    break;

        }
    }
    

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define START  NULL
#define NEWNODE (struct node*) malloc(sizeof(struct node))

struct node
{
    int data;
    struct node *next;
};

struct node *rear ,*front;

void init()
{
    rear=START;
    front=START;
}

int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void addQ(int num)
{
    struct node *t;
    t=NEWNODE;
    t->data=num;
    t->next=NULL;

    if(rear==NULL)
    {
        front=t;
        rear=t;
    }
    else
    {
        rear->next=t;
        rear=rear->next;
    }
}

int delQ()
{
    int num;
    struct node *t;
    if(isEmpty())
    {
        printf("Queue is Empty..!\n");
    }
    else
    {
        num=front->data;

        if(front->next==NULL)
        {
            free(front);
            front=rear=NULL;
            return num;
        }

        t=front;
        front=front->next;
        free(t);
        return num;
    }

}

int peek()
{
    if(isEmpty())
    {
        printf("Queue is Empty..!\n");
    }
    else
    {
        return front->data;
    }

}


int main()
{
    int choice;
    int data;

    while(1)
    {
        printf("------Menu--------\n");
        printf("1.AddQ \n");
        printf("2.DelQ \n");
        printf("3.Peek \n");
        printf("4.Exit \n");

        printf("Enter the Option :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("\nAddQ\n");
                    
                    printf("Enter the data :");
                    scanf("%d",&data);
                    addQ(data);
                    printf("Add  Succesfully \n");
                    
                    printf("\n");
                    break;
                    
            case 2:
                    printf("DelQ\n");
                    if(isEmpty())
                    {
                        printf("Queue is Empty..!");
                    }
                    else
                    {
                        printf("Deleted element is %d \n",delQ);
                    }
                    printf("\n");
                    break;

            case 3:
                    printf("Peek\n");
                    if(isEmpty())
                    {
                        printf("Queue is Empty..!");
                    }
                    else
                    {
                        printf("Peek element is %d \n",delQ());
                    }
                    printf("\n");
                    break;

            case 4:
                    printf("Queue will be closed.\n");
                    exit(0);
                    break;

            default:
                     printf("Invalid Option\n");
        }
    }

    return 0;
}
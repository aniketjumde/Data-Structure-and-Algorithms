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
    init();
    addQ(11);
    addQ(22);
    addQ(33);
    addQ(44);
    addQ(55); 
    addQ(66);
    printf("peek element is %d \n",peek());
    printf("Delet element is %d \n",delQ());
    printf("Delet element is %d \n",delQ());
    printf("Delet element is %d \n",delQ());
    printf("Delet element is %d \n",delQ());
    printf("Delet element is %d \n",delQ());
    delQ();
    
    return 0;
}



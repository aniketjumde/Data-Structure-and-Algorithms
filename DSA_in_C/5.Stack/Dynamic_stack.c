#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))
#define BOTTOM  NULL

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *top;

void init()
{
    top=BOTTOM;
}

int isempty()
{
    if(top==BOTTOM)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int item)
{
    struct node *t;
    t=NEWNODE;
    
    if(t==NULL)
    {
        printf("Stack is Full..!! \n");
    }

    t->data=item;
    t->next=NULL;
    t->prev=NULL;

    if(top==NULL)
    {
        top=t;
    }
    else
    {
        top->next=t;
        t->prev=top;
        top=top->next;

    }
}

int pop()
{
    struct node *t;
    int item;

    if(isempty())
    {
        printf("Stack is Empty..!!");
    }
    else
    {
        item=top->data;
        t=top;
        top=top->prev;
        free(t);
        if(top!=NULL)
        {
        top->next=NULL;
        }

        return item;
    }

}

int peek()
{
    int data;
    if(isempty())
    {
        printf("Stack is Empty...!");
    }
    else
    {
        return top->data;
    }
}

int main()
{
    init();
    int choice;
    int data;

    while(1)
    {
        printf("Menu :\n");
        printf("1.push \n");
        printf("2.pop \n");
        printf("3.Peek \n");
        printf("4.exit() \n");
        printf("\nEnter the Option :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("\nPush :\n");
                        printf("Enter the data :");
                        scanf("%d",&data);
                        push(data);
                        printf("PUSHED Successfuly..!!\n");
                    printf("\n");
                    break;
            case 2:
                    printf("\nPop : \n");
                    if(isempty())
                    {
                        printf("Stack is Empty\n");
                    }
                    else
                    {
                        printf("%d \n",pop());
                    }
                    printf("\n");
                    break;
            case 3:
                    printf("\nPeek : \n");
                    if(isempty())
                    {
                        printf("Stack is Empty\n");
                    }
                    else
                    {
                        printf("TOP MOST ELEMENT IS : %d\n",peek());
                    }
                    printf("\n");
                    break;
            case 4:
                    printf("Stack will be closed.\n");
                    exit(0);
            default:
                     printf("Invalid option....!!!\n");
        }
    }

    return 0;

}
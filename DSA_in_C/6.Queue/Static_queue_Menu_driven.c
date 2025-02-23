#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define START -1

int queue[SIZE];
int front;
int rear;

void init()
{
    front=START;
    rear=START;
}

int isEmpty()
{
    if(front==rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(rear==SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void addQ(int data)
{
    if(isFull())
    {
        printf("Queue is Full..!\n");
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
}

int delQ()
{
    if(isEmpty())
    {
        printf("Queue is Empty..!\n");
    }
    else
    {
        front++;
        return queue[front];
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
       
        return queue[front+1];
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
                    if(isFull())
                    {
                        printf("Queue is Full..!\n");
                    }
                    else
                    {
                        printf("Enter the data :");
                        scanf("%d",&data);
                        addQ(data);
                        printf("Add  Succesfully \n");
                    }
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
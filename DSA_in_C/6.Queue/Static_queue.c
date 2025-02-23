#include<stdio.h>
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

        printf("%d is added Succesful \n",data);
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
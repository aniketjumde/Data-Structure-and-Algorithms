#include<stdio.h>
#define SIZE 3
#define BOTTOM -1

int stack[SIZE];
int top;

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

int isfull()
{
    if(top==SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if(isfull())
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top]=data;
       
    }

}

int pop()
{
    int data;
    if(isempty())
    {
        printf("Stack is empty..!");
    }
    else
    {
        data=stack[top];
        top--;
        return data;

    }
}

int peek()
{
    int data;
    if(isempty())
    {
        printf("\nStack is Empty..!");
    }
    else
    {
        data=stack[top];
        return data;
    }

}

int main()
{
    init();
    push(11);
    push(22);
    push(33);
    push(44);

    printf("%d \n",pop());
    printf("%d \n",pop());
    printf("%d \n",pop());
    pop();
    peek();
    return 0;
}
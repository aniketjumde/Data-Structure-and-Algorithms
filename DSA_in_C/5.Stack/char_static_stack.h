#define SIZE 50
#define BOTTOM -1

char stack[SIZE];
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

void push(char data)
{
    if(isfull())
    {
        printf("Stack is Full...!!\n");
    }
    else
    {
        top++;
        stack[top]=data;
    }
}

char pop()
{
    char data;
    if(isempty())
    {
        printf("Stack is Empty...!!\n");
    }
    else
    {
        data=stack[top];
        top--;
        return data;
    }
}

char peek()
{
    char data;
    if(isempty())
    {
        printf("Stack is Empty...!!\n");
    }
    else
    {
        data=stack[top];
        return data;
    }
}



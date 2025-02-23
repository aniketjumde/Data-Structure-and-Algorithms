#include<stdio.h>
#define SIZE  50
#define BOTTOM -1

char stack[SIZE];
int top;

struct Priority_Table
{
    char opr;
    int prior;
};

int operation= 5;
struct Priority_Table oprtab[]={ {'$',3},
                                 {'*',2}, 
                                 {'/',2},
                                 {'+',1},
                                 {'-',1},
                                 {'(',0}
                                };

//Stack initialization
void init()
{
    top=BOTTOM;
}

int isEmpty()
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

int isFull()
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
    if(isFull())
    {
        printf("STACK IS FULL..!");
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
    if(isEmpty())
    {
        printf("STACK IS EMPTY..!");
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
    if(isEmpty())
    {
        printf("STACK IS EMPTY..!");
    }
    else
    {
        return stack[top];
    }
}

// get Priority of Operator

int get_priority(char op)
{
   int i;
   for(i=0;i<operation;i++)
   {
       if(op==oprtab[i].opr)
       {
          return oprtab[i].prior; 
       }
   }
   return -1;
}

int main()
{
    char ch;
    int i;
    init();
    char exp[100];
    printf("Enter the infix Expression :");
    gets(exp);

    printf("Postfix Expresison :");
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
            continue;
        }

        if (exp[i]==')')
        {
           
           while(1)
           {
             ch=pop();
             if(ch=='(')
             {
                break;
             }
             printf("%c",ch);
           }
           continue;
        }
        
        if(get_priority(exp[i])==-1)
        {
            printf("%c",exp[i]);
        }
        else
        {
            while(!isEmpty())
            {
                if(get_priority(peek())>=get_priority(exp[i]))
                {
                    printf("%c",pop());
                }   
                else
                {
                    break;
                }
            }
            push(exp[i]);
        }
    }

    while(!isEmpty())
    {
        printf("%c",pop());
    }
    return 0;
}
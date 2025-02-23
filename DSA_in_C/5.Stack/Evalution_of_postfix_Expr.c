#include<stdio.h>
#include"Static_stack.h"

int main()
{
    init();
    int op1,op2;
    char expr[50];
    printf("Enter the Postfix Expression :");
    gets(expr);

    for(int i=0;expr[i]!='\0';i++)
    {
        switch (expr[i])
        {
            case '*':
                     op2=pop();
                     op1=pop();
                     push(op1*op2);
                     break;
            
            case '/':
                     op2=pop();
                     op1=pop();
                     push(op1/op2);
                     break;
            
            case '+':
                     op2=pop();
                     op1=pop();
                     push(op1+op2);
                     break;

            case '-':
                     op2=pop();
                     op1=pop();
                     push(op1-op2);
                     break;

            default :
                     if(expr[i]>='0' && expr[i]<='9')
                     {
                        push(expr[i]-48);
                     }
                     else
                     {
                        printf("Enter the value of %c",expr[i]);
                        scanf("%d",&expr[i]);
                     }
        }
    }

    printf("Answer : %d\n",pop());

    return 0;
}

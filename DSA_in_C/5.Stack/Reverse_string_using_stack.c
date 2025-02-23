#include<stdio.h>
#include"char_static_stack.h"
#define SIZE 50
#define BOTTOM -1

int main()
{
    char S[SIZE];
    printf("Enter the String :");
    gets(S);

    for(int i=0;S[i]!='\0';i++)
    {
        push(S[i]);
    }
    while (!isempty())
    {
       printf("%c",pop());
    }

    return 0;
    
}
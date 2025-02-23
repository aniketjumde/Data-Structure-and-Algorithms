#include<stdio.h>
#include<stdlib.h>
#include"Static_stack.h"
#define SIZE  3
#define BOTTOM  -1

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
        printf("4.display \n");
        printf("5.exit() \n");
        printf("\nEnter the Option :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("\nPush :\n");
                    if(isfull())
                    {
                        printf("Stack is Full\n");
                    }
                    else
                    {
                        printf("Enter the data :");
                        scanf("%d",&data);
                        push(data);
                        printf("PUSHED Successfuly..!!\n");
                    }
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
                        printf("%d\n",peek());
                    }
                    printf("\n");
                    break;
            case 4:
                    if(isempty())
                    {
                        printf("Stack is Empty\n");
                    }
                    else
                    {
                        display();
                    }
                    printf("\n");
                    break;
            case 5:
                    printf("Stack will be closed.\n");
                    exit(0);
            default:
                     printf("Invalid option....!!!\n");
        }
    }

    return 0;

}
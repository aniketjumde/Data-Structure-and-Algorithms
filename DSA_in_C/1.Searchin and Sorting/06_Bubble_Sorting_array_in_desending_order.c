#include<stdio.h>
#include<stdlib.h>

void accept_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
}

void display_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}

void bubble_sort(int a[],int n)
{
    int t;
    int flag;
    for(int i=n-1;i>=0;i--)
    {
        flag=0;
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[j+1])
            {
                flag=1;

                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }

        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    int *p;
    printf("How many number you want to store :");
    scanf("%d",&n);
    p=(int *) malloc(n * sizeof(n));

    if(p==NULL)
    {
        printf("Insufficient Memory...!!!");
        exit(0);
    }
    accept_array(p,n);
    printf("Array is :");
    display_array(p,n);
    bubble_sort(p,n);
    printf("Bubble sorting in desending order :");
    display_array(p,n);

}
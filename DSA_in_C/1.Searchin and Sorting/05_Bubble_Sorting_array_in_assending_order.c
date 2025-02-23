#include<stdio.h>

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

void sort_array(int a[],int n)
{
    int t;
    int i;
    int j;
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main()
{
    int n;
    printf("How many number you want to store  :");
    scanf("%d",&n);

    int a[n];

    accept_array(a,n);
    printf("Before sort :");
    display_array(a,n);

    printf("After sort ");
    sort_array(a,n);
    display_array(a,n);

    return 0;
}
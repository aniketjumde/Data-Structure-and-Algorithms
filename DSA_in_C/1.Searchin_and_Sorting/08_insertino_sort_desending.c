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

void Insertion_sort(int a[],int n)
{
    int i,j,t;

    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j<i;j--)
        {
            if(a[j]<t)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=t;
    }
}

int main()
{
    int n;
    printf("How many number you want to store :");
    scanf("%d",&n);
    int a[n];

    accept_array(a,n);
    printf("Array :");
    display_array(a,n);
    printf("Insertion sort in desending order :");
    Insertion_sort(a,n);
    display_array(a,n);
}
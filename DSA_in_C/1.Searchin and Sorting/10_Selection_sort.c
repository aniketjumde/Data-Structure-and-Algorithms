#include<stdio.h>

void accept_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data : ");
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

void Selection_sort(int a[],int n)
{
    int i,j,t;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int main()
{
    int n;
    printf("How many number you want to store :");
    scanf("%d",&n);

    int a[100];

    accept_array(a,n);
    printf("Array is : ");
    display_array(a,n);
    printf("After Selection Sort : ");
    Selection_sort(a,n);
    display_array(a,n);

}
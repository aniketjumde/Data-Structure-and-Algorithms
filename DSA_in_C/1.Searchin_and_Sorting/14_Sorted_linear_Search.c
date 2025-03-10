#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data : ");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    printf("Array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void buble_sort(int a[],int n)
{
    int i,j,t;
    for(i=n-1;i>=0;i--)
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

int linear_Search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("How many number you want to store in array : ");
    scanf("%d",&n);

    int a[100];

    accept(a,n);
    display(a,n);

    printf("Sorted Array is : ");
    buble_sort(a,n);
    display(a,n);
    
    
    int key;
    int position;
    printf("Which number you want to search : ");
    scanf("%d",&key);

    position=linear_Search(a,n,key);
    if(position==-1)
    {
        printf("Element %d is not found ");
    }
    else
    {
        printf("Element %d is found  at positin [%d]",key,position+1);
    }
    

    return 0;
}
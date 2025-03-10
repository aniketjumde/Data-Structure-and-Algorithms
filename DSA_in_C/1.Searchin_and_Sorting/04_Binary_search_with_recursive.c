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
    printf("\n");
}

void sort(int a[],int n)
{
    int i;
    int j;
    int t;
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

int Binary_Search(int a[],int n,int key)
{
    int lb,ub;
    lb=0;
    ub=n-1;
    int mid;
    
    if(lb>ub)
    {
        return -1;
    }
        
    mid=(lb+ub)/2;

        
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]<key)
    {
        return Binary_Search(a,mid+1,key);
    }    
    else
    {
        return Binary_Search(a,mid-1,key);;
            
    }
        
        
    
}

int main()
{
    int n;
    printf("How many number you want to store :");
    scanf("%d",&n);
    int a[100];

    accept_array(a,n);
    printf("Sorted Array is :");
    sort(a,n);
    display_array(a,n);

    int pos;
    int key;

    printf("Which element you want to search : ");
    scanf("%d",&key);

    pos=Binary_Search(a,n,key);

    if(pos==-1)
    {
        printf("The number %d is not found ",key);
    }
    else
    {
        printf("The number %d is found at index [%d]",key,pos);
    }

    return 0;
}
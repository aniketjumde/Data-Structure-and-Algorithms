#include<stdio.h>
#include<stdlib.h>

void accept_array(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("Enter the element of  postion %d:",i+1);
        scanf("%d",&a[i]);
    }
}

void display_array(int a[],int n)
{
    printf("Array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int linear_search_with_recursive(int a[],int n,int target)
{
    if (n<=0)
    {
        return -1;
    }
    else if (a[n]==target)
    {
        return n;
    }
    else
    {
        return linear_search_with_recursive(a,n-1,target);
    }
    
    return -1;


}

int main()
{
    int n;
    int ans;
    printf("How many number you want to store :");
    scanf("%d",&n);

    int *a=(int*)malloc(n*sizeof(int));
    
    if(a==NULL)
    {
        printf("Insufficient Memory");
        exit(0);
    }

    accept_array(a,n);
    int key;
    printf("Enter the search element :");
    scanf("%d",&key);

    display_array(a,n);

    
    ans=linear_search_with_recursive(a,n,key);

    if (ans==-1)
    {
        printf("search element is not found");
    }
    else
    {
        printf("Search element is found at index %d",ans);
    }

}
#include<stdio.h>
#include<stdlib.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int partition(int a[],int lb,int ub)
{
    int pivot,i,j;
    int t;
    pivot=a[lb];
    i=lb+1;
    j=ub;

    while (i<=j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        
        while (a[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        
    }
    a[lb]=a[j];
    a[j]=pivot;
    
    return j;
    
}

void quick_sort(int a[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=partition(a,lb,ub);
        quick_sort(a,lb,j-1);
        quick_sort(a,j+1,ub);
    }
}

int main()
{
    int n;
    int *a;
    printf("How many number you want to store :");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    if(a==NULL)
    {
        printf("Insufficent memory..!");
        exit(0);
    }

    accept(a,n);
    printf("Before sort: ");
    display(a,n);

    quick_sort(a,0,n-1);

    printf("\n");
    printf("After sort: ");
    display(a,n);

    free(a);

    return 0;

}
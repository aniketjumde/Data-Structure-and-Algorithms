#include<stdio.h>
#include<stdlib.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
    printf("\n");
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void merge(int a[],int lb,int mid,int ub)
{
    int temp[100]; //array used for merging
    int i,j,k;
    i=lb;  // beging for first array
    j=mid+1; //beging for second array
    k=0;

    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {                       // Copy remaining element in first list
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j<=ub)
    {                       //Copy remaining element in second list
        temp[k]=a[j];
        k++;
        j++;
    }

    k=0;
    for(i=lb;i<=ub;i++,k++) //tranfer element from temp array to array 
    {
        a[i]=temp[k];
    }
}

void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int n;
    int *a;
    
    printf("How many number you want to store :");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));

    if(a==NULL)
    {
        printf("Insuffiecent Memory..!");
        exit(0);
    }

    accept(a,n);
    printf("Before Sort : ");
    display(a,n);

    merge_sort(a,0,n-1);

    printf("After Sort : ");
    display(a,n);

    free(a);
    
    return 0;

}
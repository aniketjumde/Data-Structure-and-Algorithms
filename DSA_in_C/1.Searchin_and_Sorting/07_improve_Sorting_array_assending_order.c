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

void Improve_sort_array(int a[],int n)
{
    int i,j,flag,t;

    for(i=n-1;i>0;i--)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if( a[j]>  a[j+1] )
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
    printf("How many number you want to store :");
    scanf("%d",&n);

    int a[n];
    accept_array(a,n);
    printf("Before Sort :");
    display_array(a,n);
    printf("After sort : ");
    Improve_sort_array(a,n);
    display_array(a,n);
    

    return 0;
}
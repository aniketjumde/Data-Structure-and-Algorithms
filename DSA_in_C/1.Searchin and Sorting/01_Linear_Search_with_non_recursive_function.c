#include<stdio.h>

void accept_array(int a[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
    
}

void display_array(int a[100],int n)
{
     for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n\n");
}

int Searching_number(int a[100],int n,int key)
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
   printf("How many number you want to store : ");
   scanf("%d",&n);

   
   int a[n];

   accept_array(a,n); 
   display_array(a,n); 
   int key;
   int pos;
   printf("Searching the number : ");
   scanf("%d",&key);
   pos=Searching_number(a,n,key);
   
   if(pos==-1)
   {
     printf("%d is not found ",key);

   }
   else
   {
    printf("%d is found at postion %d",key,pos);
   }

}
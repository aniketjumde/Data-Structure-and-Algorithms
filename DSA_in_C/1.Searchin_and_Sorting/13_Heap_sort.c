#include<stdio.h>

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

void  hepify(int a[],int n,int ub)
{
    int start=n/2-1;
    int Li,Ri,i,P,t;
    

    for(i=start;i>=0;i--)
    {
        P=i;       
        Li=i*2+1;  //left index
        Ri=i*2+2 ; //right index
        if(Li<=ub && Ri<=ub) // checking parent has two child
        {
            if(a[Li]>a[Ri])
            {
                if(a[Li]>a[P])
                {
                    t=a[Li];
                    a[Li]=a[P];
                    a[P]=t;
                }
            }
            else
            {
                if(a[Ri]>a[P])
                {
                    t=a[Ri];
                    a[Ri]=a[P];
                    a[P]=t;
                }
            }

        }
        else if(Li<=ub) //checking parent has on child in left side
        {
            if(a[Li]>a[P])
                {
                    t=a[Li];
                    a[Li]=a[P];
                    a[P]=t;
                }
        }
    }
}


void heap_sort(int a[],int n)
{
    int  ub,t;

    for(ub=n-1;ub>0;ub--)
    {
        hepify(a,n,ub);
        //swap a[0] to a[ub]
        t=a[0];
        a[0]=a[ub];
        a[ub]=t;
    }
}

int main()
{
    int n;
    printf("How many number you want to store :");
    scanf("%d",&n);

    int a[n];

    accept(a,n);
    
    printf("Befor Sort :");
    display(a,n);

    heap_sort(a,n);
    printf("\nAfter Sort :");
    display(a,n);
}
#include<stdio.h>
#define SIZE 10

int G[SIZE][SIZE];
int nov;
int noe;

void accept()
{
    int i,j;
    printf("Enter the number of vertex :");
    scanf("%d",&nov);
    printf("Enter the number of Edges :");
    scanf("%d",&noe);
 
    for(int k=0;k<noe;k++)
    {
        printf("Enter the Edge (Vi,Vj):");
        scanf("%d %d",&i,&j);

        G[i][j]=1;

    }
}

int sum_of_row(int i)
{
    int j;
    int sum=0;
    for(int j=0;j<nov;j++)
    {
       sum +=G[i][j];
    }

    return sum;
}

int sum_of_col(int j)
{
    int i;
    int sum=0;

    for(i=0;i<nov;i++)
    {
        sum +=G[i][j];
    }

    return sum;
}

void display()
{
    int i,j;

    printf("\nAdjacency Matrix :\n");
    printf("-----------------------------------------------\n");
    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("%d ",G[i][j]);
        }
        printf("\n");
    }
}

void display_order()
{
    int v,Total,inorder,outorder;

    printf("\nTotal Degree of each Vertex :\n");

    for(v=0;v<nov;v++)
    {
        inorder=sum_of_col(v);
        outorder=sum_of_row(v);
        Total=inorder + outorder;
        printf("Vertex : V%d   Inorder : %d   Outorder : %d  Total Order : %d \n",v,inorder,outorder,Total);

    }

}

int main()
{
    accept();
    display();
    display_order();
    return 0;
}
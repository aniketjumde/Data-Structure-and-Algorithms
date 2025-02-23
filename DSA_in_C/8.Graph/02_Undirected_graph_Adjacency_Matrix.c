#include<stdio.h>
#define SIZE 10

int G[SIZE][SIZE];
int nov;
int noe;

void accept()
{
    int i,j,k;

    printf("Enter the number of Vertex :");
    scanf("%d",&nov);

    printf("Enter the number of Edges :");
    scanf("%d",&noe);

    for(k=0;k<noe;k++)
    {
        printf("Enter the Edges (Vi,Vj) :");
        scanf("%d %d",&i ,&j);

        G[i][j]=1;
        G[j][i]=1;
    }
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

int sum_of_row(int i)
{
    int j,sum;//Undirected Graph Sum of Row or Col are same Degree Give 

    sum=0;
    
    for(j=0;j<nov;j++)
    {
        sum +=G[i][j];
    }  

    return sum;                 
}

void Display_degree()
{
    printf("\nTotal Degree Of Each Vertex :\n");
    int Total_Degree;

    for(int v=0;v<nov;v++)
    {
        Total_Degree=sum_of_row(v);
        printf("Total Degree of V%d : %d \n",v,Total_Degree);
    }
}

int main()
{
    accept();
    display();
    Display_degree();

    return 0;
}
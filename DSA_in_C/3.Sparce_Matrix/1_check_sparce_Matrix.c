// 0 > (row*col)/2 the it is a Sparce Matrix 
#include<stdio.h>

void accept_Matrix(int Matrix[100][100],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the data :");
            scanf("%d",&Matrix[i][j]);
        }
    }
}

void display_Matrix(int Matrix[100][100],int row,int col)
{
    printf("Matrix is :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");    
    }
}

void check_sparce_Matrix(int Matrix[100][100],int row,int col)
{
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(Matrix[i][j]==0)
            {
                cnt++;
            }
        }
    }

    if(cnt>((row*col)/2))
    {
        printf("The Given Matrix  is a Sparce Matrix ");
    }
    else
    {
        printf("the Given Matrix  is NOT a Sparce Matrix ");
    }
}

int main()
{
    int row;
    int col;
    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the column :");
    scanf("%d",&col);

    int Matrix[100][100];
    
    accept_Matrix(Matrix,row,col);
    display_Matrix(Matrix,row,col);
    check_sparce_Matrix(Matrix,row,col);
    
    return 0;
}


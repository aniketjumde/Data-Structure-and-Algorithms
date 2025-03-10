  // 0 > (row*col)/2 the it is a Sparce Matrix 
#include<stdio.h>
int main()
{
    int row;
    int col;
    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the column :");
    scanf("%d",&col);

    int Matrix[100][100];
    
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the data :"); 
            scanf("%d",&Matrix[i][j]);
        }
    }

    printf("Matrix is :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");    
    }

    int cnt_zero=0;
    int cnt_non_zero=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(Matrix[i][j]==0)
            {
                cnt_zero++;
            }
            else
            {
                cnt_non_zero++;
            }
        }
    }

   if(cnt_non_zero > cnt_zero)
   {
        printf("It is Not a Sparce Matrix ");
   }
   else
   {

    int s[cnt_non_zero][3],k;
    k=0;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            if(Matrix[i][j]!=0)
            {
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=Matrix[i][j];
                k++;
            }
        }
     }
   

    printf("Matrix Representation :\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");    
    }
   
}

}
























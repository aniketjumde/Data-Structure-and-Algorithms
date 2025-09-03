#include<stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols])
 {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%c[%d][%d]: ",i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int rows, int cols,int matrix[rows][cols]) 
{
    
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1],int rows2, int cols2, int matrix2[rows2][cols2] int result[rows1][cols2]) 
      {


    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            result[i][j] = 0;

   
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            for (int k = 0; k < cols2; k++) 
            { 
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}




int main()
{
	int row1,col1,row2,col2;
	
	printf("Enter the Value of row :");
	scanf("%d",&row1);
	
	printf("Enter the value of colum :");
	scanf("%d",&col1);
	
	printf("Enter the Value of row :");
	scanf("%d",&row2);
	
	printf("Enter the value of colum :");
	scanf("%d",&col2);
	
	if(col1!=row2)
	{
		printf("Matrix Multiplication is Not Possible");
		printf("Columns of A must equal rows of B.\n");
        	return 1;
	}
	
	int matrix1[row1][col1];
	int matrix2[row2][col2];
	int result[row1][col2];
	
	printf("Enter elements of Matrix1 (%d x %d):\n",row1,col1);
	inputMatrix(row1,col1,matrix1);
	printf("Enter elements of Matrix2 (%d x %d):\n",row2,col2);
	inputMatrix(row2,col2,matrix2);
	printf("Matrix 1 :\n);
	displayMatrix(row1,col1,matrix1);
	printf("Matrix 2 :\n);
	displayMatrix(row2,col2,matrix2);
	
	multiplyMatrices(row1,col1,matrix1,row2,col2,matrix2,result);
	printf("Result of the Multipliction of Matrix :");
	displayMatrix(row2,col2,matrix2);

}

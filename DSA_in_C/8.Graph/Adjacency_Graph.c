#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void displayMatrix(int adjMatrix[MAX][MAX],int vertices)
{
    printf("\nAdjacency Matrix:\n");
    for(int i=0;i<vertices;i++)
    {
    		for(int j=0;j<vertices;j++)
    		{
    			printf("%d ",adjMatrix[i][j]);
    		}
    		printf("\n");
    }
}

int main()
{
	int edges,vertices;
	int adjMatrix[MAX][MAX]={0};
	
	printf("Enter number of vertices :");
	scanf("%d",&vertices);
	
	printf("Enter number of eges :");
	scanf("%d",&edges);
	
	printf("Enter the Eges (format :Source and Destination):\n");
	for(int i=0;i<edges;i++)
	{
		int src,dest;
		scanf("%d %d",&src,&dest);
		
		if(src>=vertices || dest>=vertices || src<0 || dest<0)
		{
			printf("Invalid edges ! vertex out of range.\n");
			i--;
			continue;
		}
		
		adjMatrix[src][dest]=1;
		adjMatrix[dest][src]=1;
	}	
	
	displayMatrix(adjMatrix,vertices);
	
	return 0;
}

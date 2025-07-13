#include<stdio.h>
#include<stdlib.h>

#define MAX 100


int adj[MAX][MAX];
int visited[MAX];

int queue[MAX];
int front=0;
int rear=0;

int isEmpty()
{
	if(rear==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull()
{
	if(rear==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}	

int enqueue(int val)
{
	if(!isFull())
	{
		queue[rear++]=val;
	}
}

int dequeue()
{
	if(!isEmpty())
	{
		return queue[front++];
	}
	
	return -1;
}

void bfs(int start,int vertices)
{
	for(int i=0;i<vertices;i++)
	{
		visited[i]=0;
	}
	
	printf("BFS Traversal :");
	visited[start]=1;	
	enqueue(start);
	
	while(front<=rear)
	{
		int current=dequeue();
		printf("%d ",current);
		
		for(int i=0;i<vertices;i++)
		{
			if(adj[current][i]==1 && !visited[i])
			{
				enqueue(i);
				visited[i]=1;
			}
		
		}
	}
	printf("\n");
}


void dfs(int v,int vertices)
{
	visited[v]=1;
	printf("%d ",v);
	
	for(int i=0;i<vertices;i++)
	{
		if(adj[v][i]==1 && !visited[i])
		{
			dfs(i,vertices);
		}
	}
}

int main()
{
	int vertices,edges;
	int src,dest;
	
	printf("Enter number of vertices : ");
	scanf("%d",&vertices);
	
	printf("Enter number of edges :");
	scanf("%d",&edges);
	
	for (int i = 0; i < vertices; i++)
	{
        for (int j = 0; j < vertices; j++)
            {
            	adj[i][j] = 0;
            }
     }
     
     printf("Enter edges (src dest):\n");
    	for (int i = 0; i < edges; i++) 
    	{
        scanf("%d %d", &src, &dest);
        adj[src][dest] = 1;
     	   adj[dest][src] = 1; // For undirected graph
     }
     
     int start;
    	printf("Enter starting vertex for BFS and DFS: ");
    	scanf("%d", &start);
    	
    	bfs(start, vertices);
    	
    	for(int i=0;i<vertices;i++)
    	{
    		visited[i]=0;
    	}

	printf("DFS Traversal :");
	dfs(start,vertices);
	printf("\n");
	
	return 0;
}

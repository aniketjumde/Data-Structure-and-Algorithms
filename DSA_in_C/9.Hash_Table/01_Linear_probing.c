#include<stdio.h>
#define FREE -1;
#define FULL -100;
#define SIZE 10;

int HT[SIZE];

void init()
{
	for(int i=0;i<SIZE;i++)
	{
		HT[i]=-1;
	}
}

void display()
{
	printf("Hash Table :\n");
	for(int i=0;i<SIZE;i++)
	{
		printf("[%d] : %d \n",i,HT[i]);
	
	}
}
int hash(int data)
{
	

}

int main()
{
	int n,i,data;
	init();
	
	printf("How many Value you want to accept :");
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the data :");
		scanf("%d\n",&data);
		
		k=hash(data);
		if(k==FULL)
		{
			printf("No Space avilabel to store ");
		}
		else
		{
			HT[k]=data;
			printf("Data %d is added at key %d \n",data,k);
		}
	}

	return 0;
}

#include<stdio.h>
#define SIZE 10
#define FREE -1
#define FULL -10

int HT[SIZE];

void init()
{
	for(int i=0;i<SIZE;i++)
	{
		HT[i]=FREE;
	}
}

int hash(int data)
{
	int k,i;

	k=data%SIZE;

	if(HT[k]==FREE)
	{
		return k;
	}
	else
	{
		printf("For a Data %d Collision Occurs at %d \n",data,k);
	}

	i=(k+1)%SIZE;

	while(i!=k)
	{
		if(HT[i]==FREE)
		{
			return i;
		}
		else
		{
			printf("For a Data %d Collision Occurs at %d \n",data,i);

		}
		i=(i+1)%SIZE;
	}

	return FULL;
}


void display()
{
	printf("Hash Table :\n");
	for(int i=0;i<SIZE;i++)
	{
		printf("[%d]:%d\n",i,HT[i]);
	}
	printf("\n");
}

int main()
{
	int n,data,k;
	init();

	printf("How many number you want to Store :");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the Data :");
		scanf("%d",&data);

		k=hash(data);

		if(k==FULL)
		{
			printf("No Space for a Data : %d \n",data);
		}
		else
		{
			HT[k]=data;
			printf("Data %d is added at key %d \n",data,k);
		}

		display();
	}


	return 0;
}
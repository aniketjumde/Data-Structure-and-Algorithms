#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
    int vertex;
    struct node* next;
};

struct node* AL[SIZE],IAL[SIZE];
int nov;
int noe;

void init(struct node *L[])
{
    for(int i=0;i<SIZE;i++)
    {
        L[i]=NULL;
    }
}

void add_in_list(struct node *L[],int i,int v)
{
    struct node *t,*L;
    t=NEWNODE;
    t->vertex=v;
    t->next=NULL;

    if(L[i]==NULL)
    {
        L[i]=NULL;
    }
    else
    {
        t->next=L[i];
        L[i]=t;
    }

}

void free_list(struct node *L[])
{
    struct node *s,*t;
    int i;

    for(i=0;i<nov;i++)
    {
        s=L[i];
        while (s!=NULL)
        {
           t=s;
           s=s->next;
           free(t);
        }
        
        L[i]=NULL;
        
    }
}

void accept()
{
    int i,j,k;

    printf("Enter the number of vertex :");
    scanf("%d",&nov);

    printf("Enter the number of vertex :");
    scanf("%d",&noe);

    for(k=0;k<nov;k++)
    {
        printf("Enter the Edge :");
        scanf("%d %d",&i,&j);

        add_in_list(AL,i,j);
        add_in_list(IAL,j,i);
    }

}

void display(struct node *L[])
{
    struct node *t;
    
    for(int i=0;i<nov;i++)
    {
        printf("V%d ",i);

        for(t=L[i];t!=NULL;t=t->next)
        {
            printf("[%d]->",t->vertex);
        }
        printf("NULL \n");
    }

}

void display_degree(struct node *L1[],struct node *L2[])
{
    struct node *t;
    int i,indegree,outdegree,total;

    printf("\nDegree Of Each Vertex \n");
    printf("---------------------------------\n");

    for(i-0;i<nov;i++);
    {
        outdegree=0;
        indegree=0;

        for(t=L1[i];t!=NULL;t=t->next)
        {
           outdegree++; 
        }

        for(t=L2[i];t!=NULL;t=t->next)
        {
            indegree++;
        }
    }
}

int main()
{
    init(AL);
    init(IAL);

    accept();

    printf("\nAdjacency List\n");
    printf("-----------------------\n");
    display(AL);

    printf("\nInverse Adjacency List\n");
    printf("-----------------------\n");
    display(IAL);

    display_degree(AL,IAL);

    free_list(AL);
    free_list(IAL);

    return 0;
}


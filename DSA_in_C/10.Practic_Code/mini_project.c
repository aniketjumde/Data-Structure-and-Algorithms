#include <stdio.h>
#include <string.h>

struct Edge 
{
    int src, dest, weight;
};


int findParent(int parent[], int v) 
{
    if (parent[v] == v)
        return v;
    return parent[v] = findParent(parent, parent[v]);
}


void unionSet(int parent[], int a, int b) 
{
    a = findParent(parent, a);
    b = findParent(parent, b);
    parent[a] = b;
}


void sortEdges(struct Edge e[], int n) 
{
    struct Edge temp;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(e[j].weight > e[j+1].weight) 
            {
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int rooms, edgesCount;

    printf("\nEnter number of rooms: ");
    scanf("%d", &rooms);

    char roomNames[rooms][20];
    printf("\nEnter names of rooms:\n");
    for(int i=0; i<rooms; i++) {
        printf("Room %d name: ", i);
        scanf("%s", roomNames[i]);
    }

    printf("\nEnter number of possible wiring connections: ");
    scanf("%d", &edgesCount);

    struct Edge edges[edgesCount];

    printf("\nEnter connections in format: Room1_Index Room2_Index WireLength\n");
    printf("Example: 0 1 4 means connect Room0 & Room1 with 4m wire.\n\n");

    for(int i=0; i<edgesCount; i++) {
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    sortEdges(edges, edgesCount);

    int parent[rooms];
    for(int i=0; i<rooms; i++)
        parent[i] = i;

    int totalCost = 0;

    printf("\n============== OPTIMAL HOUSE WIRING PLAN ==============\n");
    printf("The best wiring plan to minimize cost is:\n\n");

    int selected = 0;
    for(int i=0; i<edgesCount && selected < rooms-1; i++) {
        int p1 = findParent(parent, edges[i].src);
        int p2 = findParent(parent, edges[i].dest);

        if(p1 != p2) {
            printf("Connect %-10s ↔ %-10s   (Wire: %d meters)\n",
                    roomNames[edges[i].src], roomNames[edges[i].dest], edges[i].weight);
            totalCost += edges[i].weight;
            unionSet(parent, p1, p2);
            selected++;
        }
    }

    printf("\n--------------------------------------------------------\n");
    printf(" Minimum Total Wire Required = %d meters\n", totalCost);
    printf("--------------------------------------------------------\n");

    return 0;
}


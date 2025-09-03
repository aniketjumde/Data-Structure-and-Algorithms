#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int u, v, w;
};

struct Subset {
    int parent, rank;
};

int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int cmp(const void* a, const void* b) {
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->w - b1->w;
}

void KruskalMST(struct Edge edges[], int V, int E) {
    qsort(edges, E, sizeof(edges[0]), cmp);

    struct Subset* subsets = (struct Subset*) malloc(V * sizeof(struct Subset));
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    int e = 0, i = 0, cost = 0;
    printf("Edges in MST (Kruskal):\n");
    while (e < V - 1 && i < E) {
        struct Edge next = edges[i++];
        int x = find(subsets, next.u);
        int y = find(subsets, next.v);

        if (x != y) {
            printf("%d - %d (Weight: %d)\n", next.u, next.v, next.w);
            cost += next.w;
            Union(subsets, x, y);
            e++;
        }
    }
    printf("Minimum Cost of MST = %d\n", cost);
}

int main() {
    int V, E;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &E);

    struct Edge* edges = (struct Edge*) malloc(E * sizeof(struct Edge));
    printf("Enter edges (u v w):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    KruskalMST(edges, V, E);

    return 0;
}


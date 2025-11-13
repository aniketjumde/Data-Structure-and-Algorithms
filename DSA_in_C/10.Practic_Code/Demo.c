#include <stdio.h>
#define V 6
#define R 4

int graph[V][V];
int color[V];

int isSafe(int v, int c) {
    for (int i = 0; i < V; i++)
        if (graph[v][i] && color[i] == c)
            return 0;
    return 1;
}

int graphColoringUtil(int m, int v) {
    if (v == V)
        return 1;
    for (int c = 1; c <= m; c++) {
        if (isSafe(v, c)) {
            color[v] = c;
            if (graphColoringUtil(m, v + 1))
                return 1;
            color[v] = 0;
        }
    }
    return 0;
}

void printSolution() {
    for (int i = 0; i < V; i++)
        printf("Task %d -> Machine %d\n", i, color[i]);
}

void graphColoring(int m) {
    for (int i = 0; i < V; i++)
        color[i] = 0;
    if (graphColoringUtil(m, 0) == 0)
        printf("No valid assignment possible\n");
    else
        printSolution();
}

int main() {
    int g[V][V] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 1, 1},
        {0, 0, 1, 1, 0, 1},
        {0, 0, 0, 1, 1, 0}
    };
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            graph[i][j] = g[i][j];
    printf("Task to Machine assignment:\n");
    graphColoring(R);
    return 0;
}


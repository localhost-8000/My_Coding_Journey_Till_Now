#include<stdio.h>
#include<stdlib.h>

int Min(int a, int b)
{
    return (a >= b) ? b : a;
}

int minDistance(int visited[], int distSet[], int V)
{
    int dist_i = 0, minDist = INT_MAX;
    for(int i=0; i<V; ++i)
    {
        if(!visited[i] && distSet[i] <= minDist)
        {
            minDist = distSet[i];
            dist_i = i;
        }
    }
    return dist_i;
}

void DijsktraAlgo(int V, int graph[V][V])
{
    int visited[V];
    for(int i=0; i<V; ++i)
        visited[i] = 0;
    int distSet[V];
    distSet[0] = 0;
    for(int i=1; i<V; ++i)
        distSet[i] = INT_MAX;

    for(int i=0; i<V; ++i)
    {
        int u = minDistance(visited, distSet, V);
        visited[u] = 1;
        for(int j=0; j<V; ++j)
        {
            if(graph[u][j])
            {
                int currMin = distSet[j];
                int wght = graph[u][j];
                distSet[j] = Min(currMin, distSet[u] + wght);
            }
        }
    }
    printf("Vertex\tMinCost\n");
    for(int i=0; i<V; ++i)
    {
        printf(" %d\t %d\n", i, distSet[i]);
    }
}

int main()
{
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    printf("Enter the adjacency matrix:\n");
    int graph[V][V];
    for(int i=0; i<V; ++i)
        for(int j=0; j<V; ++j)
            scanf("%d",&graph[i][j]);
    DijsktraAlgo(V, graph);
}

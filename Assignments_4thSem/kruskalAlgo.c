#include<stdio.h>
#include<stdlib.h>

struct edge
{
    int u, v, w;
};

int myCompareFun(const void *a, const void *b)
{
    int w1 = ((struct edge *)a)->w;
    int w2 = ((struct edge *)b)->w;
    return (w1 - w2);
}

int findParent(int parent[], int i)
{
    if(parent[i] == -1)
    {
        return i;
    }
    return findParent(parent, parent[i]);
}

int isCycle(int u, int v, int parent[])
{
    int x = findParent(parent, u);
    int y = findParent(parent, v);

    if(x == y)
        return 1;
    parent[x] = y;
    return 0;
}

void kruskalMST(int V, int e, struct edge graph[])
{
    int parent[V];
    for(int i=0; i<V; ++i)
    {
        parent[i] = -1;
    }
    int minCost = 0;
    int cnt = 0;
    printf("Kruskal MST is: \n");
    printf("src\tdest\tweight\n");
    for(int i=0; i<e; ++i)
    {
        int u = graph[i].u;
        int v = graph[i].v;
        int w = graph[i].w;

        if(!isCycle(u, v, parent))
        {
            minCost += w;
            printf(" %d\t %d\t %d\n", u, v, w);
            cnt++;
        }
        if(cnt == V-1)
            break;
    }
    printf("Total minimum cost required: %d", minCost);
}

int main()
{
    int V, e;
    printf("Enter the number of vertices: ");
    scanf("%d",&V);
    printf("Enter the number of edges: ");
    scanf("%d",&e);

    struct edge graph[e];
    printf("\nEnter the source edge, destination edge and weight(ensure 0-indexing): \n");
    printf("\nsrc\tdest\tweight\n");
    for(int i=0; i<e; ++i)
    {
        scanf("%d", &graph[i].u);
        scanf("%d", &graph[i].v);
        scanf("%d", &graph[i].w);
    }

    qsort(graph, e, sizeof(struct edge), myCompareFun);

    kruskalMST(V, e, graph);

    return 0;
}

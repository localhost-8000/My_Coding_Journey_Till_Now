#include<stdio.h>
#include<stdlib.h>

int front = -1;
int stack[50];

void push(int data)
{
    stack[++front] = data;
}

void pop()
{
    front--;
}

int top()
{
    return stack[front];
}

int empty()
{
    if(front == -1)
        return 1;
    return 0;
}

void DFS_Traversal(int V, int adjMat[V][V])
{
    int visited[V];
    for(int i=0; i<V; ++i)
    {
        visited[i] = 0;
    }
    push(0);
    visited[0] = 1;
    printf("DFS Traversal is: ");
    while(!empty())
    {
        int currV = top();
        printf("%d ", currV);
        pop();
        for(int j=0; j<V; ++j)
        {
            if(adjMat[currV][j] && !visited[j])
            {
                push(j);
                visited[j] = 1;
            }
        }
    }
}


int main()
{
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    int adjMat[V][V];
    printf("Enter the adjacency matrix: \n");
    for(int i=0; i<V; ++i)
    {
        for(int j=0; j<V; ++j)
        {
            scanf("%d", &adjMat[i][j]);
        }
    }
    DFS_Traversal(V, adjMat);

    return 0;
}


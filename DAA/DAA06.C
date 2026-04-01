#include <stdio.h>

#define N 5

int graph[N][N] = {
    {0,1,1,0,0},
    {1,0,0,1,1},
    {1,0,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0}
};

int visited[N] = {0};

void reset_visited()
{
    for(int i = 0; i < N; i++)
        visited[i] = 0;
}

void dfs(int node)
{
    printf("%d ", node + 1);
    visited[node] = 1;

    switch(node)
    {
        case 0:
            if(graph[0][1] && !visited[1]) dfs(1);
            if(graph[0][2] && !visited[2]) dfs(2);
            break;

        case 1:
            if(graph[1][0] && !visited[0]) dfs(0);
            if(graph[1][3] && !visited[3]) dfs(3);
            if(graph[1][4] && !visited[4]) dfs(4);
            break;

        case 2:
            if(graph[2][0] && !visited[0]) dfs(0);
            break;

        case 3:
            if(graph[3][1] && !visited[1]) dfs(1);
            break;

        case 4:
            if(graph[4][1] && !visited[1]) dfs(1);
            break;
    }
}

int main()
{
    int start;

    printf("Enter start node (1-%d): ", N);

    if(scanf("%d", &start) != 1 || start < 1 || start > N)
    {
        printf("Invalid input, starting from node 1\n");
        start = 1;
    }

    reset_visited();

    printf("DFS Traversal: ");
    dfs(start - 1);
    printf("\n");

    return 0;
}
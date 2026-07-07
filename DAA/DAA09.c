#include <stdio.h>

#define INF 999
#define N 4
int main()
{
    int graph[N][N] = {
        {0,2,4,0},
        {2,0,0,1},
        {4,0,0,3},
        {0,1,3,0}
    };

    int dist[N], visited[N] = {0};
    int i, j;
    int source = 0;  // node 1 (0-based index)

    // Step 1: set all distances to INF
    for(i = 0; i < N; i++)
    {
        dist[i] = INF;
    }

    // Step 2: distance from source to source is 0
    dist[source] = 0;

    // Step 3: repeat N-1 times
    for(i = 0; i < N - 1; i++)
    {
        int min = INF;
        int u = -1;

        // Pick the unvisited node with minimum distance
        for(j = 0; j < N; j++)
        {
            if(visited[j] == 0 && dist[j] < min)
            {
                min = dist[j];
                u = j;
            }
        }

     
        if(u == -1)
        {
            break;
        }

        visited[u] = 1;

        // Update distances of neighbors of u
        for(j = 0; j < N; j++)
        {
            if(graph[u][j] != 0 && visited[j] == 0)
            {
                int newDist = dist[u] + graph[u][j];
                if(newDist < dist[j])
                {
                    dist[j] = newDist;
                }
            }
        }
    }

    printf("Shortest distances from node 1:\n");
    for(i = 0; i < N; i++)
    {
        if(dist[i] == INF)
            printf("Node 1 -> Node %d : Not reachable\n", i + 1);
        else
            printf("Node 1 -> Node %d : %d\n", i + 1, dist[i]);
    }

    return 0;
}













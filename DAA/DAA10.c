#include <stdio.h>
#include <limits.h>

#define N 4

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int visited[N];
int min_cost = INT_MAX;

// recursive function
void tsp(int city, int count, int cost)
{
    // all cities visited, return to start
    if(count == N && graph[city][0])
    {
        if(cost + graph[city][0] < min_cost)
            min_cost = cost + graph[city][0];
        return;
    }

    for(int i = 0; i < N; i++)
    {
        if(!visited[i] && graph[city][i])
        {
            visited[i] = 1;
            tsp(i, count + 1, cost + graph[city][i]);
            visited[i] = 0; // backtrack
        }
    }
}

int main()
{
    visited[0] = 1; // start from city 0

    tsp(0, 1, 0);

    printf("Minimum travelling cost: %d\n", min_cost);

    return 0;
}
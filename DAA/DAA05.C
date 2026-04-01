#include <stdio.h>

#define N 4

int graph[N][N] = {
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

int visited[N] = {0};
int queue[N], front = 0, rear = -1;

void reset_bfs_state()
{
    front = 0;
    rear = -1;

    for(int i = 0; i < N; i++)
        visited[i] = 0;
}

void bfs(int start)
{
    if(start < 0 || start >= N)
    {
        printf("Invalid start node\n");
        return;
    }

    reset_bfs_state();

    queue[++rear] = start;
    visited[start] = 1;

    while(front <= rear)
    {
        int node = queue[front++];
        printf("%d ", node + 1);

        switch(node)
        {
            case 0:
                if(graph[0][1] && !visited[1]) { visited[1]=1; queue[++rear]=1; }
                if(graph[0][2] && !visited[2]) { visited[2]=1; queue[++rear]=2; }
                break;

            case 1:
                if(graph[1][0] && !visited[0]) { visited[0]=1; queue[++rear]=0; }
                if(graph[1][3] && !visited[3]) { visited[3]=1; queue[++rear]=3; }
                break;

            case 2:
                if(graph[2][0] && !visited[0]) { visited[0]=1; queue[++rear]=0; }
                if(graph[2][3] && !visited[3]) { visited[3]=1; queue[++rear]=3; }
                break;

            case 3:
                if(graph[3][1] && !visited[1]) { visited[1]=1; queue[++rear]=1; }
                if(graph[3][2] && !visited[2]) { visited[2]=1; queue[++rear]=2; }
                break;
        }
    }
}

int main()
{
    int start_node;

    printf("Enter start node (1-%d): ", N);
    scanf("%d",&start_node);

    printf("BFS traversal: ");
    bfs(start_node - 1);
    printf("\n");

    return 0;
}
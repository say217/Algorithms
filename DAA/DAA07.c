#include <stdio.h>

#define N 5
#define SLOT 3

struct Job
{
    char id;
    int deadline;
    int profit;
};

int main()
{
    struct Job jobs[N];

    // USER INPUT
    printf("Enter job details (ID Deadline Profit):\n");
    for(int i = 0; i < N; i++)
    {
        printf("Job %d: ", i + 1);
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    int slot[SLOT] = {0};
    char result[SLOT];
    int total_profit = 0;

    // sort jobs by profit (descending)
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(jobs[i].profit < jobs[j].profit)
            {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    // job scheduling
    for(int i=0;i<N;i++)
    {
        for(int j=jobs[i].deadline-1; j>=0 && j<SLOT; j--)
        {
            if(slot[j]==0)
            {
                result[j] = jobs[i].id;
                slot[j] = 1;
                total_profit += jobs[i].profit;
                break;
            }
        }
    }

    printf("Job sequence: ");
    for(int i=0;i<SLOT;i++)
    {
        if(slot[i])
            printf("%c ",result[i]);
    }

    printf("\nTotal profit: %d\n", total_profit);

    return 0;
}

/*!SECTION

#include <stdio.h>

struct Job
{
    char id;
    int deadline;
    int profit;
};

int main()
{
    int n;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[n];

    // Input jobs
    for(int i = 0; i < n; i++)
    {
        printf("Enter Job %d (id deadline profit): ", i + 1);
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    // Find maximum deadline → SLOT size
    int max_deadline = 0;
    for(int i = 0; i < n; i++)
    {
        if(jobs[i].deadline > max_deadline)
            max_deadline = jobs[i].deadline;
    }

    int slot[max_deadline];
    char result[max_deadline];

    for(int i = 0; i < max_deadline; i++)
        slot[i] = 0;

    int total_profit = 0;

    // Sort jobs by profit (descending)
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(jobs[i].profit < jobs[j].profit)
            {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    // Job scheduling
    for(int i = 0; i < n; i++)
    {
        for(int j = jobs[i].deadline - 1; j >= 0 && j < max_deadline; j--)
        {
            if(slot[j] == 0)
            {
                result[j] = jobs[i].id;
                slot[j] = 1;
                total_profit += jobs[i].profit;
                break;
            }
        }
    }

    // Output
    printf("\nJob sequence: ");
    for(int i = 0; i < max_deadline; i++)
    {
        if(slot[i])
            printf("%c ", result[i]);
    }

    printf("\nTotal profit: %d\n", total_profit);

    return 0;
}
    

*/
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
    struct Job jobs[N] = {
        {'A',2,100},
        {'B',1,19},
        {'C',2,27},
        {'D',1,25},
        {'E',3,15}
    };

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
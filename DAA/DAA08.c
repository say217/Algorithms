// N quen 

#include <stdio.h>

int board[10];
int n;

int safe(int row,int col)
{
    for(int i=1;i<row;i++)
    {
        if(board[i]==col || (board[i]-col)==(i-row) || (board[i]-col)==(row-i))
            return 0;
    }
    return 1;
}

void queen(int row)
{
    for(int col=1; col<=n; col++)
    {
        if(safe(row,col))
        {
            board[row]=col;

            if(row==n)
            {
                for(int i=1;i<=n;i++)
                    printf("%d ",board[i]);
                printf("\n");
            }
            else
                queen(row+1);
        }
    }
}

int main()
{
    printf("Enter number of queens: ");
    scanf("%d",&n);

    queen(1);

    return 0;
}
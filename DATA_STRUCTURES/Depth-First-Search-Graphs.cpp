#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a;
    if (isempty(q))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

    //DFS implementation
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] ={{0, 1, 1, 1, 0, 0, 0},
                  {1, 0, 0, 1, 0, 1, 0},
                  {1, 1, 0, 1, 1, 0, 0},
                  {1, 0, 1, 0, 1, 0, 0},
                  {0, 0, 1, 1, 0, 1, 0},
                  {0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0}};

    

void dfs(int i){
    cout << i<<" ";
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j]==1 && !visited[j])
        {
            dfs(j);
        }
        
    }
    
}

int main()
{
    dfs(0);

    return 0;
}

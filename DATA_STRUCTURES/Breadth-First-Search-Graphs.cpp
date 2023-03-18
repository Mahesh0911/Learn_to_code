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

int main()
{
    struct queue q;
    q.size =20;
    q.f = q.r = -1;
    // q.arr=(int*)malloc(q.size*sizeof(int)) ;
    q.arr = new int(q.size * sizeof(int));

    //BFS implementation
    int u;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] ={{0, 1, 1, 1, 0, 0, 0},
                  {1, 0, 0, 1, 0, 1, 0},
                  {1, 1, 0, 1, 1, 0, 0},
                  {1, 0, 1, 0, 1, 0, 0},
                  {0, 0, 1, 1, 0, 1, 1},
                  {0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 0, 1, 0, 0}};
    cout << i<<endl;

    visited[i] = 1;
    enqueue(&q, i); //enque for exploration
    while (!isempty(&q))
    {
        int node = dequeue(&q);
        for (int  j = 0; j < 7; j++)
        {
            if (a[node][j]==1 && visited[j]== 0)
            {
                cout << j << endl;
                visited[j] = 1;
                enqueue(&q, j);
            }
            
        }
        
    }
    

    return 0;
}

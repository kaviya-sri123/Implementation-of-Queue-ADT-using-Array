#include "queue_header.h"
void Queue::enqueue(int e)
{
    if(rear == size-1)
    {
        cout<<"\nQueue is full.\n\n";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        passenger_id[rear] = e;
        cout<<"\nElement queued.\n\n";
    }
}
void Queue::dequeue()
{
    if(front == -1 || front > rear)
    {
        cout<<"\nQueue is empty.\n\n";
    }
    else
    {
        int d;
        d = passenger_id[front];
        cout<<"\nElement "<<d<<" dequeued.\n\n";
        front++;
    }
}
void Queue::display()
{
    if(front == -1 || front > rear)
    {
        cout<<"\nQueue is empty.\n\n";
    }
    else
    {
        cout<<"\nQueue : ";
        for(int i=front;i<=rear;i++)
        {
            cout<<passenger_id[i]<<"  ";
        }
        cout<<"\n\n";
    }
}
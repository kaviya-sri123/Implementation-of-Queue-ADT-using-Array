#include <iostream>
#include <cstdlib>
#define size 5
using namespace std;
class Queue
{
    int passenger_id[size];
    int front,rear;
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }
        void enqueue(int e);
        void dequeue();
        void display();
};
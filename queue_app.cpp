#include "queue_header.h"
int main()
{
    Queue q;
    int ch;
    do
    {
        cout<<"==========MENU==========\n";
        cout<<"\t1.Enqueue\n";
        cout<<"\t2.Dequeue\n";
        cout<<"\t3.Display\n";
        cout<<"\t4.Exit\n";
        cout<<"========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int e;
                cout<<"Enter the element to be queued : ";
                cin>>e;
                q.enqueue(e);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice.\n";
                break;
        }
    }while(ch != 4);
    return 0;
}
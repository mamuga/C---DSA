#include<iostream>
#define size 20
using namespace std;

class Queue{
    int rear, front;
    int queue[size];
    public:
        Queue();
        void enqueue(int data);
        void dequeue();
        void peek();
        void display();
};

Queue::Queue()
{
    rear=front=-1;
}

void Queue::enqueue(int data)
{
    if(rear==size-1)
    {
        cout<<"Queue Overflow";
        return;
    }
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
    
}

void Queue::dequeue()
{
    if(front==-1){
        cout<<"Queue underflow";
        return;
    }
    else {
       // for(int i=front; i<=rear; i++)
        {
            cout<<queue[front]<<" ";
        }
    }

}

void Queue::peek()
{
    if(front==-1){
        cout<<"Queue underflow";
        return;
    }
    else {
       // for(int i=front; i<=rear; i++)
        {
            cout<<queue[front]<<" ";
        }
    }

}

void Queue::display()
{
    if(front==-1){
        cout<<"Queue underflow";
        return;
    }
    else {
       // for(int i=front; i<=rear; i++)
       while(front<=rear)
        {
            cout<<queue[front]<<" ";
            front++;
        }
    }

}

int main()
{
    Queue usiu;
    int i, n, x;
    cout<<"How many values ";
    cin>>n;

    cout<<"Enter values ";
    for(i=0; i<n; i++)
    {
        cin>>x;
        usiu.enqueue(x);
    }

    cout<<"Removed value";
    usiu.dequeue();
    cout<<"Peeked value";
    usiu.peek();
    cout<<"The values are";
    usiu.display();

}

#include<iostream>
#define size 10

using namespace std;
class Stack{
    int top;
    int myarray[size];
    public:
    Stack();
    void push(int data);
    int pop();
    int peek();
    void display();
};
Stack::Stack()
{
    top=-1;
}
void Stack::push(int data)
{
    if(top==size-1){
        cout<<"Stack Overflow";
        return; 
    }
    else
    {
        top++;
        myarray[top]=data;
    }
    
}

int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else
    {
        int data=myarray[top];
        top--;
        return data;
    }
    
}


int Stack::peek()
{
    if(top==-1)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else
    {
        int data=myarray[top];
        return data;
    }
    
}

void Stack::display()
{
    while (top>0)
    {
        cout<<myarray[top]<<" ";
        top--;
    }
 
}

int main()
{
    Stack usiu;
    int i,n,data;
    cout<<"How many values";
    cin>>n;

    cout<<"Enter values now ";
    for(i=n; i<n; i++)
    {
        cin>>data;
        usiu.push(data);  
    }

    cout<<"Popped value is "<<usiu.pop()<<" ";
    cout<<"Peeked value is "<<usiu.peek()<<" ";
    cout<<"Remaining values ";
    usiu.display();

}


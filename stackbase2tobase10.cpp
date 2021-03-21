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
    int n, remainder;

    cout<<"Enter a number ";
    cin>>n;
    cout<<n<<"converted to base two is ";
    while (n>0)
    {
        remainder=n%2;
        usiu.push(remainder); 
        n=n/2;
    }
   
    usiu.display();

    
 
}


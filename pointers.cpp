#include<iostream>
using namespace std;
int main()
{
    int n;
    int *p;
    p=&n;
    cout<<"Enter a value using variable";
    cin>>n;

    cout<<"show value using variable";
    cout<<n;

    cout<<"show value using pointer";
    cout<<*p;

    cout<<"capture value using pointer";
    cin>>*p;

    cout<<"capture value using pointer";
    cout<<n;
}
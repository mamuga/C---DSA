#include<iostream>
using namespace std;
class Test{
    public:
        int a,b, sum;
};

int main()
{
    Test *t=new Test;
    cout<<"Enter two values";
    cin>>t->a;
    cin>>t->b;

    t->sum=t->a+ t->b;
    cout<<"Result is "<<t->sum;
}
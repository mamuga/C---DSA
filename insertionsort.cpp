#include<iostream>
using namespace std;
#define size 30

class Sorting{
    int i, n;
    int myarray[size];
    public:
        void inputdata();
        void display();
        void insertionsort();
};
void Sorting::inputdata()
{
    cout<<"how many values";
    cin>>n;
    cout<<"Enter the values";
    for(i=0; i<n; i++)
    cin>>myarray[i];
}
void Sorting::display()
{
    for(i=0; i<n; i++)
    cout<<myarray[1]<<" ";
}
void Sorting::insertionsort()
{
    int temp,j;
    for(i=1; i<n; i++)
    {
        j=i;
        while(myarray[j]<)
    }
}

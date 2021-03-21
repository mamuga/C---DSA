#include<iostream>
using namespace std;
#define size 100
class Student{
    int i, n, x;
    bool found = false;
    int myarray[100];

    public:
        void insertdata();
        void displaydata();
        void searchdata();
};

void Student::insertdata()
{
    cout<<"Enter number of data to work with";
    cin>>n;

    cout<<"Enter the values now"<<endl;
    for(i=0; i<n; i++)
    cin>>myarray[i];
}

void Student::searchdata()
{
    cout<<"Enter value to search";
    cin>>x;

    for(i=0; i<n; i++)
    {
        if(x==myarray[i])
        {
            cout<<x<<"  has been found at index "<<i;
            found=true;
        }
    }

    if(!found)
    cout<<x<<" was never found";
}

void Student::displaydata()
{
    cout<<"Values are "<<endl;
    for(i=0; i<n; i++)
    cout<<myarray[i]<<endl;
}

int main()
{
    Student usiu;
    usiu.insertdata();
    usiu.displaydata();
    usiu.searchdata();
}

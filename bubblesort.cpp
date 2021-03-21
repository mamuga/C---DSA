#include<iostream>
using namespace std;

int myarray[100];
int i, j, n;

void insertdata()
{
    cout<<"How many values ";
    cin>>n;
    cout<<"Enter the values in unsorted order";
    for(i=0; i<n; i++)
    cin>>myarray[i];
}

void bubblesort()
{
	int temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(myarray[j]>myarray[j+1])
			{
				temp=myarray[j];
				myarray[j]=myarray[j+1];
				myarray[j+1]=temp;
			}
		
		}
		
	}
}

void display()
{
	for(i=0; i<n; i++)
	cout<<myarray[i]<<"  ";
}

int main()
{
	insertdata();
	cout<<"Original list: ";
	display();
	bubblesort();
	cout<<"\n\nSorted List:  ";
	display();
}
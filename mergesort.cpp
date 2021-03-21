#include<iostream>
#define size 20
using namespace std;
int i, n;
int myarray[size];

//capture values
void getvalues()
{
    cout<<"how many values ";
    cin>>n;

    cout<<"enter values now ";
    for(i=0; i<n; i++)
    cin>>myarray[i];
}

void display()
{
    for(i=0; i<n; i++)
    {
        cout<<myarray[i]<<" ";
    }
}

void merge(int *array, int low,int mid, int high )
{
    i=low;
    int j=mid+1;
    int k=low;
    int temparray[high+1]; //temperal array

    while(i<=mid && j<=high)
    {
        if (array[i]<=array[j])
        {
            temparray[k]=array[i];
            i++;
            k++;
        }
        else
        {
            temparray[k]=array[j];
            j++;
            k++;
        }    
    }
    //pick the remaining elements fromthe left
    while (i<=mid)
    {
        temparray[k]=array[i];
        i++;
        k++;
    }
    //pick reainingelements from the right
    while (j<=high)
    {
        temparray[k]=array[j];
        j++;
        k++;
    }
    //copy all elements back to the original array
    for (k=low; k<=high; k++)
    {
        array[k]=temparray[k];
    }
}
void mergesort(int *arr, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    getvalues();
    mergesort(myarray, 0,n-1);
    display();
}
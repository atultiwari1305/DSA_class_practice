#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[],int low, int high)
{

    int pivot = a[low];
    int i = low;
    int j = high+1;
    while(i<j)
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}

void quicksort(int a[],int low, int high)
{
    if(low<high)
    {
        int j = partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}

int main()
{
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number at a["<<i<<"] : ";
        cin>>a[i];
    }
    
    quicksort(a,0,n-1);
    cout<<"\nSorted Elements are: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
    
}
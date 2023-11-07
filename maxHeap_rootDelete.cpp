#include<iostream>
using namespace std;

void maxHeap(int a[], int n, int k)
{
    int val = a[k];
    int j=2*k+1;
    while(j<n)
    {
        if(j<n && a[j+1]>a[j])
        {
            j=j+1;
        }
        if(val>a[j])
        {
            break;
        }
        else
        {
            a[(j-1)/2] = a[j];
            j = (j*2)+1;
        }
    }
    a[(j-1)/2] = val;
    return;
}

void build_heap(int a[],int n)
{
    int k;
    for(int k=((n/2)-1); k>=0; k--)
    {
        maxHeap(a,n,k);
    }
}

void hipify(int a[],int n,int index)
{
    int largeIndex = index;
    int L = 2*index+1;
    int R = 2*index+2;
    if(L<n && a[L]>a[largeIndex])
    {
        largeIndex = L;
    }
    if(R<n && a[R]>a[largeIndex])
    {
        largeIndex = R;
    }
    if(largeIndex!=index)
    {
        swap(a[largeIndex],a[index]);
        hipify(a,n,largeIndex);
    }
}

void deleteHeap(int a[], int n)
{
    int index=0;
    a[index] = a[n-1];
    hipify(a,n,index);
}

int main()
{
    int a[30], n;
    cout<<"Enter the number of nodes to be created: ";
    cin>>n;
    cout<<"Enter all the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build_heap(a,n);
    cout<<"Max Heap created successfully."<<endl;
    cout<<"Max Heap: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    deleteHeap(a,n);
    cout<<endl<<"After deleting the root, the MAX heap is: ";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
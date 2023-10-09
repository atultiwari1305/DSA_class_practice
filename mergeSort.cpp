#include<iostream>
using namespace std;

void merge(int a[],int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1],r[n2];
    int k=0;
    for(int i=low;i<=mid;i++)
    {
        l[k++]=a[i];
    }
    k=0;
    for(int i=mid+1;i<=high;i++)
    {
        r[k++]=a[i];
    }
    int i = 0,	j = 0;
    k = low;
	while (i < n1 && j < n2) 
	{
		if (l[i] <= r[j]) 
		{
			a[k++] = l[i];
			i++;
		}
		else 
		{
			a[k++] = r[j];
			j++;
		}
		
	}
	// Copy the remaining elements of l[], if there ae any
	while (i < n1) 
	{
		a[k++] = l[i];
		i++;
	}
	// Copy the remaining elements of r[], if there ae any
	while (j < n2) 
	{
		a[k++] = r[j];
		j++;
	}
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main()
{
    int n;
    cout<<"Enter the range of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number at a["<<i<<"] : ";
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    cout<<"\nSorted Elements ae: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
}
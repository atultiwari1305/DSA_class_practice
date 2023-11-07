#include<iostream>
using namespace std;

int main()
{
    int n, edges,i,j;
    cout<<"Enter the number of nodes and edges: ";
    cin>>n>>edges;
    int adj[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    int start_vert, end_vert;
    cout<<"Enter the start_vert and end_vert for every edges: ";
    for(i=0;i<edges;i++)
    {
        cin>>start_vert>>end_vert;
        adj[start_vert][end_vert] = 1;
    }
    cout<<"Adjacency Matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }
}
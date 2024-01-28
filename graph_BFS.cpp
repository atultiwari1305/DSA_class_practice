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
    int start,queue[n], bfs[n], status[n], f=-1, r=-1, k=0;
    cout<<"Enter the starting vertex: ";
    cin>>start;
    for(i=0;i<n;i++)
    {
        status[i]=0;
    }
    f=r=0;
    queue[f]=start;
    status[start]=1;
    while(f!=-1)
    {
        if(f==r)
        {
            f=r=-1;
        }
        else
        {
            f++;
        }
        int w=queue[f];
        bfs[k++]=queue[f];
        status[w]=2;
        for(int a=0;a<n;a++)
        {
            if(adj[w][a]==1 && status[a]==0)
            {
                queue[++r]=a;
                if(r==0)
                {
                    f=0;
                }
                status[a]=1;
            }
        }
    }
    cout<<"BFS is: ";
    for(i=0;i<k;i++)
    {
        cout<<bfs[i]<<" ";
    }
    return 0;
}
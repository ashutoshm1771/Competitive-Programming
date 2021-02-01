// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    vector<int> *adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj=new vector<int>[v];
    }
    void addEdge(int u,int w)
    {
        adj[u].push_back(w);
    }
    void DFSUtil(int s,vector<bool>& vis)
    {
        vis[s]=true;
        cout<<s<<" ";
        for(auto x: adj[s])
        {
            if(!vis[x])
                DFSUtil(x,vis);
        }
    }
    void DFS(int s)
    {
        vector<bool> vis(v,false);
        for(int x=1;x<v;x++)
        {
            if(!vis[x])
            {
                DFSUtil(x,vis);
            }
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.addEdge(4,6);
    g.addEdge(5,6);
    g.DFS(1);
    return 0;
}

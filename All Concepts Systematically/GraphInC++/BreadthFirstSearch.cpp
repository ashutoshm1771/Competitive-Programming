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
    void BFS(int st)
    {
        queue<int> q;
        q.push(st);
        vector<bool> vis(v);
        vis[st]=true;
        while(!q.empty())
        {
            st=q.front();
            cout<<st<<" ";
            q.pop();
            for(auto x: adj[st])
            {
                if(!vis[x])
                {
                    vis[x]=true;
                    q.push(x);
                }
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
    g.BFS(1);
    return 0;
}
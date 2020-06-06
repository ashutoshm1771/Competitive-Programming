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
    void DFS(int s)
    {
        vector<bool> vis(v,false);
        stack<int> stk;
        stk.push(s);
        //vis[s]=true;
        while(!stk.empty())
        {
            s=stk.top();
            stk.pop();
            if(!vis[s])
            {
                vis[s]=true;
                cout<<s<<" ";
            }
            for(auto x: adj[s])
            {
                if(!vis[x])
                {
                    stk.push(x);
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
    g.DFS(1);
    return 0;
}
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
    void topologicalSortUtil(int s,vector<bool>& vis,stack<int>& stk)
    {
        vis[s]=true;
        for(auto x: adj[s])
            if(!vis[x])
                topologicalSortUtil(x,vis,stk);
        stk.push(s);
    }
    void topologicalSort()
    {
        vector<bool> vis(v,false);
        stack<int> s;
        for(int i=0;i<v;i++)
            if(!vis[i])
                topologicalSortUtil(i,vis,s);
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 
    g.topologicalSort();
    return 0;
}
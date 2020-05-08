// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> displayTable(vector<vector<string>>& v) {
        set<string> fi;
        set<int> tn;
        map<string,int> m;
        string temp="";
        for(int i=0;i<v.size();i++)
        {
            fi.insert(v[i][2]);
            tn.insert(stoi(v[i][1]));
            temp=v[i][2]+v[i][1];
            //cout<<temp<<" ";
            m[temp]++;
        }
        cout<<endl;
        vector<vector<string> > res(tn.size()+1);
        for(int i=0;i<res.size();i++)
        {
            res[i]=vector<string>(fi.size()+1);
        }
        res[0][0]="Table"; int i=1;
        for(auto x: fi){
            res[0][i]=x;
            i++;
        } i=1;
        for(auto x: tn){
            res[i][0]=to_string(x);
            i++;
        }
        vector<int> tnv(tn.begin(),tn.end());
        vector<string> fiv(fi.begin(),fi.end());
        for(int i=1;i<=tnv.size();i++)
        {
            for(int j=1;j<=fiv.size();j++)
            {
                string tem=fiv[j-1]+to_string(tnv[i-1]);
                //cout<<tem<<" ";
                res[i][j]=to_string(m[tem]);
            }
        }
        return res;
    }
void disp(vector<vector<string> > v)
{
    for(int i=0;i<v.size();i++)
    {
        for(auto x: v[i])
            cout<<x<<" ";
        cout<<endl;
    }
}
int main()
{
    vector<vector<string> > v(6);
    for(int i=0;i<6;i++)
    {
        v[i]=vector<string>(3);
        for(int j=0;j<3;j++)
            cin>>v[i][j];
    }
    disp(v);
    disp(displayTable(v));
    return 0;
}

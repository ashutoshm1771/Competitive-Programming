// Author : Ashutosh Mishra
// Console Based Application
#include <bits/stdc++.h>
using namespace std;

bool isNum(string s)
{
    for(int i=0;s[i];i++)
    {
        if(s[i]>='0' && s[i]<='9')
            int c=0;  
        else
            return false;
    }
    return true;
}
void displayExpe(vector<vector<int> > v,map<int,string> mis)
{
    cout<<"--The Expense Table is--"<<endl;
    cout<<"   ";
    for(int i=0;i<v.size();i++)
        cout<<mis[i]<<"   ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<mis[i]<<"   ";
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    try{
    start:;
    cout<<"Enter the number of Room Sharers"<<endl;
    string sn;
    cin>>sn;
    int n;
    if(isNum(sn))n=stoi(sn);
    else{
        cout<<"Enter valid Number"<<endl;
        goto start;
    }
    vector<vector<int> > expe(n) ;
    for(int i=0;i<n;i++)
    expe[i]=vector<int>(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        expe[i][j]=0;
    }
    vector<string> names;
    map<string,int> m;
    map<int,string> mis;
    set<string> s;
    string nam;
    cout<<"Enter their names in order"<<endl;
    for(int i=0;i<n;i++)
    {
        enter:;
        cin>>nam;
        if(s.find(nam)!=s.end()){
            cout<<"Duplicates not allowed"<<endl;
            cout<<"Enter name at position "<<i+1<<" again."<<endl;
            goto enter;
        }
        m[nam]=i;
        mis[i]=nam;
        s.insert(nam);
        names.push_back(nam);
    }
    jump:;
    cout<<"----Main Menu----"<<endl;
    cout<<"1. Add an expense."<<endl;
    cout<<"2. Show Expenses."<<endl;
    cout<<"3. Exit Program."<<endl;
    char ival;
    string amts;
    cin>>ival;
    if(ival=='1'){
        bear:;
        cout<<"Enter the bearer of payment"<<endl;
        cin>>nam;
        if(s.find(nam)==s.end())
        {
            cout<<"Enter valid name"<<endl;
            goto bear;
        }
        amountj:;
        cout<<"Enter the amount paid"<<endl;
        int amt;
        cin>>amts;
        if(isNum(amts))amt=stoi(amts);
        else{
            cout<<"Wrong entry, enter valid details"<<endl;
            goto amountj;
        }
        int net=amt/n;
        for(int k=0;k<n;k++)
        {
            if(k!=m[nam]){
                if(net+expe[k][m[nam]]>expe[m[nam]][k]){
                    expe[k][m[nam]]+=net-expe[m[nam]][k];
                    expe[m[nam]][k]=0;
                }
                else if(net+expe[k][m[nam]]==expe[m[nam]][k]){
                    expe[m[nam]][k]=0;
                    expe[k][m[nam]]=0;
                }
                else{
                    expe[m[nam]][k]-=net;
                    expe[k][m[nam]]=0;
                }
            }
        }
        goto jump;
    }
    else if(ival=='2')
    {
        displayExpe(expe,mis);
        goto jump;
    }
    else if(ival=='3')
    {
        exit(0);
    }
    else{
        cout<<"Wrong Entry, enter 1,2,3 values only"<<endl;
        goto jump;
    }
    }
    catch(exception) 
    {
        exit(0);
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

string baseName = "./tests/input/input";

int randomNoGenerator(ll start,ll end) 
{ 
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(start, end); 
    return dis(gen); 
} 

string getTest(int testNumber)
{
    string str=to_string(testNumber)+".txt";
    int len=2;
    if(str.size()<2) return "0"+str;
    return str;
}

void easy(int testNumber)
{
    string fileName = baseName+getTest(testNumber);
    FILE *fp=fopen(fileName.c_str(),"w");
    ll n=randomNoGenerator(1,10);
    ll maxn=1ll<<n;
    ll k=randomNoGenerator(1,min(100000ll,maxn));
    ll A=randomNoGenerator(1,10000);
    ll B=randomNoGenerator(1,10000);
    fprintf(fp,"%lld %lld %lld %lld\n",n,k,A,B);
    unordered_set<ll> indexes;
    while(indexes.size()!=k)
    {
        indexes.insert(randomNoGenerator(1,maxn));
    }
    for(auto val:indexes) fprintf(fp,"%lld\n",val);
    fclose(fp);
}

void medium(int testNumber)
{
    string fileName = baseName+getTest(testNumber);
    FILE *fp=fopen(fileName.c_str(),"w");
    ll n=randomNoGenerator(10,20);
    ll maxn=1ll<<n;
    ll k=min(10000ll,maxn/2);
    ll A=randomNoGenerator(1,10000);
    ll B=randomNoGenerator(1,10000);
    fprintf(fp,"%lld %lld %lld %lld\n",n,k,A,B);
    unordered_set<ll> indexes;
    while(indexes.size()!=k)
    {
        indexes.insert(randomNoGenerator(1,maxn));
    }
    for(auto val:indexes) fprintf(fp,"%lld\n",val);
    fclose(fp);
}

void hard(int testNumber)
{
    string fileName = baseName+getTest(testNumber);
    FILE *fp=fopen(fileName.c_str(),"w");
    ll n=randomNoGenerator(20,30);
    ll maxn=1ll<<n;
    ll k=min(100000ll,maxn/2);
    ll A=randomNoGenerator(1,10000);
    ll B=randomNoGenerator(1,10000);
    fprintf(fp,"%lld %lld %lld %lld\n",n,k,A,B);
    unordered_set<ll> indexes;
    while(indexes.size()!=k)
    {
        indexes.insert(randomNoGenerator(1,maxn));
    }
    for(auto val:indexes) fprintf(fp,"%lld\n",val);
    fclose(fp);
}

int main()
{
    int t,i=1;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        if(x<5) easy(i++);
        else if(x<10) medium(i++);
        else hard(i++);
    }
    return 0;
}

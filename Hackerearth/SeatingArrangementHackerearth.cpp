#include<iostream>
using namespace std;
int getVal(int n)
{
    int l=(n/6)-(n%6==0),u=l+1;
    if( l&1 ){
        if(n%6==0)  return n-11;
        else return  n - (2*(n%6))+1;
    }
    else {
        if(n%6==0) return n+1;
        else return n + (2*(7-(n%6))) -1;
    }
}
string getPos(int n)
{
    int m=n%6;
    if(m==0 || m==1)return "WS";
    else if(m==2 || m==5) return "MS";
    else return "AS";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int g=getVal(n);
        string pos=getPos(n);
        cout<<g<<" "<<pos<<endl;
    }
    return 0;
}
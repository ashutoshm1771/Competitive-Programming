#include<bits/stdc++.h>
/* //--
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> // oset.order_of_key(a); --> # of e < a
using namespace __gnu_pbds;   // *(oset.find_by_order(a)); --> (a-1)th smallest e  
#define orderedSet tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
//-- */  
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define pb push_back 
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,a,b) for(int i=a;i<=b;i++)
#define fo2(i,a,b) for(int i=a;i<b;i++)
#define fo3(i,s) for(int i=0;s[i];i++)
#define fo4(x,s) for(auto x: s)
#define all(v) v.begin(),v.end();
using namespace std;
typedef long long int ll;
bool first(vector<int> v)
{
    int n=v.size();
    bool fl=true,ffl=false;
    map<int,int> m;
    fo4(x,v)
    {
        if(x==5)
        {
            m[5]++;
        }
        else if(x==10)
        {
            if(m[5]<1){
                fl=false;
                break;
            }
            else{
                m[5]--;
                m[10]++;
            }
        }
        else{ffl=true;
            if(m[10]<1)
            {
                if(m[5]<2)
                {
                    fl=false;
                    break;
                }
                else{
                    ffl=false;
                    m[5]--; m[5]--;
                    m[15]++;
                }
            }
            else{
                    m[10]--;
                    m[15]++;
            }
        }
    }
    if(fl)return true; //NO
    else return false; //YES
}
bool second(vector<int> v)
{
    int n=v.size();
    bool fl=true,ffl=false;
    map<int,int> m;
    fo4(x,v)
    {
        if(x==5)
        {
            m[5]++;
        }
        else if(x==10)
        {
            if(m[5]<1){
                fl=false;
                break;
            }
            else{
                m[5]--;
                m[10]++;
            }
        }
        else{ffl=true;
            if(m[5]<2)
            {
                if(m[10]<1)
                {
                    fl=false;
                    break;
                }
                else{
                    ffl=false;
                    m[10]--; 
                    m[15]++;
                }
            }
            else{
                m[5]--; m[5]--;
                m[15]++;
            }
        }
    }
    if(fl)return true; //NO
    else return false; //YES
}
void solve()
{
    int n;
    cin>>n;
    vi v(n);
    fo(i,n)
        cin>>v[i];
    if(first(v))
        if(second(v))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

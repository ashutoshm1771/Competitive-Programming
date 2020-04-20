// Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000000
#define clr(arr,qqq) memset((arr),0,(sizeof(*arr))*(qqq))

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define getbit(n,i) (((n)&(1<<(i)))!=0)
#define setbit0(n,i) ((n)&(~(1<<(i))))
#define setbit1(n,i) ((n)|(1<<(i)))
#define togglebit(n,i) ((n)^(1<<(i)))
#define read freopen("debug\\in.txt","r",stdin)
#define write freopen("debug\\out.txt","w",stdout)
#define fi first
#define se second
#define getI(a) scanf("%d",&a)
#define getII(a,b) scanf("%d%d",&a,&b)
#define PI (acos(-1))
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod (1000000007)
#define asz 500005
vector<vi> grid(500,vi(500,INF));
int main()
{
    fastread;
    int T=1;
//    cin>>T;
    for(int qq=1;qq<=T;qq++)
    {
        ll c,f;
        cin>>c>>f;
        for(int i=0;i<f;i++)
        {
            ll x,y,p;
            cin>>x>>y>>p;
            x--,y--;
            grid[x][y]=p;
            grid[y][x]=p;
        }
        for(int k=0;k<c;k++)
        {
            for(int i=0;i<c;i++)
            {
                for(int j=0;j<c;j++)
                {
                    grid[i][j]=min(grid[i][j],grid[i][k]+grid[k][j]);
                }
            }
        }
        ll ans=0;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]!=INF&&i!=j)ans=max(ans,grid[i][j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

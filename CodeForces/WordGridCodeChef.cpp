// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(i=0;i<n;i++)
#define forin(i,s,n) for(i=s;i<n;i++)
#define pb push_back
#define ll long long
#define vv(i) vector<vector<i>>
#define ldd long double
#define ld double
#define mod 1000000007
#define debug(x) cout<<(#x)<<" "<<x<<endl;
#define endl "\n"
#define PI 3.14159265

char mini[4][4];
bool used = false;

struct grid{
    char s[4][4];
    bitset<4> used[2];
    grid()
    {
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                s[i][j] = '.';
    }
};

int n;
vector<string> words(32);

void formgrid(int cur, grid &gr)
{
    int i,j;
    if(cur == n)
    {
                forn(i,4)
        {
            forn(j,4)
            {
                if(gr.s[i][j] == '.')gr.s[i][j] = 'A';
                if(mini[i][j] == '.')mini[i][j] = 'A';
            }
        }
        used  = true;
        int check = 0;
        forn(i,4)
        {
            forn(j,4)
            {
                // debug(ans[k).s[i][j]
                // debug(mini[i][j])
                if(gr.s[i][j] == mini[i][j])continue;

                if(gr.s[i][j]<mini[i][j])
                    check = 1;
                else if(gr.s[i][j]>mini[i][j])
                    check = -1;
                break;
            }
            if(check!=0)break;
        }
        
        if(check == 1)
        {
            forn(i,4)
                forn(j,4)
                    mini[i][j] = gr.s[i][j];
        }
        return;
    }

    int checking = 0; 
    forn(i,4)
    {
        if(gr.used[checking][i])continue;
        else
        {
            bool check = true;
            forn(j,4)
            {
                if(gr.s[i][j] == '.' || gr.s[i][j] == words[cur][j])continue;
                else 
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                grid t1 = gr;
                forn(j,4)
                    t1.s[i][j] = words[cur][j];
                t1.used[checking][i] = true;
                formgrid(cur+1,t1);
            }
            
            check = true;
            forn(j,4)
            {
                if(gr.s[i][j] == '.' || gr.s[i][j] == words[cur][3-j])continue;
                else 
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                grid t1 = gr;
                forn(j,4)
                    t1.s[i][j] = words[cur][3-j];
                t1.used[checking][i] = true;
                formgrid(cur+1,t1);
            }
        }
    }
    checking = 1;
    forn(i,4)
    {
        if(gr.used[checking][i])continue;
        else
        {
            // debug(cur);
            // debug(i);
            bool check = true;
            forn(j,4)
            {
                if(gr.s[j][i] == '.' || gr.s[j][i] == words[cur][j])continue;
                else 
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                grid t1 = gr;
                forn(j,4)
                    t1.s[j][i] = words[cur][j];
                t1.used[checking][i] = true;
                formgrid(cur+1,t1);
            }
            
            check = true;
            forn(j,4)
            {
                if(gr.s[j][i] == '.' || gr.s[j][i] == words[cur][3-j])continue;
                else 
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                grid t1 = gr;
                forn(j,4)
                    t1.s[j][i] = words[cur][3-j];
                t1.used[checking][i] = true;
                formgrid(cur+1,t1);
            }
        }
    }
}

int preprocess(){
    int ns = 0;
    for(int i=0;i<n;i++)
    {
        bool check = true;
        for(int j=0;j<ns;j++)
        {
            string rev = words[j];
            reverse(rev.begin(),rev.end());
            if(words[j] == words[i] || rev == words[i])
            {
                check = false;
                break;
            }
        }
        if(check)words[ns++] = words[i];
    }
    return ns;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
//     //Input Method Defined
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

    int i,j;

    int t;
    cin>>t;
    while(t--)
    {
        used = false;
        forn(i,4)
            forn(j,4)
                mini[i][j] = 'Z';
        cin>>n;
        forn(i,n)cin>>words[i];
        n = preprocess();
        if(n>8)
        {
            cout<<"grid\nsnot\nposs\nible\n\n";
            continue;
        }

        grid st;
        formgrid(0,st);
        
        if(!used)
        {
            cout<<"grid\nsnot\nposs\nible\n\n";
            continue;
        }

        forn(i,4)
        {
            forn(j,4)
                if(mini[i][j]!='.')cout<<mini[i][j];
                else cout<<'A';
            cout<<endl;
        }
        cout<<endl;
    }

}

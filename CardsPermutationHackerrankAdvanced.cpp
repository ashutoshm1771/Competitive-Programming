//Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define up(i,j,n)        for (int i = j; i <= n; i++)
#define down(i,j,n)    for (int i = j; i >= n; i--)
#define cmax(a,b)        a = ((a) > (b) ? (a) : (b))
#define cmin(a,b)        a = ((a) < (b) ? (a) : (b))
#define cadd(a,b)        a = add (a, b)
#define cpop(a,b)        a = pop (a, b)
#define cmul(a,b)        a = mul (a, b)
#define pii            pair<int, int>
#define fi            first
#define se            second
#define SZ(x)        (int)x.size()
#define Auto(i,node)    for (int i = LINK[node]; i; i = e[i].next)

const int MAXN = 3e5 + 5;
const int oo = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int inv2 = (mod + 1) >> 1;

inline int add(int a, int b){a += b; return a >= mod ? a - mod : a;}
inline int pop(int a, int b){a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b){return 1LL * a * b % mod;}

int N, a[MAXN], fac[MAXN], pre[MAXN], cnt = 0, ans = 0, cur = 0, lex = 0;

namespace BIT{
    int c[MAXN];
    inline int lowbit(int i){return i & (-i);}
    inline void upd(int o, int v){
        for (int i = o + 1; i <= N; i += lowbit(i)) c[i] += v;
    }
    inline int calc(int o){
        int sum = 0;
        for (int i = o + 1; i >= 1; i -= lowbit(i)) sum += c[i];
        return sum;
    }
}using namespace BIT;

namespace solution{
    int cal2(int n){return mul(mul(n, pop(n, 1)), inv2);}
    void Prepare(){
        scanf("%d", &N);
        up (i, 1, N) scanf("%d", &a[i]);
        up (i, 1, N) {
            a[i]--;
            cnt += (a[i] == -1);
            if (a[i] >= 0) pre[a[i]] = 1;
        }
        fac[0] = 1;
        up (i, 1, N) fac[i] = mul(i, fac[i - 1]);
        up (i, 1, N - 1) pre[i] += pre[i - 1];
        lex = mul(mul(N, pop(N, 1)), inv2);
        up (i, 1, N) if (a[i] != -1) cpop(lex, a[i]);
    }
    void Solve(){
        up (i, 1, N) {
            if (a[i] != -1) {
                int sum = mul(fac[cnt] , a[i] - calc(a[i]));
                if (cnt >= 1) cpop(sum, mul(fac[cnt - 1], mul(cur, a[i] + 1 - pre[a[i]])));
                cmul(sum, fac[N - i]);
                cadd(ans, sum);
                upd(a[i], 1);
                cpop(lex, pop(N - 1 - a[i], pop(pre[N - 1], pre[a[i]])));
            }else {
                int sum = mul(lex, fac[cnt - 1]);
                if (cnt >= 2) cpop(sum, mul(fac[cnt - 2], mul(cur, cal2(cnt))));
                cmul(sum, fac[N - i]);
                cadd(ans, sum);
                cur++;
            }
        }
        printf("%d\n", add(ans, fac[cnt]));
    }
}

int main(){
    using namespace solution;
    Prepare();
    Solve();
    return 0;
}

// Author : Ashutosh Mishra

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

// Complete the substrings function below.
int substrings(string n) {
    long long int f=1;
    int res=0;
    for(int i=n.size()-1;i>=0;i--)
    {
        res=(res+(n[i]-'0')*f*(i+1))%MOD;
        f=(f*10+1) % MOD;
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}


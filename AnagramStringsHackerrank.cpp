#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int n=s.size();
    if(n&1) return -1;
    else
    {
        map<char,int> cnt1,cnt2;
        int c=0;
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            cnt1[s[i]]++;
            cnt2[s[j]]++;
        }
        string al="abcdefghijklmnopqrstuvwxyz";
        for(char x: al)
        {
            if(cnt1[x]>cnt2[x])
            c+=cnt1[x]-cnt2[x];
        }
        return c;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


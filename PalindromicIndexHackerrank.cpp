// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

bool checkPal(string s)
{
    int i=0,n=s.size(),j;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j]) return false;
    }
    return true;
}
// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            if(s[i+1]==s[n-i-1])
            {
            string a=s;
            a.erase(i,1);
            if(checkPal(a))
            return i;
            else goto jump;
            }
            else if(s[i]==s[n-2-i])
            jump:;
            string b=s;
            b.erase(n-i-1,1);
            if(checkPal(b))
            return n-i-1;
        }
    }
    return -1;
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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
bool isupper(char ch)
{
    if(ch>='A' && ch<='Z')
    return true;
    return false;
}

string pangrams(string s) {
    map<char,int> m;
    string al="abcdefghijklmnopqrstuvwxyz";

    for(int i=0;s[i];i++)
    {
        if(isupper(s[i]))
        s[i]+=32;
        m[s[i]]++;
    }
    for(int i=0;al[i];i++)
    {
        if(m[al[i]]==0)
        return "not pangram";
    }
    return "pangram";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


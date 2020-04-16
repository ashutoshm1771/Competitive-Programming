// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int c=0;
    string t="S",o="O";
    for(int i=0;i<s.size()-2;i=i+3)
    {
        if(s[i]!=t[0])
        c++;
        if(s[i+1]!=o[0])
        c++;
        if(s[i+2]!=t[0])
        c++;
    }
    return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int c=0,d=0;
    map<char,int> cnt1,cnt2;
    for(int i=0;i<s1.size();i++)
    cnt1[s1[i]]++;
    for(int i=0;i<s2.size();i++)
    cnt2[s2[i]]++;
    string al="abcdefghijklmnopqrstuvwxyz";
    for(char x: al)
    {
        c+=abs(cnt1[x]-cnt2[x]);
    }
    return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

bool isUpper(char s)
{
    if(s>='A' && s<='Z')return true;
    return false;
}
// Complete the camelcase function below.
int camelcase(string s) {
    int c=1;
    for(char x: s)
    {
        if(isUpper(x))
        c++;
    }
    return c;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


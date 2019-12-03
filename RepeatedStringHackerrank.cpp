#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long c=0,ca=0;
    long int extra=n%s.size();
    for(int i=0;i<extra;i++)
    if(s[i]=='a') ca++;
    for(char x: s)
    if(x=='a')c++;
    long int tot=n/s.size();
    long int tca=tot*c + ca;
    return tca;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}


// Author : Ashutosh Mishra


#include <bits/stdc++.h>

using namespace std;

//Boolean functions
bool isAlpha(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        return true;
    else
    return false;
}
bool isLower(char c)
{
    if(c>='a' && c<='z')
    return true;
    return false;
}

string caesarCipher(string s, int k) {
    
    for(int i=0;s[i];i++)
    {
        if(isAlpha(s[i]))
        {
            if(isLower(s[i]))
                s[i]=(s[i]+k-97)%26+97;
            else
                s[i]=(s[i]+k-65)%26+65;
        }
    }
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}


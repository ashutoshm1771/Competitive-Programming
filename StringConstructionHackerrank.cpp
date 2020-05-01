// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
    string t="";
    int c=0;
    for(int i=0;i<s.size();)
    {
        size_t f=t.find(s[i]);
        if(f==string::npos)
        {
            t=t+s[i];
            c++;
            i++;
        }
        else
        {
            while(t[f]==s[i])
            {
                i++;
                f++;
            }
        }
    }
    return c;
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

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


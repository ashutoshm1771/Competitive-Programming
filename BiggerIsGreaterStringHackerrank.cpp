// Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;

// Complete the biggerIsGreater function below.
bool isAlpha(char c)
{
    if(c>='a' && c<='z') return true;
    return false;
}
string biggerIsGreater(string w) {
    int c=0;
    for(int i=w.size()-2;i>=0;i--)
    {
        for(int j=1;j<=26;j++)
        {
            if(isAlpha(w[i]+j))
            {
                size_t f=w.find(w[i]+j,i+1);
                if(f!=string::npos) 
                {
                    swap(w[i],w[f]);
                    sort(w.begin()+i+1,w.end());
                    c++;
                    break;
                }
            }
        }
        if(c>0) break; 
    }
    if(c==0) return "no answer";
    else return w;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


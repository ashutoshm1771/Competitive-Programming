#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {
    if(n%3==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<5;
        }
        cout<<endl;
        return;
    }
    if((n-5)<0)
        {
            if(n%3==0)
            {
                for(int j=0;j<n;j++)
                cout<<5;
                cout<<endl;
                return;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    for(int i=5;i<=n;i+=5)
    {
        if((n-i)%3==0)
        {
            for(int j=0;j<n-i;j++)
            cout<<5;
            for(int j=n-i;j<n;j++)
            cout<<3;
            cout<<endl;
            return;
        }
        
    }
    cout<<"-1"<<endl;
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


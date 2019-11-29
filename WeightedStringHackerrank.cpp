#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string> v;
    vector<bool> a(10e7); int j,sum;
    for(int i=0;i<s.size();)
    {
        sum=0;
        for(j=0;j<s.size()-1,s[i]==s[j+i];j++)
        {
            sum+=s[i+j]-96;
            a[sum]=true;
        }
        i=i+j;
    }
    for(int x: queries)
    {
        if(a[x]) v.push_back("Yes");
        else v.push_back("No");
    }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}


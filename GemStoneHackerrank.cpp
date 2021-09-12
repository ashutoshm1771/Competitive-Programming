// Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    int j=0,i=1,c=0;
    string a;
    for(int i=0;i<arr[0].size();i++)
    {
        size_t f=a.find(arr[0][i]);
        if(f==string::npos)
        a=a+arr[0][i];
    }
    // for(int i=0;i<a.size();i++)
    // cout<<a[i]<<" ";
    i=1;
    while(j<a.size())
    {
        while(i<arr.size())
        {
            size_t f=arr[i].find(a[j]);
            if(f!=string::npos)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i==arr.size())
        c++;
        i=1;
        j++;
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}


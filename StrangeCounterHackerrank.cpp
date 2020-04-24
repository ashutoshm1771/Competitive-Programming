// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long total=3,n=3;
    while(t>total)
    {
        n=n*2;
        total+=n;
    }
    long time=1;
    while(t!=total)
    {
        total--;
        time++;
    }
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}


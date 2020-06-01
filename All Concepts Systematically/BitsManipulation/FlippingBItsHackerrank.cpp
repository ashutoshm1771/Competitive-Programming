// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the flippingBits function below.
long flippingBits(long n) {
    bitset<32> bset(n);
    for(int i=0;i<bset.size();i++)
    {
        bset.flip(i);
    }
    return bset.to_ulong();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


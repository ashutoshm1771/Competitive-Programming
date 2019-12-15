#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.

//int maximizingXor(int l, int r) {
//    int m=-INT_MAX;
//    for(int i=l;i<=r;i++)
//    {
//        for(int j=l;j<=r;j++)
//        m=max(m,i^j);
//    }
//    return m;
//}


int maximizingXor(int l, int r) {
	int x = l ^ r;
		int max = 0;
		while(x > 0)
		{
			max <<= 1;
			max |= 1;
			x >>= 1;
		}
        return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}


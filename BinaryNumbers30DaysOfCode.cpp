//Author : Ashutosh Mishra

//Usage of Bitset STL

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,cp=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    bitset<64> bset(n);
    bool flag=true;
    for(int i=0;i<bset.size();)
    {
        c=0;
        while(bset[i]==1){
            c++;
            i++;
        }
        cp=max(c,cp);
        i++;
        
    }
    cout<<cp;
    return 0;
}


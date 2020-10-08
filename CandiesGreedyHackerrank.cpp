// Author : Ashutosh Mishra
// Greedy Algorithm

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r(n); 
    vector<int> c(n); 
    int numcandies=1; 
    c[0]=1;
    cin >> r[0];
    for (int i=1;i<n;i++) {
        cin >> r[i];
        if (r[i]>r[i-1]) numcandies++;
        else if (r[i]<=r[i-1]) numcandies=1;
        c[i]=numcandies;
    }

    numcandies=1;
    long total=c[n-1];
    for (int i=n-2;i>=0;i--) {
        if (r[i]>r[i+1]) numcandies++;
        else if (r[i]<=r[i+1]) numcandies=1;
        c[i]=(numcandies>c[i]?numcandies:c[i]); 
        total+=c[i];
    }    
    
    cout << total;
    return 0;
}

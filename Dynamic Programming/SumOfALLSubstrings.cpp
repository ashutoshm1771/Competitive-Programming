/*
  Algo : Dynamic programming
  Here s -->    is the numeric string
  The generalised formula --->        (sumofsubs[i] = (i+1)(nums[i] + 10 * sumofsubs[i-1] )
  Reference ---->      https://www.geeksforgeeks.org/sum-of-all-substrings-of-a-string-representing-a-number/
  Practise Problem : https://www.hackerrank.com/challenges/sam-and-substrings/problem
  Input : "1234"
  Output : 1670
/*
#include <bits/stdc++.h>

using namespace std;

void getAns(string s) {
    int l = s.length();
    int sumofsubs[l+1];
    sumofsubs[0] = s[0]-'0';
    int ans=0;
    for(int i=1; i<l; i++) {
        int temp = s[i]-'0';
        sumofsubs[i] = (i+1)*temp+10*sumofsubs[i-1];
        ans += sumofsubs[i];
    }
    cout << ans+sumofsubs[0];
}
int main() {
    string s;
    cin >> s;
    getAns(s);
    return 0;
}

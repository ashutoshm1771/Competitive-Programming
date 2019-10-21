#include <bits/stdc++.h>

using namespace std;

int findMaxLen(string s) {
    int len = s.length();
    int ans = 0;
    stack<int> stk;
    stk.push(-1);
    for ( int i = 0; i < len; i++ ) {
        if(s[i] == '(') {
                stk.push(i);
        }
        else {
            if(!stk.empty()) {
                stk.pop();
            }
            if(!stk.empty()) {
                ans = max(ans, i-stk.top());
            }
            else {
                stk.push(i);
            }
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << findMaxLen(s);
    return 0;
}

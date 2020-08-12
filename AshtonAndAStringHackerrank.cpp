// Author - Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      string s;
      int k;
      cin >> s >> k;
      
      set <string> substrTable;
      int count=0;
      for (char c='a';c<='z';c++) {
        // populate substr table based on char c
        substrTable.clear(); 
        for (int i=0;i<s.length();i++) {
          if (s[i]==c) substrTable.insert(s.substr(i,s.length()-i));
        }  
        if (substrTable.empty()) continue; // skip to next char if no c
            
        // check if k falls into substrings of char c
        auto it=substrTable.begin();
        for (;it!=substrTable.end();it++) {
          int l;
          for (l=1;l<=(*it).length();l++) {
            // skip duplicates for non-1st substrings
            if (it!=substrTable.begin()) {
              auto it0=substrTable.begin();
              for (;it0!=it;it0++) {
                if ((*it0).substr(0,l)==(*it).substr(0,l)) break;
              }
              if (it0!=it) continue;
            }    
                    
            count+=l;
            if (count>=k) { // kth char found
              cout << (*it)[l-(count-k)-1] << endl;
              break;
            }                
          }
          if (l<=(*it).length()) break; //goto next test case
        }    
        if (it!=substrTable.end()) break; // goto next test case
      }               
    }
    
    return 0;
}

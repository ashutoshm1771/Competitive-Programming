// Author : Ashutosh Mishra

// Suffix array construction in O(L log^2 L) time.  Routine for
// computing the length of the longest common prefix of any two
// suffixes in O(log L) time.
//
// INPUT:   string s
//
// OUTPUT:  array suffix[] such that suffix[i] = index (from 0 to L-1)
//          of substring s[i...L-1] in the list of sorted suffixes.
//          That is, if we take the inverse of the permutation suffix[],
//          we get the actual suffix array.
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include<cassert>
using namespace std;
struct SuffixArray {
 const int L;
 string s;
 vector<vector<int> > P;
 vector<pair<pair<int,int>,int> > M;
 SuffixArray(const string &s) : L(s.length()), s(s), P(1, vector<int>(L, 0)), M(L) {
   for (int i = 0; i < L; i++) P[0][i] = int(s[i]);
   for (int skip = 1, level = 1; skip < L; skip *= 2, level++) {
     P.push_back(vector<int>(L, 0));
     for (int i = 0; i < L; i++)
M[i] = make_pair(make_pair(P[level-1][i], i + skip < L ? P[level-1][i + skip] : -1000), i);
     sort(M.begin(), M.end());
     for (int i = 0; i < L; i++)
P[level][M[i].second] = (i > 0 && M[i].first == M[i-1].first) ? P[level][M[i-1].second] : i;
   }    
 }
 vector<int> GetSuffixArray() { return P.back(); }
 // returns the length of the longest common prefix of s[i...L-1] and s[j...L-1]
 int LongestCommonPrefix(int i, int j) {
   int len = 0;
   if (i == j) return L - i;
   for (int k = P.size() - 1; k >= 0 && i < L && j < L; k--) {
     if (P[k][i] == P[k][j]) {
i += 1 << k;
j += 1 << k;
len += 1 << k;
     }
   }
   return len;
 }
};
vector<int> hist;
int getMaxArea()
{
int n = hist.size();
   stack<int> s;
   int max_area = 0;
   int tp;
   int area_with_top;
   int i = 0;
   while (i < n)
   {
       if (s.empty() || hist[s.top()] <= hist[i])
           s.push(i++);
       else
       {
           tp = s.top();  // store the top index
           s.pop();  // pop the top
           area_with_top = hist[tp] * (s.empty()  ? i+1 : i - s.top() );
           if (max_area < area_with_top)
               max_area = area_with_top;
       }
   }
   while (s.empty() == false)
   {
       tp = s.top();
       s.pop();
       area_with_top = hist[tp] * (s.empty() ? i+1 : i - s.top() );
       if (max_area < area_with_top)
           max_area = area_with_top;
   }
   return max_area;
}
int main()
{
string str;
cin>>str;
assert(str.length() <= 500000);
SuffixArray suffix(str);
vector<int> v = suffix.GetSuffixArray();
int a[str.length()];
for (int i = 0; i < v.size(); i++)
a[v[i]] = i;
//  for(int i=0 ; i< str.length() ; i++)
// cout<<a[i]<<" ";
//  cout << endl;
for(int i=0 ; i< str.length() - 1 ; i++)
{
hist.push_back(suffix.LongestCommonPrefix(a[i], a[i+1]));
}
// for(int i=0 ; i< str.length() -1 ; i++)
// cout<<hist[i]<<" ";
// cout << endl;
int temp = getMaxArea();
if(temp > str.length() )
cout<<temp<<endl;
else
cout<<str.length()<<endl;
return 0;
}

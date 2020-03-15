// This solution wouldn't get accepted. Just a clever, but brute force approach. Less efficient than the other solution.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxArray(int ar[],long int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<ar[i])
            max=ar[i];
    }
    return max;
}
int main() {
    long int n;
    cin>>n;
    int ar[n];
    for(long int i=0;i<n;i++){
        cin>>ar[i];   
    }
    long int k;
    cin>>k;
    int i=0;
    while(k!=0){
        int num;
        cin>>num;
        ar[i]=num;
        int x=maxArray(ar,n);
        cout<<x;
        k--;
        i++;
        i=i%n;
    }
    return 0;
}

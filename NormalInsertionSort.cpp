#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i];j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}


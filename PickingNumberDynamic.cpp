// Author : Ashutosh Mishra

#include <iostream>
using namespace std;

int n,a[100],b[200];
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int k= 2*i;
            if(a[i]==a[j]||a[i]==a[j]+1)
                b[k]++;
            if(a[i]==a[j]||a[i]==a[j]-1)
                b[k+1]++;
        }
    }
    for(int i=0;i<200;i++)
        if(b[i]>b[0])
            b[0]=b[i];
    cout<<b[0];
    return 0;
}

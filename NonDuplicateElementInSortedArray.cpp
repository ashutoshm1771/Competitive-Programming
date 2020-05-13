// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
using namespace std;
// O(logN) time and O(1) space
int singleNonDuplicate(vector<int>& nums) {
	int start=0, end = nums.size()-1, mid;
	while( start < end ) {
		mid = start + (end-start)/2;
		if( nums[mid] == nums[mid ^ 1] )
			start = mid + 1;
		else
			end = mid;
	}
	return nums[start];
}

/*
int singleNonDuplicate(vector<int>& nums) {
    int x=0;
    for(auto i: nums)
        x^=i;
    return x;
}
*/
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<singleNonDuplicate(v);
    return 0;
}

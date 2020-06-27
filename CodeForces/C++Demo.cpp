// Author : Ashutosh Mishra

#include<iostream>
using namespace std;

void print(char c, int times) {
	while(times--) cout << c;
}
void go(int n) {
	for(int i = 0; i < n; i++) {
		print(' ', n-i);
		print('*', 2*i+1);
		print('\n', 1);
	}
}
int main() {
	int sum = 0;
	for(int i=0; i <1000; i++) {
		sum += i*i;
	}
	cout << sum << endl;

	go(10);
	return 0;
}

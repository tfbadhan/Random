#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int a[N];
int n, k;

bool check(int dig) {
	int ele = a[dig];
	if( k <= ele) return 1;
	else return 0;
}

void binarySearch(int lo, int hi) {
	while(lo < hi) {
		int mid = ( lo + hi ) / 2;
		if( check( mid ) ) hi = mid;
		else lo = mid + 1;
	}
	if( a[lo] == k ) cout << "index: " << lo + 1 << endl;
	else cout << "not found" << endl;
}
int main() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i]; 
	
	binarySearch(0, n);
	return 0;
}

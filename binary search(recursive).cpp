#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int l, int r, int x) {
	if( r >= l) {
		int mid = l + (r - l) / 2;
		if( a[mid] == x ) return mid;
		if( a[mid] > x) return binarySearch(a, l, mid - 1, x);
		return binarySearch(a, mid + 1, r, x);
	}
	return -1;
}
int main() {
	int n, x;
	cin >> n >> x;
	int a[n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	int result = binarySearch(a, 0, n - 1, x);
	(result == -1) ? cout << "not found" << endl : cout << "index number: " << result + 1 << endl;
	return 0;
}

//    https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k; 
	cin >> n >> k;
	vector<int> a(n);

	for(int i = 0; i < n; i++) 
		cin >> a[i];

	for(int i = 0; i < k; i++) {
		int x;
		cin >> x;

		int l = -1, r = n;
		while(r > l + 1) {
			int m = (l + r) / 2;
			if(a[m] <= x) 
				l = m;
			else
				r = m;
		}
		cout << l + 1 << "\n";
	}
}

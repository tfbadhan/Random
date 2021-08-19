#include <bits/stdc++.h>
using namespace std;

int n, k, num[25];

void combination(int at, int last) {
	if( at == k + 1 ) {
		for(int i = 1; i <= k; i++) cout << num[i] << " ";
		cout << endl;
		return;
	}
	for(int i = last + 1; i <= n - k + at; i++) {
		num[at] = i;
		combination(at + 1, i);
	}
}

int main() {
	cin >> n >> k;
	combination(1, 0);
	return 0;
}

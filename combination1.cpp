#include <bits/stdc++.h>
using namespace std;

int n, k, num[25];

void combination(int at, int left) {
	if( left > n - at + 1) return ;
	if( at == n + 1) {
		for(int i = 1; i <= k; i++) cout << num[i] << " ";
		cout <<endl;
		return;
	}
	if(left) {
		num[ k- left + 1] = at;
		combination(at + 1, left - 1);
	}
	combination(at + 1, left);
}

int main() {
	cin >> n >> k;
	combination(1, k);
	return 0;
}

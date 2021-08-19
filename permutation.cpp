#include <bits/stdc++.h>
using namespace std;

int used [25], num[25];

void permutation(int at, int n) {
	if( at == n + 1) {
		for( int i = 1; i <= n; i++) cout << num[i] << " ";
		cout <<endl;
		return;
	}
	for(int i = 1; i <=n; i++) if( !used[i]) {
		used[i] = 1;
		num[at] = i;
		permutation(at + 1, n);
		used[i] = 0;
	}
}

int main() {
	int n;
	cin >> n;
	permutation(1, n);
	return 0;
}

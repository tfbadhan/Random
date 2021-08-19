#include <bits/stdc++.h>
using namespace std;

void display(int *a, int n) {
	for( int i = 0; i < n; i++) cout << a[i] << " ";
	cout <<endl;
}

void findPermutation(int *a, int n) {
	sort(a, a + n);
	do 	display(a, n);
	while( next_permutation(a, a + n) );
}

int main() {
	int n;
	cin >> n;
	int a[n + 1];
	for( int i = 0; i < n; i++ ) cin >> a[i];
	findPermutation(a, n);
	return 0;
}

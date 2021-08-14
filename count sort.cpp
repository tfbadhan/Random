#include <bits/stdc++.h>
using namespace std;

void display(int *a, int size) {
	for(int i = 1; i <= size; i++) cout << a[i] << " ";
	cout << endl;
}

int getMax(int a[], int size) {
	int max = a[1];
	for(int i = 2; i <=size; i++) {
		if(a[i] > max) max = a[i];
	}
	return max; 
}

void count_sort(int *a, int size) {
	int output[size + 1];
	int max = getMax(a, size);
	int count[max + 1];
	
	for(int i = 0; i <= max; i++) count[i] = 0;
	for(int i = 1; i <= size; i++) count[a[i]]++;
	for(int i = 1; i <= max; i++) count[i] += count[i - 1];
	for(int i = size; i>=1; i--) {
		output[count[a[i]]] = a[i];
		count[a[i]] -= 1;
	}
	for(int i = 1; i<= size; i++) a[i] = output[i];
}

int main() {
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <=n; i++) cin >> a[i];
	count_sort(a, n);
	
	display(a, n);
}

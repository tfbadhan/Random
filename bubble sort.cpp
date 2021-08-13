#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void display(int *a, int size) {
	for(int i = 0; i< size; i++) cout << a[i] << " ";
	cout << endl;
}

void bubble_sort(int *a, int size) {
	int i, j;
	for(i = 0; i< size - 1; i++) {
		for(j = 0; j < size - i -1; j++) {
			if(a[j] > a[j+1]) swap(a[j], a[j + 1]);
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	bubble_sort(a, n);
	display(a, n);
}

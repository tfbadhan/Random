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

void selectionSort(int *a, int size) {
	int i, j, imin;
	for(i = 0; i < size - 1; i++) {
		imin = i;
		for(j = i + 1; j < size; j++) {
			if(a[j] < a[imin]) imin = j;
			swap(a[i], a[imin]);
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	selectionSort(a, n);
	display(a, n);
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, l;
	char s[123456];
	cin >> s;
	l = strlen(s);
	
	for(i = 0; i < l; i++) {
		if(s[i] == '.') {
			cout << 0 ;
		}
		if((s[i] == '-') && (s[i+1] == '.')) {
			cout << 1 ;
			i++;
		}
		if((s[i] == '-') && (s[i+1] == '-')) {
			cout << 2 ;
			i++;
		}
	}
	cout << endl;
}

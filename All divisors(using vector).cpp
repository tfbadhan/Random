#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	int n; cin >> n;
	vector<int> divs;
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			divs.push_back(i);
			if(i != n / i) divs.push_back(n / i);
		} 
	}
	sort(divs.begin(), divs.end());
	for(auto x: divs) cout << x << " ";
}

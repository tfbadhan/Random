//    https://codeforces.com/problemset/problem/63/A


#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n; 
	cin >> n;
	
	string name, status;
	vector<string> r, wc, m, c;
	while(n--) {
		cin >> name >> status;
		if(status == "rat") r.push_back(name);
		else if(status == "woman" || status == "child") wc.push_back(name);
		else if(status == "man") m.push_back(name);
		else c.push_back(name);
	}
	for(auto one: r) cout << one << endl;
	for(auto one: wc) cout << one << endl;
	for(auto one: m) cout << one << endl;
	for(auto one: c) cout << one << endl;
}

#include <bits/stdc++.h>
using namespace std;

int TrailingZero(int n)
{
	if(n<0) return -1;
	
	int cnt=0;
	for(int i=5; n/i>=1; i*=5) cnt+=n/i;
	return cnt;
}

int main()
{
	int n;
	cin>>n;
	cout<<TrailingZero(n)<<endl;
	return 0;
}

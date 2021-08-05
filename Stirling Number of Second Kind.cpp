//O(2^n)


#include <bits/stdc++.h>
using namespace std;

int stirling_2nd(int n, int k)
{
	if(n==0 || k==0 || k>n) return 0;
	if(k==1 || k==n) return 1;
	
	return k*stirling_2nd(n-1, k) + stirling_2nd(n-1, k-1);
}

int main()
{
	int n, k;
	cin>>n>>k;
	cout<<stirling_2nd(n, k)<<endl;
	return 0;
}

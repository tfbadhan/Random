#include <bits/stdc++.h>
using namespace std;

int nCrBinomial(int n, int r)
{
	if(r>n) return 0;
	if(r==0 || r==n) return 1;
	
	return nCrBinomial(n-1, r-1) + nCrBinomial (n-1, r);
}

int main()
{
	int n, r;
	cin>>n>>r;
	cout<<nCrBinomial(n, r)<<endl;
	return 0;
}

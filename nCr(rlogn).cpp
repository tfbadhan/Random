//O(rlogn)



#include <bits/stdc++.h>
using namespace std;

long long int nCr(int n, int r)
{
	long long p=1, k=1;
	
	if(n-r<r) r=n-r;
	
	if(r!=0)
	{
		while(r)
		{
			p*=n;
			k*=r;
			
			long long m=__gcd(p, k);
			p/=m;
			k/=m;
			n--;
			r--;
		}
	}
	else p=1;
	
	return p;
}

int main()
{
	int n, r;
	cin>>n>>r;
	cout<<nCr(n, r)<<endl;
	return 0;
}

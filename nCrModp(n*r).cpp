//O(n*r)

#include <bits/stdc++.h>
using namespace std;

int nCrModp(int n, int r, int p)
{
	if(r>n-r) r=n-r;
	
	int c[r+1];
	memset(c, 0, sizeof(c));
	c[0]=1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=min(i, r); j>0; j--)
			{
				c[j]=(c[j]+c[j-1])%p;
			}
	}
	return c[r];
}

int main()
{
	int n, r, p;
	cin>>n>>r>>p;
	cout<<nCrModp(n, r, p)<<endl;
	return 0;
}

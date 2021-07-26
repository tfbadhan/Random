// Probably O(sqrt(n)) time

#include <bits/stdc++.h>
using namespace std;


void divCount(int n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	
	int tot=1;
	for(int p=2; p*p<n; p++)
	{
		if(prime[p]==true)
		{
			for(int i=p*2; i<n; i+=p)
			{
				prime[i]=false;
			}
		}
		for(int p=2; p<=n; p++)
		{
			if(prime[p])
			{
				int cnt=0;
				if(n%p==0)
				{
					while(n%p==0)
					{
						n=n/p;
						cnt++;
					}
					tot=tot*(cnt+1);
				}
			}
		}
	}
	cout<<tot<<endl;
}
int main()
{
	int n;
	cin>>n;
	divCount(n);
	return 0;
}

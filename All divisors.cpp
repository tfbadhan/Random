#include <bits/stdc++.h>
using namespace std;


void Divisors(int n)
{
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				cout<<i<<" "; //printf("%d ", i)
			}
			else 
			{
				cout<<i<<" "<<n/i<<" "; //printf("%d %d ", i, n/i)
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	Divisors(n);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;


void primeFactor(int n)
{
	while(n%2==0)
	{
		cout<<2<<" ";
		n/=2;
	}
	for(int i=3; i<=sqrt(n); i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>2) cout<<n<<" ";
}


int main()
{
	int n;
	cin>>n;
	primeFactor(n);
	return 0;
}
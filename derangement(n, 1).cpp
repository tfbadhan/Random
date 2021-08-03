//O(n)
//space optimized

#include <bits/stdc++.h>
using namespace std;

int derangement(int n)
{
	if(n==1 || n==2) return n-1;
	
	int a=0;
	int b=1;
	
	for(int i=3; i<=n; i++)
	{
		int cur=(i-1)*(a+b);
		a=b;
		b=cur;
	}
	return b;
}

int main()
{
	int n;
	cin>>n;
	cout<<derangement(n)<<endl;
	return 0;
}

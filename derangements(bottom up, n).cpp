//O(n)


#include <bits/stdc++.h>
using namespace std;

int derangement(int n)
{
	int der[n+1]={0};
	
	der[1]=0;
	der[2]=1;
	
	for(int i=3; i<=n; i++)
	{
		der[i]=(i-1)*(der[i-1]+der[i-2]);
	}
	return der[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<derangement(n)<<endl;
	return 0;
}

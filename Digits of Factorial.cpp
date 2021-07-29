#include <bits/stdc++.h>
using namespace std;

int factDigit(int n)
{
	if(n<0) return -1;
	if(n<=1) return 1;
	
	double digit=0;
	for(int i=2; i<=n; i++)
	{
		digit+=log10(i);
	}
	return floor(digit)+1;
}

int main()
{
	int n; 
	cin>>n;
	cout<<factDigit(n)<<endl;
	return 0;
}

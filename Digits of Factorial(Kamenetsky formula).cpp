#include <bits/stdc++.h>
using namespace std;

int factDigit(int n)
{
	if(n<0) return -1;
	if(n<=1) return 1;
	
	double d=((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0));
	return floor(d)+1;
}

int main()
{
	int n;
	cin>>n;
	cout<<factDigit(n)<<endl;
	return 0;
}

// inclusion exclusion 

#include <bits/stdc++.h>
using namespace std;

int countdivisors(int a, int b, int n)
{
	int cnt1 = n / a;
	int cnt2 = n / b;
	int cnt3 = (n / ( a * b ) );
	
	return cnt1 + cnt2 - cnt3;
}

int main()
{
	int a, b, n;
	cin>>a>>b>>n;
	cout<<countdivisors(a, b, n)<<endl;
	return 0;
}

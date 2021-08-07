// O(log|n|)


#include <bits/stdc++.h>
using namespace std;

float power(float x, int n)
{
	float temp;
	if(n == 0) return 1;
	temp = power(x, n / 2);
	if (n % 2 == 0) return temp * temp;
	
	else
	{
		if(n > 0)	return x * temp * temp;
		else	return (temp * temp) / x;
	}
}

int main()
{
	int x, n;
	cin>>x>>n;
	cout<<power(x, n)<<endl;
	return 0;
}

//O(sqrt(n)) time

#include <bits/stdc++.h>
using namespace std;

void countDivisors(int n)
{
	int cnt=0;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				cnt++;
			}
			else 
			{
				cnt=cnt+2;
			}
		}
	}
	cout<<cnt<<endl;
}


int main()
{
	int n;
	cin>>n;
	countDivisors(n);
	return 0;
}

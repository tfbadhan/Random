//    https://www.facebook.com/codingcompetitions/hacker-cup/2011/qualification-round/problems/A


#include <bits/stdc++.h>
using namespace std;

int isPerfectSquare(int n)
{
	int x = int(sqrt(n));
	
	if(x * x == n) return 1;
	
	return 0;
}

int findWays(int x)
{
	int result; 
	int count = 0;
	
	if(isPerfectSquare(x)) count++;
	
	for(int i = 1; i < x; i++)
	{
		for(int j = 1; j<x; j++)
		{
			if(i * i > x) goto end;
			
			if(i > j) continue;
			
			result = (i * i) + (j * j);
			if(result == x) count++;
			else if(result > x) break;
		}
	}
	
	end:
	return count;
}

int main()
{
	int n, x;
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	{
		cin>>x;
		cout<<"Case #"<<i<<": "<<findWays(x)<<endl;
	}
	return 0;
}

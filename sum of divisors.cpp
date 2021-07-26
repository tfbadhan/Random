#include <bits/stdc++.h>
using namespace std;


int sumDiv(int n)
{
	map<int, int> mp;
	for(int j=2; j<=sqrt(n); j++)
	{
		int cnt=0; 
		while(n%j==0)
		{
			n/=j;
			cnt++;
		}
		if(cnt)
		{
			mp[j]=cnt;
		}
	}
	
	if(n!=1) mp[n]=1;
	
	int ans=1;
	for(auto it: mp)
	{
		int pw=1; 
		int sum=0;
		
		for(int i=it.second+1; i>=1; i--)
		{
			sum+=(i*pw);
			pw*=it.first;
		}
		ans*=sum;
	}
	return ans;
}


int main()
{
	int n;
	cin>>n;
	cout<<sumDiv(n)<<endl;
	return 0;
}

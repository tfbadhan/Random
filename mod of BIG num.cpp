#include <bits/stdc++.h>
using namespace std;

int modBigNum(string s, int n)
{
	int res=0; 
	for(int i=0; i<s.length(); i++)
	{
		res=(res*10+ (int)s[i]-'0')%n;
	}
	return res;
}

int main()
{
	string s;
	int n;
	cin>>s;
	cin>>n;
	cout<<modBigNum(s, n);
	return 0;
}

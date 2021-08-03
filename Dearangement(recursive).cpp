#include <bits/stdc++.h>
using namespace std;

int Dearangement(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	
	return (n-1)*(Dearangement(n-1)+Dearangement(n-2));
}
int main()
{
	int n;
	cin>>n;
	cout<<Dearangement(n)<<endl;
	return 0;
}

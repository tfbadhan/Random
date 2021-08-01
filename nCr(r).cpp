//O(r)

#include <bits/stdc++.h>
using namespace std;

long long int nCr(int n, int r)
{
	int res=1;
	
	if(r>n-r) r=n-r;
	
	for(int i=0; i<r; i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, r;
    cin>>n>>r;
    cout<<nCr(n, r)<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MX 100

int lookup[MX];

void initilize()
{
	int i;
	for(int i=0; i<MX; i++) lookup[i]=NIL;
}

int fibMemorize(int n)
{
	if(lookup[n]==NIL)
	{
		if(n<=1) lookup[n]=n;
		else lookup[n]=fibMemorize(n-1) + fibMemorize(n-2);
	}
	return lookup[n];
}

int main()
{
	int n;
	cin>>n;
	initilize();
	cout<<fibMemorize(n)<<endl;
	return 0;
}

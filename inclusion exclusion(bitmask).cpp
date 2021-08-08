// O(n * 2^n)


#include <bits/stdc++.h>
using namespace std;

int count(int a[], int m, int n)
{
	int odd =0, even= 0;
	int counter, i, j, p=1;
	int pow_set_size = (1 << n);
	
	for(counter = 1; counter < pow_set_size; counter++)
	{
		p=1;
		for(j = 0; j < n; j++)
		{
			if(counter & (1 << j))
			{
				p *= a[j];
			}
		}
		if(__builtin_popcount(counter) & 1) odd += (m / p);
		else even += (m / p);
	}
	return odd - even;
}

int main()
{
	int a[] = {2, 3, 5, 7};
	int m = 100;
	int n = sizeof(a) / sizeof(a[0]);
	cout<<count(a, m, n)<<endl;
	return 0;
}

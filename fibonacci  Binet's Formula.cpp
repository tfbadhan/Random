//O(logn)
//http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html


#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

int main()
{
	int n;
	cin>>n;
	cout<< fib(n) <<endl;
	return 0;
}

//Problem #1 : Multiples of 3 and 5
#include <iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;

	for(long ti=0; ti<t; ti++)
	{
		long n;
		cin>>n;

		long temp = n-1;
		long result = 0;

		long s0, s1, s2, sum3, sum5, sum15;
		s0 = (long)((n-1)/3);
		s1 = (long)((n-1)/5);
		s2 = (long)((n-1)/15);

		sum3 = (3 * s0 * (s0+1))/2;
		sum5 = (5 * s1 * (s1+1))/2;
		sum15 = (15 * s2 * (s2+1))/2;

		result = sum3 + sum5 - sum15;

		cout<<result<<endl;
	}

	return 0;
}

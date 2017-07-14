//Problem #21
#include <iostream>
#include <cmath>

using namespace std;
long sumOfDivisors(long);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		long result = 0;

		//Start from 200
		for(int i=200; ; i++)
		{
			long a = sumOfDivisors(i);
			long b = sumOfDivisors(a);

			if(b == i && a != i)
			{
				if(a <= n)
				{
					result += a;
				}
				else
				{
					break;
				}
				// cout<<"( "<<b<<", "<<a<<" )"<<endl;
			}
		}

		cout<<result<<endl;
	}
	return 0;
}

long sumOfDivisors(long n)
{
	long temp = n;
	long sum = 1;
	int factor = 2;

	while(factor <= n)
	{
		int count = 0;
		while(n % factor == 0)
		{
			n /= factor;
			count++;
		}

		int p = 1;
		for(int i=1; i<=count; i++)
		{
			// cout<<"Adding to sum " <<pow(factor, i)<<endl;
			// sum = sum + pow(factor, i);
			p += pow(factor, i);
		}

		sum *= p;
		factor++;

	}

	return sum - temp;
}
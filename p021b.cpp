//Problem #21
#include <iostream>
using namespace std;
long sumOfDivisors(long);

int main()
{
	int n;
	cin>>n;

	//Start from 200
	for(int i=200; i<=n; i++)
	{
		long a = sumOfDivisors(i);
		long b = sumOfDivisors(a);

		if(b == i && a != i)
		{
			cout<<"( "<<b<<", "<<a<<" )"<<endl;
		}
	}

	return 0;
}

long sumOfDivisors(long n)
{
	long sum = 1;
	for(int i=2; i<n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
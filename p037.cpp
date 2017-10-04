#include <iostream>
#include <vector>
using namespace std;

long reverse(long);

int main()
{
	int n;
	cin>>n;

	vector<bool> primes(n+1, true);

	//Sieve of Eratosthenes
	for(long i=2; i<=n; i++)
	{
		if(primes[i])
		{
			for(long p=2*i; p<=n; p+=i)
			{
				primes[p] = false;
			}
		}
	}

	long sum = 0;

	for(long i=10; i<n; i++)
	{
		long temp = i;
		bool left, right;
		left = right = true;

		//Truncate right
		while(temp > 0)
		{
			if(!primes[temp])
			{
				right = false;
			}
			temp /= 10;
		}

		//Truncate right
		temp = reverse(i);
		while(temp > 0)
		{
			if(!primes[temp])
			{
				left = false;
			}
			temp /= 10;
		}

		if(left && right)
		{
			cout<<i<<endl;
			sum += i;
		}
	}

	//Print final result
	cout<<sum<<endl;
	return 0;
}

long reverse(long n)
{
	long result = 0;
	int temp;

	while(n > 0)
	{
		temp = n % 10;
		result = result * 10 + temp;
		n /= 10;
	}
	return result;
}
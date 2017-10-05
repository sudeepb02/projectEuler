#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long reverse(long);
int getdigits(long);

int main()
{
	int n;
	cin>>n;

	vector<bool> primes(n+1, true);

	//Sieve of Eratosthenes
	primes[1] = false;		
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

		if(primes[i])
		{
			//Truncate right
			while(temp > 0)
			{
				temp /= 10;
				if(!primes[temp])
				{
					right = false;
				}

			}

			//Truncate left
			int dig = getdigits(i);
			while(dig > 0)
			{
				dig--;
				temp = i % static_cast<int>(pow(10, dig));
				if(!primes[temp])
				{
					left = false;
				}
			}

			if(right && left)
			{
				// cout<<i<<endl;
				sum += i;
			}
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

int getdigits(long n)
{
	int dig = 0;
	while(n > 0)
	{
		dig++;
		n /= 10;
	}

	return dig;
}
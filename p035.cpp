#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getNumberOfDigits(long);
long rotate(long);

int main()
{
	long n, limit, finalSum;
	cin>>n;

	//Sieve of Eratothenes
	limit = n;
	finalSum = 0;
	vector<bool> primes(limit, true);
	for(long i=2; i<=limit; i++)
	{
		if(primes[i])
		{
			for(long p=2*i; p<=limit; p+=i)
			{
				primes[p] = false;
			}
		}
	}

	int nodigits;
	long temp;

	for(long j=2; j<=n; j++)
	{
		if(primes[j])
		{
			bool flag = true;
			nodigits = getNumberOfDigits(j);
			while(nodigits > 0)
			{
				temp = rotate(j);
				if(!primes[temp])
				{
					flag = false;
				}
				nodigits--;
			}
			if(flag)
			{
				finalSum += j;
				cout<<j<<endl;
			}
		}
	}
	cout<<finalSum;

	return 0;
	
}

long rotate(long number)
{
	int dig = number % 10;
	number /= 10;
	int nodigits = getNumberOfDigits(number);

	long result;

	result = dig * pow(10, nodigits);
	result += number;
	return result;
}

int getNumberOfDigits(long number)
{
	int result = 0;
	while(number > 0)
	{
		number /= 10;
		result++;
	}
	return result;
}
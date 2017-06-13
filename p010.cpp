// Problem #10 : Summation of Primes

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{

		int n;
		cin>>n;

		vector<bool> primes(n+1, true);

		for(long p=2; p<=n; p++)
		{
			if(primes[p] == true)
			{
				for(long i=p*2; i<=n; i+=p)
				{
					primes[i] = false;
				}
			}
		}

		long sum = 0;

		for(long si=2; si<=n; si++)
		{
			if(primes[si] == true)
			{
				sum = sum + si;
			}
		}

		cout<<sum<<endl;
	}
	return 0;
}
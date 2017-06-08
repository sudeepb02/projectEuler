// Problem #7 : 1001st Prime number

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int ti=0; ti<t; ti++)
	{
		long nth;
		cin>>nth;

		vector<long> pnumbers;
		long limit = nth*11 + 1;

		//Sieve of Eratosthenes
		vector<bool> prime(limit+1, true);

		// bool prime[limit+1];
		// memset(prime, true, sizeof(prime));

		for(long p=2; p<=limit; p++)
		{
			if(prime[p] == true)
			{
				for(long i=p*2; i<=limit; i+=p)
				{
					prime[i] = false;
				}
			}
		}

		//Push all the prime numbers to a vector array
		for(long i=2; i<=limit; i++)
		{
			if(prime[i] == true)
			{
				pnumbers.push_back(i);
			}
		}	

		//Print the nth prime number
		cout<<pnumbers[nth - 1]<<endl;
	}
	return 0;
}
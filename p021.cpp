//Problem #21 : Amicable numbers
//Generate Amicable pairs using Thabit ibn Qurra Theorem

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	//To check if the number is prime
	vector<bool> primes(100000, true);

	for(int p=2; p<=100000; p++)
	{
		if(primes[p] == true)
		{
			for(int i=p*2; i<=100000; i+=p)
			{
				primes[i] = false;
			}
		}
	}

	//Implement Thabit's theorem
	for(int a=2; ;a++)
	{
		long p = (3 * exp2(a-1)) - 1;
		long q = (3 * exp2(a)) - 1;
		long r = (9 * exp2(2*a -1)) - 1;

		long no1, no2;
		no1 = no2 = 0;

		if(primes[p] && primes[q] && primes[r])
		{
			no1 = p * q * exp2(a);
			no2 = r * exp2(a);

			cout<<"Numbers ("<<no1<<" , "<<no2<<")\n";
		}

		
		if(no2 > 10000000)
		{
			break;
		}

	}

	return 0;
}
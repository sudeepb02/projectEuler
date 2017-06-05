//Project Euler #3 : Largest Prime factor
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int ti=0;ti<t; ti++)
	{
		long n;
		// cout<<"Enter the number : ";
		cin>>n;

		//Sieve of Erastothenes
		bool prime[n+1];
		memset(prime, true, sizeof(prime));
		for(long p=2; p<=n; p++)
		{
			if(prime[p] == true)
			{
				for (long i = p*2; i <=n; i+=p)
				{
					prime[i] = false;	
				}
			}
		}

		long lfactor = n;		//Largest prime factor
		long index = lfactor - 1;	
		bool flag = true;
		
		while(flag && index>=2)
		{
			if(n%index == 0)
			{
				if(prime[index])
				{
					lfactor = index;
					flag = false;
					break;
				}
			}
			index--;
		}
		cout<<lfactor<<endl;
	}
	
	return 0;
}

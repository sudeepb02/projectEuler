#include <iostream>
#include <vector>
using namespace std;

long mod = 1000000007;
long limit = 100001;
vector<long> g_values(limit, 1);

void computeValues();

int main()
{
	int t;
	cin>>t;

	long n;
	
	//Calculate values for all coins
	computeValues();

	for(int ti=0; ti<t; ti++)
	{
		cin>>n;
		cout<<g_values[n]<<endl;
	}
	return 0;

}

void computeValues()
{
	for(int i=2; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-2];

		if(g_values[i] >= mod)
		{
			g_values[i] %= mod;
		}

	}

	for(int i=5; i<=limit; i++)		//For 5p
	{
		g_values[i] += g_values[i-5];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}		
	}

	for(int i=10; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-10];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}
	}

	for(int i=20; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-20];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}
	}

	for(int i=50; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-50];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}	
	}

	for(int i=100; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-100];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}
	}

	for(int i=200; i<=limit; i++)		//For 2p
	{
		g_values[i] += g_values[i-200];
		if(g_values[i] > mod)
		{
			g_values[i] %= mod;
		}
	}

}
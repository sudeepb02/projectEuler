//Problem #14 : Collatz Problem
#include <iostream>
#include <vector>
using namespace std;

long numberOfSteps(long);
vector<long> steps(10000000, -1);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		long n;
		cin>>n;
		
		//Base condition for recursive function
		steps[0] = steps[1] = 0;

		//Store number with maximum steps
		long result = 1;
		long maxsteps = 1;

		for(int i=2; i<=n; i++)
		{
			if(numberOfSteps(i) >= maxsteps)
			{
				maxsteps = numberOfSteps(i);
				result = i;
			}
		}

		cout<<result<<endl;
	}
	return 0;
}

long numberOfSteps(long n)
{
	if(steps[n]!=-1)
	{
		return steps[n];
	}
	else
	{
		int s = 0;
		if(n%2 == 0)
		{
			s = 1 + numberOfSteps(n/2);
			steps[n] = s;
		}
		else
		{
			s = 1 + numberOfSteps(3*n +1);
			steps[n] = s;
		}
		return steps[n];
	}
}
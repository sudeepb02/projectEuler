//Problem #12 : Highly divisible triangular number
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		int maxNumber = 0;

		// vector<long> tnumbers;
		
		//Loop to generate triangle numbers;
		int index = 1;

		while(true)
		{
			long number = index*(index+1)/2;
			// tnumbers.push_back(number);

			int limit = sqrt(number);
			// cout<<"Limit : "<<limit<<endl;
			int factors = 0;

			for(int i=1; i<=limit; ++i)
			{
				if(number%i == 0)
				{
					if(i*i==number)
					{
						factors++;
					}
					else
					{
						factors+=2;
					}
				}
			}

			if(factors>n)
			{
				maxNumber = number;
				break;
			}

			index++;
		}

		cout<<maxNumber<<endl;
	}
	return 0;

}
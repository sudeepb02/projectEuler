//Problem #23 : Non-abundant sums
#include <iostream>
#include <vector>
using namespace std;
#define LIMIT 28123

int abundantNumber[LIMIT+1] = {0};
void generateAbundant();

int main()
{
	int t, n;
	cin>>t;

	generateAbundant();

	for(int ti=0; ti<t; ti++)
	{
		cin>>n;
		if(n>28123)		//All numbers above 28123 can be represented
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool flag = false;
			for(int i=6; i<n; i++)
			{
				if(abundantNumber[i] && abundantNumber[n-i])
				{
					flag = true;
					break;
				}
			}
			if(flag)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}

	return 0;
}

void generateAbundant()
{
	//Generate abundant numbers
	for(int i=3; i<LIMIT; i++)
	{
		//If the number is already processed, skip
		if(abundantNumber[i] != 1)
		{
			int factor = 2;
			int sum = 1;
			while( factor < i)
			{
				if(i % factor == 0)
				{
					sum += factor;
				}
				factor++;
			}

			//If the number is perfect, then all its multiples are abundant
			if(sum == i)
			{
				for(int p=2*i; p<LIMIT; p+=i)
				{
					abundantNumber[p] = 1;
				}
			}
			else if(sum > i)	//If the number is abundant, all its multiples are abundant
			{
				for(int p=i; p<LIMIT; p+=i)
				{
					abundantNumber[p] = 1;
				}
			}
		}
	}
}
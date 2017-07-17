//Problem #23 : Non-abundant sums
#include <iostream>
#include <vector>
using namespace std;
#define LIMIT 3000

vector<int> abundantNumber(LIMIT, 0);
void generateAbundant();

int main()
{
	int t, n;
	cin>>t;

	generateAbundant();
	
	

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
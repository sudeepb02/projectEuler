#include<iostream>
using namespace std;

int numberOfFactors(long long);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ++ti)
	{
		int input, result;
		cin>>input;

		int n = 1;
		while(true)
		{
			long long number = (n*(n+1)/2);
			if(numberOfFactors(number) > input)
			{
				result = number;
				break;
			}
			n++;
		}

		cout<<result<<endl;
	}
	return 0;
}

int numberOfFactors(long long number)
{
	int result = 1;

	long factor = 2;
	while(factor <= number)
	{
		int a = 1;
		while(number % factor == 0)
		{
			number/= factor;
			a++;
		}
		result*=a;
		factor++;
	}

	return result;
}
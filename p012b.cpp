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

		int tnumber = 1;
		int index = 1;
		while(true)
		{
			if(numberOfFactors(tnumber) > input)
			{
				result = tnumber;
				break;
			}
			index++;
			tnumber+= index;
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
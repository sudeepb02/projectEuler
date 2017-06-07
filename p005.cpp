// Problem #5 : Smallest Multiple
#include<iostream>
using namespace std;

int calculateGCD(int, int);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;
		int index = n-1;
		long product = n;

		while(index>1)
		{
			if(product % index != 0)
			{
				product = (product * index)/ calculateGCD(product, index);
			}
			index--;
		}

		cout<<product<<endl;
		// cout<<calculateGCD(252, 105);
	}
	return 0;
}

int calculateGCD(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
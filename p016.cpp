//Problem #16 : Power digit sum
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int calculateSum(int);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		cout<<calculateSum(n)<<endl;
	}
	return 0;
}

int calculateSum(int n)
{
	//Calculate length of digits
	int len = static_cast<int>(1 + floor(n/log2(10)));

	//To store the result in character array
	char *str = new char[len +1];

	//Calculate 2^n and write it to str instead of stdout
	sprintf(str, "%0.Lf", exp2((long double)n));

	int sum = 0;

	//Add all the digits
	for(int i=0; i<len; i++)
	{
		sum+= static_cast<int>(str[i] - '0');
	}

	delete[] str;

	return sum;
}
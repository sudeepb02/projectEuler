// Problem #6 : Sum square difference
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		long long n;
		cin>>n;

		//Calculate sum of squares
		long long sumOfSquares;
		sumOfSquares = (n*(n+1)*(2*n+1))/6;

		//Calculate square of sums
		long long squareOfSums;
		long long temp = (n*(n+1))/2;
		squareOfSums = pow(temp, 2);

		long long result;
		if(sumOfSquares > squareOfSums)
		{
			result = sumOfSquares - squareOfSums;
		}
		else
		{
			result = squareOfSums - sumOfSquares;
		}
		cout<<result<<endl;
	}
	return 0;

}
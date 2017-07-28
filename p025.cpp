// Problem 25 : N-digit Fibonacci number
//http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		double Phi = 1.61803398874989484820;
		double lPhi = log10(Phi);
		double ltemp = 0.5 * log10(5);
		int count = 1;
		int result = 0;
		while(result != n-1)
		{
			result = static_cast<int>(count * lPhi - ltemp);
			// cout<<count<<" has "<<(result+1)<<" digits"<<endl;
			count++;
		}
		count--;

		cout<<count<<endl;
	}
	return 0;
}
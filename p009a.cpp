//Problem #9 : Special Pythagorean Triplet

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int ti=0; ti<t; ti++)
	{

		int n;
		cin>>n;

		int limit = n/3;
		int max = -1;

		for(int p=2; p<limit; p++)
		{
			for(int q=1; q<p; q++)
			{
				int a = p*p - q*q;
				int b = 2*p*q;
				int c = p*p + q*q;

				if((a + b + c) == n)
				{
					int product = a*b*c;
					if(product > max)
					{
						max = product;
					}
				}
			}
		}

		cout<<max<<endl;
	}
	return 0;
}
//Problem #9 : Special Pythagorean triplet

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

		int max = -1;
		
		for(int a=1; a<n/2; a++)
		{
			//a^2 + b^2 = c^2 => b^2 - c^2 = a^2 ------- (1)
			// a + b + c = n  => b + c = n - a ----------(2)
			// b^2 - (eq2 - b)^2 = eq1

			int asquare = a*a;
			int temp = n - a;

			int c = (asquare + temp*temp)/(2*temp);
			int b = temp - c;

			if((a*a + b*b)==c*c)
			{
				int product = a*b*c;
				if(max < product)
				{
					max = product;
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
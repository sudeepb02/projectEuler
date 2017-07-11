//Problem #20 : Facotrial digit sum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;

	vector<int> fact(1000);		//To store each digit of factorial

	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		long sum = 0;

		int carry = 0;
		int counter = 1;

		fact[0] = 1;

		for(int i=1; i<=n; i++)
		{
			for(int j=0; j<counter; j++)
			{
				int prod = fact[j]*i + carry;
				fact[j] = prod % 10;
				carry = prod/10;
			}

			while(carry > 0)
			{
				fact[counter] = carry % 10;
				carry /= 10;
				counter++;
			}
		}

		//Calcualte sum of all digits
		for(int i=counter-1; i>=0; i--)
		{
			sum += fact[i];
		}

		cout<<sum<<endl;
	}
	return 0;
}
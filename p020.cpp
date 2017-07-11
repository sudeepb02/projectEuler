//Problem #20 : 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> fact(1000);

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

	//Print the factorial
	for(int i=counter-1; i>=0; i--)
	{
		cout<<fact[i];
	}

	return 0;
}
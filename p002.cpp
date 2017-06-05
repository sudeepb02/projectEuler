//Project Euler #2 : Sum of Even fibonacci numbers
#include<iostream>
using namespace std;

int main()
{
	long int n, t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;

		long int f0 = 0;
		long int f1 = 2;
		long int f2 = f1;
		long int sum = 0;

		while(f2 < n)
		{
			sum+= f2;
			f2 = 4*f1 + f0;
			f0 = f1;
			f1 = f2;
			

		}

		cout<<sum<<endl;
	}
	return 0;
}
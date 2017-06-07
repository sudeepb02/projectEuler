#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(long n);

int main()
{
	int t;
	cin>>t;
	for(int ti=0;ti<t;ti++)
	{
		long number;
		
		// cout<<"Enter number N : ";
		cin>>number;

		long max = 0;

		for(int i=999; i>99; i--)
		{
			for(int j=999; j>99; j--)
			{
				if(i*j<number && isPalindrome(i*j))
				{
					if(i*j > max)
					{
						max = i * j;
					}

				}
			}
		}

		cout<<max<<endl;
	}
	return 0;
}

bool isPalindrome(long n)
{
	long temp = n;
	long rev = 0;

	while(temp>0)
	{
		rev = rev * 10 + temp%10;
		temp = temp/10;
	}
	// cout<<rev;

	if(n==rev)
	{
		return true;
	}
	return false;
}
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
		int count = 0;
		vector<long> palindromeNumbers;
		// cout<<"Enter number N : ";
		cin>>number;

		for(int i=999; i>99; i--)
		{
			for(int j=999; j>99; j--)
			{
				if(i*j<number && isPalindrome(i*j))
				{
					palindromeNumbers.push_back(i*j);
					count++;
					// cout<<"Largest Palindrome number : "<<i*j<<endl;
					// cout<<"Factors are "<<i<<" and "<<j;
					// break;
				}
			}
		}

		long max = palindromeNumbers.at(0);
		for(int i=0;i<count; i++)
		{
			if(palindromeNumbers.at(i) > max)
			{
				max = palindromeNumbers.at(i);
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
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string);
string toK(int, long);

int main()
{
	long n, k;
	cin>>n>>k;

	long sum = 0;

	for(long i=1; i<n; i++)
	{
		// cout<<i<<" is isPalindrome(10)"<<isPalindrome(to_string(i));
		// cout<<"\t isPalindrome(k)"<<isPalindrome(toK(k, i))<<endl;
		if(isPalindrome(to_string(i)) && isPalindrome(toK(k, i)))
		{
			sum += i;
		}
	}
	cout<<sum<<endl;
	return 0;
}

bool isPalindrome(string a)
{
	int start, end;
	start = 0;
	end = a.length() - 1;
	bool flag = true;

	while(start < end)
	{
		if(a[start] != a[end])
		{
			flag = false;
		}
		start++;
		end--;
	}
	return flag;
}

string toK(int k, long n)
{
	string result = "";
	int temp;
	while(n > 0)
	{
		temp = n % k;
		n /= k;
		result.append(to_string(temp));
	}
	//No need to reverse result as we want to check palindrome

	return result;
}
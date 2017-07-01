//Problem #13 : Large Sum
#include <iostream>
#include <string>
using namespace std;

string add(string&, string&);

int main()
{
	string s1, s2, result;
	cin>>s1>>s2;

	result = add(s1, s2);

	cout<<result;
	return 0;
}

string add(string &s1, string &s2)
{
	string min, max, result;
	result = "";

	int i, sum, carry;
	carry = 0;

	if(s1.length() > s2.length())
	{
		max = s1;
		min = s2;
	}
	else
	{
		max = s2;
		min = s1;
	}

	for(i= min.length()-1; i>=0; i--)
	{
		sum = min[i] + max[i + max.length() - min.length()] + carry - 2*'0';

		carry = sum/10;
		sum %= 10;

		result = (char)(sum + '0') + result;
	}

	i = max.length() - min.length() - 1;

	while(i>=0)
	{
		sum = max[i] + carry - '0';

		carry = sum/10;
		sum %= 10;

		result = (char)(sum + '0') + result;
		i--;
	}

	return result;

}
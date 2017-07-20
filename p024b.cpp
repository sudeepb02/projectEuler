//Problem #24 : Lexicographic Permutations
// Refer : https://medium.com/@aiswaryamathur/find-the-n-th-permutation-of-an-ordered-string-using-factorial-number-system-9c81e34ab0c8
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long n;
	cin>>n;

	vector<char> letters;
	for(int i=0; i<13; i++)
	{
		letters.push_back(static_cast<char>('a' + i));
	}

	//To store n as factoradic number
	vector<int> fnumber;
	int index = 1;
	while(n!= 0)
	{
		int rm = n % index;
		fnumber.push_back(rm);
		n /= index;
		index++;
	}

	while(fnumber.size() != 13)
	{
		fnumber.push_back(0);
	}
	std::reverse(fnumber.begin(), fnumber.end());

	//Generate the nth permutation
	string result = "";

	for(int i=0; i<fnumber.size(); i++)
	{
		cout<<fnumber[i];
	}
	return 0;
}
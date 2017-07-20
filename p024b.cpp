//Problem #24 : Lexicographic Permutations
// Refer : https://medium.com/@aiswaryamathur/find-the-n-th-permutation-of-an-ordered-string-using-factorial-number-system-9c81e34ab0c8
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		long n;
		cin>>n;

		n--;
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
		int idx;
		int count = 0;

		while(count < 13)
		{
			idx = fnumber[count];
			result = result + letters[idx];

			letters.erase(letters.begin() + idx);
			count++;
		}

		// for(int i=0; i<fnumber.size(); i++)
		// {
		// 	cout<<fnumber[i];
		// }

		cout<<result<<endl;
	}
	return 0;
}
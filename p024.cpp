//Problem #24
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s = "abcdefghijklm";

	vector<char> letters;

	for(int i=0; i<s.length(); i++)
	{
		letters.push_back(s[i]);
	}

	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		long n;
		cin>>n;

		long count = 1;
	
		do
		{
			if(count == n){break;}

			s = "";
			for(int i=0; i<letters.size(); i++)
			{
				s += letters[i];
			}
			count++;


		}while(next_permutation(letters.begin(), letters.end()));

		cout<<s<<endl;
	}
	return 0;
}
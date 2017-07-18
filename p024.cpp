//Problem #24
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		vector<int> letters;
		string s = "";

		for(int i=0; i<13; i++)
		{
			letters.push_back(i);
		}

		long n;
		cin>>n;

		long count = 1;
	
		do
		{
			if(count != n){count++;}
			else
			{
					s = "";
				for(int i=0; i<letters.size(); i++)
				{
					// cout<<letters[i];
					s += ('a' + letters[i]);
				}
				// cout<<endl;
				break;
			}

		}while(next_permutation(letters.begin(), letters.end()));

		cout<<s<<endl;
	}
	return 0;
}
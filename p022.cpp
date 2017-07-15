//Problem #22 : Names Score
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<string> names;	//To store all the names
	vector<int> score(n);	//To store the score of names

	string temp;

	//Read and store the names
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		names.push_back(temp);
	}

	//Sort the names alphabetically
	sort(names.begin(), names.end());

	//Calculate the score of each string
	for(int i=0; i<n; i++)
	{
		int s = 0;
		for(int j=0; j<names[i].length(); j++)
		{
			s = s + (names[i])[j] - 'A' + 1;
		}
		score[i] = s * (i+1);
	}

	//Answer the queries
	int q;
	cin>>q;

	for(int qi=0; qi<q; qi++)
	{
		cin>>temp;

		for(int si=0; si<n; si++)
		{
			if(names[si] == temp)
			{
				cout<<score[si]<<endl;
				break;
			}
		}
	}

	// for(int i=0; i<n; i++)
	// {
	// 	cout<<names[i]<<"\t"<<score[i]<<endl;
	// }

	return 0;
}
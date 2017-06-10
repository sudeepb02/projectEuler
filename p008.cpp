//Problem #8 : Largest product in a series

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{
		int n, k;
		cin>>n>>k;

		char number[1001];

		cin>>number;

		int i=0;
		int max = 0;

		while(i<n-k + 1)
		{
			int result = 1;
			for(int j=i; j<i+k; j++)
			{
				int temp = (int)number[j];

				temp = temp - 48;		//ASCII correction
				result = result * temp;
			}

			if(max < result)
			{
				max = result;
			}
			i++;
		}

		cout<<max<<endl;
	}
	return 0;	
}
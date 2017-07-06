//Problem #17 : Number to Words
#include <iostream>
#include <vector>
using namespace std;

string spell(int);

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
	{

		long long number;
		cin>>number;

		vector<string> placeValue = {"", "Thousand", "Million", "Billion"};

		string result = "";
		int index = 0;

		while(number>0)
		{
			int temp = number%1000;

			if(temp)
			{
				result = spell(number%1000) + placeValue[index] + " " + result;
			}
			number /= 1000;
			index++;
		}

		cout<<result<<endl;
	}

	return 0;

}

string spell(int n)
{	
	if(n==0)
	{
		return "";
	}

	string result = "";

	vector<string> under20 = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
	
	vector<string> tens = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
	int last2 = n%100;

	if(last2 < 20)
	{

		result = under20[last2] + result;
	}
	else
	{
		string units = under20[last2%10];
		last2/=10;
		string t = tens[last2];		

		result = t + units;
	}

	n /= 100;
	if(n!=0)
	{
		result = under20[n] + "Hundred " + result;
	}
	
	return result;
}
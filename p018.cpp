//Problem #18 : Maximum path sum I
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<vector<int>> arr(n);

	int temp;
	//Read the input elements
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cin>>temp;
			arr[i].push_back(temp);
		}
	}

	//Start from last second row and upwards
	for(int i=n-2;i>=0; i--)
	{
		for(int j=0; j<=i; j++)
		{
			arr[i][j] = arr[i][j] + max(arr[i+1][j], arr[i+1][j+1]);
		}
	}

	cout<<"Maximum cost : "<<arr[0][0];

	return 0;
}
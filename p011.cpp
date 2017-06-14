#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n = 20;
	const int p = 4;

	int matrix[n][n];


	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			cin>>matrix[i][j];
		}
	}

	long max = 0;

	//Horizontal and vertical traversal
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<= n-p; ++j)
		{
			//Calculate product horizontally
			long product1 = matrix[i][j] * matrix[i][j+1] * matrix[i][j+2] * matrix[i][j+3];
			// cout<<"Product = "<<matrix[i][j]<<" x "<<matrix[i][j+1]<<" x "<<matrix[i][j+2]<<endl;

			//Calculate product vertically
			long product2 = matrix[j][i] * matrix[j+1][i] * matrix[j+2][i] * matrix[j+3][i];
			
			if(max < product1)
			{
				max = product1;
			}
			if(max < product2)
			{
				max = product2;
			}
		}
	}

	cout<<max<<endl;
	return 0;

}
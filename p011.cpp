#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n = 20;
	const int p = 4;

	vector<vector<int>> matrix(n, vector<int>(20));

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
				// cout<<"New max1 = "<<max<<endl;
			}
			if(max < product2)
			{
				max = product2;
				// cout<<"New max2 = "<<max<<endl;
			}
		}
	}

	//Diagonal traversal
	for(int i=0; i<=n-p; ++i)
	{
		long product1 = matrix[i][i] * matrix[i+1][i+1] * matrix[i+2][i+2] * matrix[i+3][i+3];
		// cout<<"===\n "<<matrix[i][i]<<" x "<<matrix[i+1][i+1]<<" x "<<matrix[i+2][i+2]<<" x "<<matrix[i+3][i+3]<<endl;
		// cout<<"D product1 = "<<product1<<endl;

		long product2 = matrix[i][n-i-1] * matrix[i+1][n-i-2] * matrix[i+2][n-i-3] * matrix[i+3][n-i-4];
		// cout<<"===\n "<<matrix[i][n-i-1]<<" x "<<matrix[i+1][n-i-2]<<" x "<<matrix[i+2][n-i-3]<<" x "<<matrix[i+3][n-i-4]<<endl;
		// cout<<"D product2 = "<<product2<<endl;

		if(max < product1)
		{
			max = product1;
			// cout<<"New max3 = "<<max<<endl;
		}
		if(max < product2)
		{
			max = product2;
			// cout<<"New max4 = "<<max<<endl;
		}
	}

	cout<<max<<endl;
	return 0;

}
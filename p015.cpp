//Problem #15 : Lattice paths
#include <iostream>
#include <vector>
using namespace std;

long long Combination(int n, int r);

int main()
{
	int m, n;
	//n rows, m columns
	cin>>n>>m;

	cout<<Combination(m+n, m);

	return 0;
}

//To generate nCr i.e C(n, r)
long long Combination(int n, int r)
{
	vector< vector<long long>> cmat( n+1, vector<long long>(r+1, 0));

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=r && j<=i; j++)
		{
			//C(n, n) = 1 and C(n, 0) = 1
			if(j==0 || j==i)
			{
				cmat[i][j] = 1;
			}
			else
			{
				//C(n, r) = C(n-1, r-1) + C(n-1, r)
				cmat[i][j] = (cmat[i-1][j-1] + cmat[i-1][j]);
			}
		}
	}

	return cmat[n][r];
}
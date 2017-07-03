//Problem #15 : Lattice paths
#include <iostream>
#include <vector>
using namespace std;

//To generate nCr i.e C(n, r)
long long Combination(int n, int r);

int main()
{
	int m, n;
	//n rows, m columns
	cin>>n>>m;

	long long result;

	result = Combination(m+n, m);

	cout<<result;

	return 0;
}


long long Combination(int n, int r)
{
	long long answer;
	return answer
}
#include <iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long idx, sum, dcount, curr;
	long n;
	long mod = 1000000007;

	for(int ti=0; ti<t; ti++)
	{
		cin>>n;
		idx = 2;	//To track the spiral number
		sum = 1;	//Final sum
		dcount = 0;	//for diagonal count
		curr = 1;	//Current number in spiral

		while(idx <=n)
		{
			sum = sum + curr + idx;
			curr += idx;
			dcount++;

			if(dcount % 4 == 0)
			{
				dcount = 0;
				idx += 2;
			}
			sum %= mod;
		}
		cout<<sum<<endl;
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;

	long index, temp, sum, finalsum;
	int dig;
	index = 10; 	//Start with 2 digit number
	finalsum = 0;

	while(index < 100000)
	{
		sum = 0;
		temp = index;
		while(temp > 0)
		{
			dig = temp % 10;
			sum += pow(dig, n);
			temp /= 10;
		}
		if(sum == index)
		{
			// cout<<"=====> "<<index<<endl;
			// cout<<finalsum<<endl;
			finalsum += sum;
		}
		index++;
	}

	cout<<finalsum<<endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long n;
	cin>>n;

	vector<long> fact(10, 0);
	fact[0] = fact[1] = 1;
	for(int i=2; i<10; i++)
	{
		fact[i] = i * fact[i-1];
	}

	long finalSum, digitSum, temp, digit;
	finalSum = 0;

	for(long i=10; i<=n; i++)
	{
		digitSum = 0;
		temp = i;
		while(temp > 0)
		{
			digit = temp % 10;
			digitSum += fact[digit];
			temp /= 10;
		}
		if(digitSum % i == 0)
		{
			finalSum += i;
		}
	}
	// for(int i=0; i<10; i++)
	// {
	// 	cout<<fact[i]<<endl;
	// }

	cout<<finalSum;
	return 0;

}
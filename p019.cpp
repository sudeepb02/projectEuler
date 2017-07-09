//Problem #19 : COunting Sundays
#include <iostream>
#include <vector>
using namespace std;

int getYearCode(int);

int main()
{
	int d1, m1, y1;
	int d2, m2, y2;

	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;

	int monthCodes[13] = {0, 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
	int result = 0;

	for(int i=y1; i<=y2; i++)
	{
		int yearCode = getYearCode(i);

		for(int j=1; j<=12; j++)
		{
			int sum = 0;
			
			//Add yearCode and month code to sum
			sum = sum + yearCode + monthCodes[j];

			//Add number of leap years and last two digits of year
			sum = sum + (i%100) + static_cast<int>((i%100)/4);

			//Add given date i.e 1sst of month
			sum++;

			int od = sum % 7;

			//If the day is Sunday i.e remainder is 0
			if(od == 0)
			{
				result++;
			}

		}
	}

	cout<<result;

	return 0;

}

int getYearCode(int y)
{
	int yearCode = 0;
	int temp = y % 400;

	//Add year code to sum
	if(temp <= 99)
	{
		yearCode = 6;
	}
	else if(temp <= 199)
	{
		yearCode = 4;
	}
	else if(temp <= 299)
	{
		yearCode = 2;
	}

	return yearCode;
}
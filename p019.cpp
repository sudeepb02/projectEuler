//Problem #19 : COunting Sundays
#include <iostream>
#include <vector>
using namespace std;

int getYearCode(int);
int getDay(int, int, int);
int monthCodes[13] = {0, 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};

int main()
{
	int d1, m1, y1;
	int d2, m2, y2;

	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;

	int result = 0;

	//Check for boundary years

	if(d1 > 1){ m1++; }		//Check from next month since 1st of month already passed
	
	if(y1 != y2)
	{
		for(int p=m1; p<=12; p++)
		{
			if(getDay(y1, p, 1) == 0)
			{
				cout<<y1<<" "<<p<<" "<<"1 \n";
				result++;
			}
		}

		for(int p=1; p<=m2; p++)
		{
			if(getDay(y2, p, 1) == 0)
			{
				cout<<y2<<" "<<p<<" "<<"1 \n";
				result++;
			}
		}
	
	}
	else
	{
		for(int p=m1; p<=m2; p++)
		{
			if(getDay(y1, p, 1) == 0)
			{
				cout<<y1<<" "<<p<<" "<<"1 \n";
				result++;
			}
		}
	}

	
	for(int i=y1+1; i<y2; i++)
	{
		int yearCode = getYearCode(i);

		for(int j=1; j<=12; j++)
		{
			if(getDay(i, j, 1) == 0)
			{
				cout<<i<<" "<<j<<" "<<"1 \n";
				result++;
			}

		}
	}

	cout<<result;

	return 0;

}

int getDay(int y, int m, int d)
{
	int sum = 0;

	//Add yearCode and monthcode
	sum = sum + getYearCode(y) + monthCodes[m];

	//Add number of leap years, last two digits of year
	int temp = y%100;
	temp--;
	sum = sum + (temp) + static_cast<int>(temp/4);

	//Add date
	sum += d;

	return (sum % 7);
}

int getYearCode(int y)
{
	int yearCode = 0;
	int temp = y % 400;

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

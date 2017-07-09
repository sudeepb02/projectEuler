//Problem #19 : COunting Sundays
#include <iostream>
#include <vector>
using namespace std;

int getYearCode(int);
int getDay(int, int, int);
int monthCodes[13] = {0, 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};

int main()
{
	int t;
	cin>>t;

	for(int ti=0; ti<t; ti++)
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
			for(int p=m1; p<=12; p++)	//For y1
			{
				if(getDay(y1, p, 1) == 0)
				{
					// cout<<y1<<" "<<p<<" "<<"1 \n";
					result++;
				}
			}

			for(int p=1; p<=m2; p++)	//For y2
			{
				if(getDay(y2, p, 1) == 0)
				{
					// cout<<y2<<" "<<p<<" "<<"1 \n";
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
					// cout<<y1<<" "<<p<<" "<<"1 \n";
					result++;
				}
			}
		}

		
		for(int i=y1+1; i<y2; i++)	//From y1+1 to y2-1;
		{
			for(int j=1; j<=12; j++)
			{
				if(getDay(i, j, 1) == 0)
				{
					// cout<<i<<" "<<j<<" "<<"1 \n";
					result++;
				}

			}
		}

		cout<<result<<endl;
	}
	return 0;

}

int getDay(int y, int m, int d)
{
	int sum = 0;
	int temp = y%100;
	bool leapyear = false;

	//Check if it's a leap year
	if(temp%4 == 0)
	{
		if(temp != 0)
		{
			leapyear = true;
			sum++;
		}
		else
		{	//Every 4th century is a leap year
			if(y%400 == 0)
			{
				leapyear = true;
				sum++;
			}
		}
	}

	//If leap year and month is February
	if(leapyear && (m==2))
	{
		sum--;
	}

	//Add yearCode and monthcode
	sum = sum + getYearCode(y) + monthCodes[m];

	//Add number of leap years, last two digits of year
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

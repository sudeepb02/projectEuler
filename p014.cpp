//Problem #14 : Collatz Problem

#include <iostream>
using namespace std;

int numberOfSteps(int);

int main()
{

}

int numberOfSteps(int n)
{
	if(dictContains(n))
	{
		return stepsOf(n);
	}
	else
	{
		int steps = 0;
		if(n%2 == 0)
		{
			steps = 1 + numberOfSteps(n/2);
			stepsOf.push(n, steps);
		}
		else
		{
			steps = 1 + numberOfSteps(3*n +1);
			stepsOf.push(n, steps);
		}
		return steps;
	}
}
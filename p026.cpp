#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int ti=0; ti<t; ti++)
	{
		int n;
		cin>>n;

		//Store maximum count and the corresponding number
		int maxcount = 0;
		int result;

		for(int i=n-1; i>=1; i--)
		{
			if(i <= maxcount)
			{
				break;
			}

            int count = 0;
            int rem = 1;

            vector<int> prevremainder(i, 0);
            prevremainder[0] = 1;

            while(!prevremainder[rem])
            {
                prevremainder[rem] = 1;			//The number is already generated
                rem *= 10;
                rem = rem % i;
                count++;
                if(rem == 0)
                {
                    count = 0;
                }
            }

            if(count > maxcount)
            {
                maxcount = count;
                result = i;
            }

		}
		cout<<result<<endl;
	}
	return 0;
}
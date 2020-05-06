#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {2, 4, 10, 10, 10, 18, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int l = 0, h = n-1, m;

	int ele, li, ri;
	cin >> ele;

	while(l <= h)
	{
		m = l + (h - l)/2;

		if(arr[m] == ele)
		{
			li = m;
			//ri = m;
			h = m - 1;

		}	
		else if(arr[m] < ele)
		{
			l = m + 1;
		}
		else
			h = m - 1;
	}
	l = 0, h = n-1;
	while(l <= h)
        {
                m = l + (h - l)/2;

                if(arr[m] == ele)
                {
                        //li = m;
                        ri = m;
                        l = m + 1;

                }
                else if(arr[m] < ele)
                {
                        l = m + 1;
                }
                else
                        h = m - 1;
        }

	cout << li << endl << ri << endl;
}

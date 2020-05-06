#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {2, 5, 4, 8, 7, 1, 45, 67, 11, 23, 45};
	int n = sizeof(arr) / sizeof(arr[0]);
	int l = 0, h = n-1, m, ans;

	while(l <= h)
	{

		m = l + (h - l)/2;

		if(arr[m] > arr[m-1] && arr[m] > arr[m+1])
		{
			ans = m;
			break;
		}

		else
		{
			if(arr[m + 1] > arr[m-1])
			{
				l = m + 1;
			}
			else
				h = m - 1;
		}
	}
	cout << ans << endl;
}

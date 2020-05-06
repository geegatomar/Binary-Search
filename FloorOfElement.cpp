#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 8, 11, 13, 54, 67, 89};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ele = 90, ans;
	int l = 0, h = n-1, m;

	while(l <= h)
	{
		m = l + (h-l)/2;

		if(arr[m] == ele)
		{
			ans = m;
			break;
		}
		else if(arr[m] < ele)
		{
			ans = m;
			l = m + 1;
		}
		else
		{
			h = m - 1;
		}
	}

	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int l = 0, h = 1;
	while(arr[h] != 1)
	{
		int temp = h;
		h = 2*h;
		l = temp;
	}

	int m, ans;
	while(l <= h)
	{
		m = l + (h - l)/2;
		if(arr[m] == 1)
		{
			ans = m;
			h = m-1;
		}
		else if(arr[m] == 0)
		{
			l = m + 1;
		}

	}
	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {6, 11, 12, 15, 18, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans, l = 0, h = n-1, m, prev, next;
	
	
	while(l <= h)
	{
		m = l + (h-l)/2;
		next = (m + 1) % n;
		prev = (m + n - 1) % n ;
		if(arr[m] < arr[prev] && arr[m] < arr[next])
		{
			ans = m;
			break;
		}

		else
		{
			if(arr[m]  > arr[h])   //we are looking for unsorted part of arrayas pivot element will be present there
				l = m+1;
			else
				h = m-1;
		}
	}
	cout << ans << endl;
}

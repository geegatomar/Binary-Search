//we need to minimize the maximum number of pages read by each student

#include<bits/stdc++.h>
using namespace std;

int isValid(int arr[], int n, int k, int lim)   //limit
{
	int students = 1, numberPages = 0;
	for(int i = 0; i < n; i++)
	{
		if(numberPages + arr[i] > lim)
		{
			numberPages = arr[i];
			students ++;
			if(students > k)
				return 0;
		}
		else
		{
			numberPages += arr[i];
		}
	}
	return 1;
}

int allocateMin(int arr[], int n, int k)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	int l = 0, h = sum, m, ans;
	while(l <= h)
	{
		m = l + (h-l)/2;

		if(isValid(arr, n, k, m))
		{
			ans = m;
			h = m - 1;

		}
		else
			l = m + 1;
	}
	return ans;
}

int main()
{
	int n, k, i;
	int arr[100005];
	cin >> n >> k;
	for(i = 0 ; i < n; i++)
	{
		cin >> arr[i];

	}

	cout << allocateMin(arr, n, k);
}

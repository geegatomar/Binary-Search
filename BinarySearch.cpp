#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int l, int h, int ele)
{

	if(l > h)
		return l;
	int m = l + (h - l)/2;
	if(arr[m] == ele)
		return m;
	if(arr[m] < ele)
	{
		return bs(arr, m + 1, h, ele);
	}
	else
		return bs(arr, l, m - 1, ele);
}

int main()
{
	int arr[] = {1,2,3,4,5,6,8,9,12,14,15,18,20,67,69,90};
	int n = sizeof(arr) / sizeof(arr[0]), ele;
	cin >> ele;
	cout << bs(arr, 0, n-1, ele) << endl;
	int l, h, m, i, j;
	
	l = 0; h = n-1;
	while(l <= h)
	{
		m = l + (h - l) / 2;
		
		if(arr[m] == ele)
		{
			cout << m <<endl;
			break;
		}

		else if(arr[m] < ele)
		{
			l = m + 1;
		}

		else
			h = m - 1;
	}


}

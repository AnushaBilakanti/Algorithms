#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[], int n)
{
	int present_max = a[0];
	int total_max = a[0];
	for(int i=1; i<n; i++)
	{
		present_max = max(a[i], present_max + a[i]);
		total_max = max(total_max, present_max);
	}
	return total_max;
}

int main(void)
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << maxsum(a,n) << endl;
	return 0;
}

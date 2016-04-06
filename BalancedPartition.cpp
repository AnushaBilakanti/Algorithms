#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
		sum += a[i];	
	int store[n+1][sum+1];
	for(int i=0; i<=n; i++)
		for(int j=0; j<=sum; j++)
		{
			if(i == 0 || j == 0)
			{
				if(i == 0)
					store[i][j] = 0;
				if(j == 0)
					store[i][j] = 1;
			}
			else if(a[i-1] <= j)
				store[i][j] = max(store[i-1][j], store[i-1][j-a[i-1]]);
			else
				store[i][j] = store[i-1][j];	
		}
	for(int j=sum/2; j>=0; j--)
		if(store[n][j] == 1)
			return sum-2*j;
	return INT_MAX;
}

int main(void)
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << partition(a, n)  << endl;
	return 0;
}

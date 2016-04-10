#include<bits/stdc++.h>
using namespace std;

int cost(int breaks[], int n, int m)
{
	int c = 0, l, i, j;
	bool scale[m+1];
	memset(scale, 0, sizeof(scale));
	for(i=0; i<n; i++)
	{
		for(j=breaks[i]; j!=m && scale[j]!=1; j++); l = j; 
		for(j=breaks[i]; j!=0 && scale[j]!=1; j--); l -= j;
		scale[breaks[i]] = 1;
		c += l;
	}
	return c;
}

void permute(int arr[], int n, int m, int &mini, int l, int r)
{
	if(l==r)
	{
		int x = cost(arr, n, m);
		mini = min(x, mini);
		for(int i=0; i<n; i++)
			cout << arr[i] << "   ";
		cout << "cost = " << x << endl;
	}
	else
		for(int i=l; i<=r; i++)
		{
			swap(arr[l], arr[i]);
			permute(arr, n, m, mini, l+1, r);
			swap(arr[l], arr[i]);
		}
}

int main(void)
{
	int n, m, mini = INT_MAX;
	cin >> m >> n;
	int breaks[n];
	for(int i=0; i<n; i++)
		cin >> breaks[i];
	permute(breaks, n, m, mini, 0, n-1);
	cout << "Min cost " << mini << endl;
	return 0;
}

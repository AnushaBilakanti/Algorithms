#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n)
{
	int store[n], next;
	memset(store, 0, sizeof(store));
	for(int i=1; i<n; i++)
		for(int j=0; j<i; j++)
			if(a[j] < a[i])
				store[i] = max(store[i], store[j] + 1);
	return *max_element(store, store+n)+1;
}

int main(void)
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << lis(a, n) << endl;
	return 0;
}

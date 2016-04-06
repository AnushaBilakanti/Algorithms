#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int store[MAX+1];

int change(int v[], int n, int c)
{
	if(store[c] == 0)
	{
		int mini = change(v, n, c-v[0]) + 1;
		for(int i=1; i<n; i++)
			if(c-v[i] > 0)
				mini = min(change(v, n, c-v[i]), mini) + 1;
		store[c] = mini;
	}
	return store[c];
}

int main(void)
{
	int n, c;
	cin >> n;
	int v[n];
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v, v+n);
	for(int i=0; i<n; i++)
		store[v[i]] = 1;
	cin >> c;
	cout << change(v, n, c) << endl;
	return 0;	
}

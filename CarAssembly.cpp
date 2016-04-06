#include<bits/stdc++.h>
#define MAX 10
using namespace std;

int assembly(int a[2][MAX], int t[2][MAX], int e[2], int x[2], int n)
{
	int T0[n], T1[n];
	T0[0] = e[0] + a[0][0];
	T1[0] = e[1] + a[1][0];
	for(int i=1; i<n; i++)
	{
		T0[i] = min(T0[i-1] + a[0][i], T1[i-1] + t[1][i] + a[0][i]);
		T1[i] = min(T1[i-1] + a[1][i], T0[i-1] + t[0][i] + a[1][i]);
	}
	return min(T0[n-1]+x[0], T1[n-1]+x[1]);
}

int main(void)
{
	int n, a[2][MAX], t[2][MAX], e[2], x[2];
	cin >> n;
	for(int i=0; i<2; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j];
        for(int i=0; i<2; i++)
                for(int j=0; j<n; j++)
                        cin >> t[i][j];
        for(int i=0; i<2; i++)
        	cin >> e[i];
        for(int i=0; i<2; i++)
        	cin >> x[i];
	cout << assembly(a, t, e, x, n) << endl;
	return 0;
}

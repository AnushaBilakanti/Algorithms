#include<bits/stdc++.h>
using namespace std;

int distance(string a, string b, int n, int m)
{
	int store[n+1][m+1];
	for(int i=0; i<=n; i++)
		for(int j=0; j<=m; j++)
		{
			if(i == 0 || j == 0)
			{
				if(i == 0)
					store[i][j] = j;
				if(j == 0)
					store[i][j] = i;
			}
			else if(a[i-1] == b[j-1])
				store[i][j] = store[i-1][j-1];
			else
				store[i][j] = min(min(store[i-1][j], store[i][j-1]), store[i-1][j-1]) + 1;
		}
	return store[n][m];			
}

int main(void)
{
	string a, b;
	cin >> a >> b;
	int n = a.size(), m = b.size();
	cout << distance(a, b, n, m) << endl;
	return 0;
}

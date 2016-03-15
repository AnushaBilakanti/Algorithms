#include<bits/stdc++.h>
using namespace std;

int Knapsack(int W, int v[], int w[], int n)
{
	int store[n+1][W+1];
	for(int i=0; i<=n; i++)
		for(int j=0; j<=W; j++)
		{
			if(i == 0 || j == 0)
				store[i][j] = 0;
			else if(w[i-1] <= j)
				store[i][j] = max(store[i-1][j], v[i-1] + store[i-1][j-w[i-1]]);
			else
				store[i][j] = store[i-1][j];	
		}	
	{
		for(int i=0; i<=n; i++)
		{
			for(int j=0; j<=W; j++)
				printf("%4d",store[i][j]);
			cout << endl;
		}
	}
	return store[n][W];
}

int main(void)
{
	int n = 3;
	int v[] = {6, 10, 12};
	int w[] = {1, 2, 3};
	int W = 5;
	cout << Knapsack(W,v,w,n) << endl;
	return 0;
}

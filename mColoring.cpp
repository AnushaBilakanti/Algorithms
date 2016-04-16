#include<bits/stdc++.h>
#define N 10
using namespace std;
bool graph[N][N];

bool isPresent(int color[], int n, int v, int i)
{
	for(int j=0; j<n; j++)
		if(graph[v][j] && i == color[j])
			return 0;
	return 1;
}

bool _mColoring(int color[], int n, int m, int v)
{
	if(v == n)
		return 1;
	for(int i=1; i<=m; i++)
	{
		if(isPresent(color, n, v, i))
		{
			color[v] = i;
			if(_mColoring(color, n, m, v+1))
				return 1;
			color[v] = 0;
		}
	}
	return 0;
}

void mColoring(int n, int m)
{
	int color[n];
	memset(color, 0, sizeof(color));
	if(_mColoring(color, n, m, 0))
	{	
		for(int i=0; i<n; i++)
			cout << color[i] << "   ";
		cout << endl;
	}
	else
		cout << "Not Possible!" << endl;
}

int main(void)
{
	memset(graph, 0, sizeof(graph));
	int n, e, u, v, m;
	cin >> n >> e;
	for(int i=0; i<e; i++)
	{
		cin >> u >> v;
		graph[u][v] = graph[v][u] = 1;
	}
	cin >> m;
	mColoring(n, m);
	return 0;
}

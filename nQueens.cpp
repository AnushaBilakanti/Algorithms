#include<bits/stdc++.h>
#define N 8
using namespace std;
bool board[N][N];

bool isPresent(int r, int c)
{
	for(int i=r, j=c; i>=0 && j>=0; i--, j--)
		if(board[i][j])
			return 0;
	for(int i=r, j=c; i>=0 && j>=0 && j<N; i--)
		if(board[i][j])
			return 0;
	for(int i=r, j=c; i>=0 && j<N; i--, j++)
		if(board[i][j])
			return 0;
	return 1;
}

bool _nQueen(int row)
{
	if(row == N)
		return 1;
	for(int i=0; i<N; i++)
	{
		if(isPresent(row, i))
		{
			board[row][i] = 1;
			if(_nQueen(row+1))
				return 1;
			board[row][i] = 0;
		}
	}
	return 0;
}

void nQueen()
{	
	if(_nQueen(0))
	{	
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
				printf("%4d",board[i][j]);
			cout << endl;
		}
	}
	else
		cout << "Not Possible!" << endl;
}

int main(void)
{
	nQueen();
	return 0;
}

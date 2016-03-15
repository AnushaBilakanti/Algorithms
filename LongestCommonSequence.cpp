#include<bits/stdc++.h>
using namespace std;

string LCS(string a, string b)
{
	int a_len = a.size();
	int b_len = b.size();
	int store[a_len+1][b_len+1];
	for(int i=0; i<=a_len; i++)
		for(int j=0; j<=b_len; j++)
		{
			if(i==0 || j==0)
				store[i][j] = 0;
			else if(a[i-1] == b[j-1])
				store[i][j] = store[i-1][j-1] + 1;
			else
				store[i][j] = max(store[i-1][j], store[i][j-1]);
		}
	{
		for(int i=0; i<=a_len; i++)
		{
			for(int j=0; j<=b_len; j++)
				cout << store[i][j] << "   ";
			cout << endl;
		}
	}
	string lcs;
	for(int i=a_len, j=b_len; i>0 && j>0;)
	{
		if(a[i-1] == b[j-1])
		{
			lcs.push_back(a[i-1]);
			i--;
			j--;
		}	
		else if(store[i-1][j] > store[i][j-1])
			i--;
		else
			j--;
	}
	reverse(lcs.begin(), lcs.end());
	return lcs;
}

int main(void)
{
	string a = "abadhis";
	string b = "alabama";
	cout << LCS(a, b) << endl;
	return 0;	
}

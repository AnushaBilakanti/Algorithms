#include<iostream>
using namespace std;
int main(void)
{
	int n, i;
	cin >> n;
	int a[n];
	for(i=0; i<n; i++)
		cin >>  a[i];

	//Insertion Sort
	for(i=1; i<n; i++){
		int key = a[i], j;
		for(j=i-1; j>=0 && a[j]>key; j--)
			a[j+1]=a[j];
		a[j+1] = key;
	}	

	for(i=0; i<n; i++)
		cout << a[i] << "  ";
	cout<<endl;
	return 0;
}

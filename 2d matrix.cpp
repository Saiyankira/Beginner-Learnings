#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[2][3],i,j;
	//Inserting the 2d array
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{

		cin >> a[i][j];
		}
	}
	//displaying the 2d array
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << a[i][j];
		}
		cout<<endl;
	}
}


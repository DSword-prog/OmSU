#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int m;
	int a[10000];
	cin>>k;
	int min=1000000;
	int tmp, b, c;
	for (int i=0; i<k; i++)
	{
		cin>>m;
		for (int j=0; j<m; j++)
		{
			cin>>a[j];
		}
		for (int i=0; i<m - 1; i++)
		{
			for (int j=0; j<m; j++)
			{
				if (a[j]>a[j+1])
				{
					tmp = a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
			}
		}
		for (int j=0; j<m; j++)
		{
			if (a[j]-a[j+1]<min)
			{
				min=a[j]-a[j+1];
				b=a[j];
				c=a[j+1];
			}
		}
	}
	cout<<min<<" "<<b<<" "<<c;	
}

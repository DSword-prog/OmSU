#include <bits/stdc++.h>
using namespace std;
const int max_l=100, max_w=100;
int zap(int a[][max_w], int m, int n)
{
	if((m>max_l)||(n>max_w)||(n<0))
	{
		return 1;	
	}
	else
	{
		int b;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				b=i+j;
				a[i][j]=b;
			}
		}
		return 0;
	}
}
int main()
{
	int a[max_l][max_w];
	int m,n;
	int res;
	scanf("%d %d", &m, &n);
	res = zap(a, m, n);
	if (res == 0)
	{
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("ERROR!!!!!!");
	}
}

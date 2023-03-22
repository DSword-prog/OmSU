#include <bits/stdc++.h>
using namespace std;
//m - str, n - stb
const int m=3, n=5;
int main()
{
	int raz;
	float r;
	int i=0, j=0;
	raz=m*n;
	float a[raz];
	srand(time(0));
	for (i; i<raz; i++)
	{
		r=(rand()%100);
		r-=50;
		r*=0.1;
		a[i]=r;
		printf("%5.3f ", a[i]); 
	}
	i=0;
	int st=0, str=0, counter=0;
	for (i; i<n; i++)
	{
		for (j=i; j<m; j+=n)
		{
			if (a[j]<0)
			{
				counter++;
			}
		}
		if (counter>0)
		{
			st++;
		}
		counter=0;
	}
	i=0;
	j=0;
	float sum=0;
	for (i; i<m; i+=n)
	{
		for (j; j<n; j++)
		{
			sum+=a[i+j];
		}
		if (sum>0)
		{
			str++;
		}
		sum=0;
	}
	printf("\n");
	if (str>st)
	{
		printf("str>st  %d > %d", str, st);
	}
	else if(str<st)
	{
		printf("str<st %d < %d", str, st);
	}
	else
	{
		printf("str=st %d = %d", str, st);
	}
}


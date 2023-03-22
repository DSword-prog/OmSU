#include <bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	double a[100][100];
	double c[100];
	int w=3, l=4;
	for (int i=0; i<w; i++)
	{
		for (int j=0; j<l; j++)
		{
			a[i][j]=rand()%100-50*0.01;
		}
		cout<<"\n";
		c[i]=rand()%100-50*0.01;
	}
	int b[w];
	for (int i=0; i<w; i++)
	{	
		for(int j=0; j<l; j++)
		{
			b[i]+=a[i][j]*c[j];	
		} 
	}
	for (int i=0; i<w; i++)
	{
		cout<<b[i]<<" ";
	}
}

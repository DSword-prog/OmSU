#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[10];
	double r, min=100;
	int i = 0;
	srand(time(0));
	for (i; i<10; i++)
	{
		r=(rand()%100);
		r-=50;
		r*=0.1;
		a[i]=r;
		if (a[i]<min)
		{
			min=a[i];
		}
		printf("%5.3lf ", a[i]); 
	}
	printf("\nMIN: %5.3lf ", min);
			
}

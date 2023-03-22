#include <bits/stdc++.h>
using namespace std;
const int Max_raz=100;
int find (double* adr, int raz, double chisl)
{
	if (chisl < adr[0] || chisl>adr[raz])
	{
		return -1;		
	}
	else if (adr == NULL)
	{
		return -2;
	}
	else
	{
		if ((adr[0] <= chisl) && (adr[raz] >= chisl))
		{
			double left = 0, right = raz-1;
			
		}
		
	}		
}
void sort(double *adr, int raz)
{
	for (int i=raz-1; i>0; i--)
	{
		for (int j=0; j<i; j++)
		{
			if (adr[j]>adr[j+1])
			{
				int tmp=adr[j];
				adr[j]=adr[j+1];
				adr[j+1]=tmp;
			}
		}
	}
}
int main()
{
	FILE * pFile;
	int raz;
	printf("Razmer: ");
	scanf("%d", &raz);
	double *adr = new double[Max_raz];
	pFile = fopen ("input.txt", "r");
	for (int i=0; i<raz; i++)
	{
		fscanf(pFile, "%lf",  &adr[i]);	
		printf("%5.3lf\n", adr[i]);
	}
	double iskom;
	printf("Iskom: ");
	scanf ("%lf", &iskom);
	int a;
	sort(adr, raz);
	a=find(adr, raz, iskom);
	if (a!=-1)
	{
		if(a!=-2)
		{
			printf("%d", a);
		}
		else
		{
			printf("WRONG ARRAY!!!");
		}
	}
	else
	{
		printf("NOT FOUND");
	}
	delete [] adr; 		
}

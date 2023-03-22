#include <bits/stdc++.h>
using namespace std;
const int Max_raz=100;
int aver(double a[Max_raz], int raz, double &av)
{
	if ((raz<=0)||(raz>Max_raz))
	{
		return 1;
	}
	else
	{
		int i=0;
		double sum=0, aver=0;
		for (i=0; i<raz; i++)
		{
			sum+=a[i];
		}
		av=sum/raz;
		return 0;
	}
}
int main()
{
	double a[Max_raz];
	int raz, rez;
	scanf("%d", &raz);
	
	double adr;
	for (int i = 0; i<raz; i++)
	{
		scanf("%lf", &a[i]);
	}
	rez=aver(a, raz, adr);
	if(rez==0){
	
	printf("%lf", adr);}
	else printf("ERROR!!!!\n");
}

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
	//	adr=&aver;
		return 0;
	}
}
int main()
{
	double a[Max_raz];
	int raz=20, rez;
	double adr, r;
	for (int i=0; i<raz; i++)
	{
		r=(rand()%100);
		r-=50;
		r*=0.1;
		a[i]=r;
		printf("%5.3f ", a[i]); 
	}
	rez=aver(a, raz, adr);
	if(rez==0){
	
	printf("%lf", adr);}
	else printf("ERROR!!!!\n");
}

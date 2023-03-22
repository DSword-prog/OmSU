#include <iostream>
using namespace std;
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>0 && b>0 && c>0)
	{
		printf("All numbers are positive");
	}
	else
	{
		printf("Not all numbers are positive");
	}
}

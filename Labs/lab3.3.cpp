#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b,c;
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	if (a>b &&  a>c)
	{
		if(a*a==b*b+c*c)
		{
			printf("Pryamougolny");
		}
		else if(a*a>b*b+c*c)
		{
			printf("Tupougolny");
		}
		else
		{
			printf("Ostrougolny");
		}
	}
	else if(b>a && b>c)
	{
		if(b*b==a*a+c*c)
		{
			printf("Pryamougolny");
		}
		else if(b*b>a*a+c*c)
		{
			printf("Tupougolny");
		}
		else
		{
			printf("Ostrougolny");
		}
	}
	else if(c>a && c>b)
	{
		if(c*c==a*a+b*b)
		{
			printf("Pryamougolny");
		}
		else if(c*c>a*a+b*b)
		{
			printf("Tupougolny");
		}
		else
		{
			printf("Ostrougolny");
		}
	}
	else
	{
		printf("Unreal");
	}
}

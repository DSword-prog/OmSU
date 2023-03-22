#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	double a,b,c,m;
	a=sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
	b=sqrt((pow(x3-x2,2)+pow(y3-y2,2)));
	c=sqrt((pow(x1-x3,2)+pow(y1-y3,2)));
	m=0.5*sqrt(2*pow(a,2)+2*pow(b,2)-pow(c,2));
	printf("%f",m);
	
	
}

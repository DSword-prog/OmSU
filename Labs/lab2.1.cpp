#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,m,n,x1,y1,del;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	del=a*d-b*c;
	x1=e*d-f*b;
	y1=a*f-c*e;
	double x,y;
	x=x1/del;
	y=y1/del;
	printf("x=%2.3f , y=%2.3f", x, y);
	
}

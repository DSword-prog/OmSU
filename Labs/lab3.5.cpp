#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	int n;
	double s=0;
	while(n%2==0 || n<=1)
	{
		scanf("%d", &n);
	}
	for (int i=1; i<=n; i+=2)
		{
			s=s+1./(sqrt((n-2)*n));
		}
	printf("%lf",s);
}

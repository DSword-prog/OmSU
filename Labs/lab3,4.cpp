#include <iostream>
using namespace std;
int main()
{
	int b=2, q=3;
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		printf("%d ",b);
		b=b*q;
	}
}

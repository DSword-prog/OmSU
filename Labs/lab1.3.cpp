#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x,y;
	int m,n;
	printf("������� x: \n");
	scanf("%lf",&x);
	printf("������� y: \n");
	scanf("%lf",&y);
	printf("������� ��������� m � n: \n");
	scanf("%d%d", &m, &n);
	printf("1. %*.*lf  2. %*.*lf 3. %*.*lf 4. %*.*lf", m,n, x+y,m,n, x-y, m,n, x*y, m,n, x/y);
	

}

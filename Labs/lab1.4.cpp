#include <iostream>
using namespace std;
int main()
{
	char name [40];
	setlocale(LC_ALL, "Russian");
	printf("��� ��� �����? \n");
	scanf("%s", name);
	printf("%40s", name);

}

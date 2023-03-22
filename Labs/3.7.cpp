#include <bits/stdc++.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char name[80];
	scanf("%s", name);
	printf("***************");
	for(int i = 0; i <= strlen(name)+3;i++) 
	{
	    printf("*");
	}
	printf("\n* Добрый день, %s *", name);

}

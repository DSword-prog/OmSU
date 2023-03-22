// ��� ������ ������ �������� ������ ������ 1 � 6 (�� ������������ ���). � ������ ������ ������� ��������������� ���������
// ������������� � �������� ����������� ���������� � ����� �������������
//
//1. ������ ������� 
//2. ��������� ������� (���� �����  ������ ��� ������ ����) 
//3. �������� ������� 
//4. ���������� �������
//5. ������� ���������
//6. ����� 
#include <bits/stdc++.h>
using namespace std;
const int max_w=20, max_l=20;
double scalar(double tabl[][max_l], double isk[], int w, int l)
{
	double ans[max_w];
	for (int i=0; i<w; i++)
	{
		for (int j=0; j<l; j++)
		{
			ans[i]+=tabl[i][j]*isk[j];
		}
	}
	return *ans;
}

int main()
{
	double ans;
	double table[max_w][max_l];
	double tmpTable[max_w][max_l];
	double isk[max_l];
	int tab_w=0,tab_l=0,tmp_w,tmp_l;
	int choice;
	int counter, index, maxcounter=0;
	srand(time(NULL));
	do
	{
		system("cls");
		printf("\n");
		printf("1. Choose the size \n");
		printf("2. Fill the table \n");
		printf("3. Show the table \n");
		printf("4. Change the table \n");
		printf("5. Show the result \n");
		printf("6. Exit \n");
		printf("\n");
		printf("Choose the option: ");
		scanf("%d", &choice);
		
		if (choice == 1)
		{
			tmp_w=tab_w;
			tmp_l=tab_l;
			do
			{
				printf("Enter the size in format: width length");
				scanf("%d%d", &tab_w, &tab_l);	
			}
			while ((tab_w>max_w) || (tab_l>max_l) || (tab_w=0) || (tab_l=0));	
		}
		if (choice == 2)
		{
			for (int i=0; i<tab_w; i++)
			{
				for (int j=0; j<tab_l; j++)
				{
					table[i][j]=rand()%100-50*0.01;
				}
			}
		}
		if (choice == 3)
		{
			for (int i=0; i<tab_w; i++)
			{
				for (int j=0; j<tab_l; j++)
				{
					printf("%lf ", table[i][j]);
				}
				printf("\n");
			}
			getch();
		}
		if (choice == 4)
		{
			for (int i=0; i<tab_w; i++)
			{
				counter=0;
				for (int j=0; j<tab_l; j++)
				{
					if(table[i][j]<0)
					{
						counter++;
					}
				}
				if (counter>maxcounter)
				{
					maxcounter=counter;
					index=i;
				}
			}
			for (int i=0; i<tab_l; i++)
			{
				isk[i]=table[index][i];
			}
			ans = scalar(table,isk,tab_w,tab_l);
		}
		if (choice == 5)
		{
			for (int i=0; i<tab_l; i++)
			{
				printf("%lf", &ans);
			}
		}
	}
	while (choice!=6);
}

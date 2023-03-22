#include <bits/stdc++.h>
using namespace std;
int main()
{
	fstream file;
	file.open("test.txt");
	srand(time(NULL));
	int size;
	double chisl;
	size = 1 + (rand()%10);
	for (int i=0; i<size; i++)
	{
		chisl = (double)(rand()%1000-500)*0.1;
		file <<chisl<<" ";
	}
	file.close();
}

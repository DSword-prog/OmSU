#include <iostream>
using namespace std;

class matrix
{
	private:
		double** mas;
		int str;
		int stlb;
	public:
		void setmas(double** mass)
		{
			mas = mass;
		}
		void setStr (int temp_str)
		{
			str = temp_str;
		}
		void setStlb (int temp_stlb)
		{
			stlb = temp_stlb;
		}
		double generate(int m, int n)
		{
			double** mass = new double *[m];
			for(int i=0; i<n; i++)
			{
				mass[i] = new double[n];
			}
		}
		double change (int i, int j)
		{
			cin>>mas[i][j];
		}
		double getElem(int i, int j)
		{
			return mas[i][j];
		}
		double getStr()
		{
			return str;
		}
		double getStlb()
		{
			return stlb;
		}
};

int main()
{
	for(int i = 0; i < n; i++) 
	{
    	delete [] mass[i];
	}
	delete [] mass;
}

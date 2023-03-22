#include <bits/stdc++.h>
using namespace std;

class matrix
{
	private:
		double** mas;
		int str;
		int stlb;
		void fatal(int b)
		{
			if (b==1)
			{
				cout<<" CONSTR ERROR!!! ";
				exit(1);
			}
			if (b==2)
			{
				cout<<" CHANGE ERROR!!! ";
				exit(1);
			}
			if (b==3)
			{
				cout<<" GET ERROR!!! ";
				exit(1);
			}	
		}
	public:
		matrix(int n,int m)
		{
			if (n<0 || m<0)
			{
				fatal(1);
			}
			str=n;
			stlb=m;
			mas = new double *[n];
			for(int i=0; i<n; i++)
			{
				mas[i] = new double[m];
			}	
		}
		~matrix()
		{
			for(int i = 0; i < str; i++) 
			{
    			delete [] mas[i];
			}
			delete [] mas;	
		}
		void generate(int n, int m)
		{
			if (n<0 || m<0)
			{
				fatal(1);
			}
			mas = new double *[n];
			for(int i=0; i<n; i++)
			{
				mas[i] = new double[m];
			}		
		}
		void destroy()
		{
			for(int i = 0; i < str; i++) 
			{
    			delete [] mas[i];
			}
			delete [] mas;
		}
		void change (int i, int j, double a)
		{
			if(i<0 || j<0 || i>=str || j>=stlb)
			{
				fatal(2);
			}
			mas[i][j]=a;
		}
		double getElem(int i, int j)
		{
			if(i<0 || j<0 || i>=str || j>=stlb)
			{
				fatal(3);
			}
			return mas[i][j];
		}
		int getStr()
		{
			return str;
		}
		int getStlb()
		{
			return stlb;
		}
};

int main()
{
	int n=10,m=15;
	double t;
	matrix test(n,m);
	srand(0);
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			t=0.1*(rand()%100-50);
			test.change(i,j,t);
		}
	}
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			t=test.getElem(i,j);
			cout<<t<<" ";
		}
		cout<<endl;
	}
}

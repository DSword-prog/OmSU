#include <bits/stdc++.h>
using namespace std;
int main()
{
	string stroka;
	cin>>stroka;
	int n;
	n=stroka.length();
	int c=0;
	if(n%2==0)
	{
		for(int i=0; i<n/2; i++)
		{
			if (stroka[i]!=stroka[n-1-i])
			{
				c++;
			}
		}
	}
	else
	{
		for (int i=0; i<((n/2)+1); i++)
		{
			if (stroka[i]!=stroka[n-1-i])
			{
				c++;
			}
		}
	}
	if (c<=1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}


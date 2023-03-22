#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>
using namespace std;
double func(double x, double p)
{
    double znach;
    if (x >= atan(p-2))
    {
        znach = pow(((x*x*x*x+1)/(0.2+(p*p)*(x*x))),1./3);
    }
    else
    {
        znach = (log10(2*M_PI+pow(M_E, abs(p*x))));
    }
    return znach;
}
void zag(double x, int xv, int yv, int column)
{
    int i=0, j=0, k=0;
    if (x>0)
    {
        for (i; i <= column - 1; i++)
        {
            printf("!x");
            for (j; j <= xv; j++)
            {
                printf(" ");
            }
            printf("!y");
            for (k; k <= yv; k++)
            {
                printf(" ");
            }
            j=0;
            k=0;
        }
    }
    else
    {
        for (i; i <= column - 1 ; i++)
        {
            printf("!x");
            for(j; j <= xv; j++)
            {
                printf(" ");
            }
            printf("!y");
            for (k; k <= yv; k++)
            {
                printf(" ");
            }
            j=0;
            k=0;
        }
    }
    printf("!");
    printf("\n");
}
void tabl(int xv , int yv, int column)
{
    int i=0, j=0, k=0;
    for (i; i <= column-1 ; i++ )
    {
        printf("!");
        for (j; j <= xv+1 ; j++)
        {
            printf("-");
        }
        printf("!");
        for (k; k <= yv+1; k++)
        {
            printf("-");
        }
        j=0;
        k=0;
    }
    printf("!");
    printf("\n");
}
int main()
{
    const double x1 = -2.7 , x2 = 2.3 , h = 0.05;
    const int str = 15 , column = 3, xv = 7 , xp = 3 , yv = 13 , yp = 6;
    double p;
    do
    {
        scanf("%lf", &p);
    }
    while (abs(p)>3);
    int page = 1;
    double x, x22, y;
    x = x1;
    x22=x2 + 0.5*h;
    while (x <= x22)
    {
        system("cls");
        printf("                            Table of function values\n");
        printf("                             With parameter %7.3lf\n\n",p);
        printf("PAGE %i \n", page);
        tabl(xv, yv, column);
        zag(x, xv, yv, column);
        for (int i=1; i<=str; i++)
        {
            tabl(xv, yv, column);
            for (int j=1; j<=column; j++)
            {
                y=func(x,p);
                printf("! %*.*lf !  %*.*lf", xv, xp, x, yv, yp, y);
                x=x+h;
            }
            printf("!");
            printf("\n");
        }
        tabl(xv,yv,column);
        printf("TO CONTINUE PRESS ENTER");
        getch();
        page++;
    }

}


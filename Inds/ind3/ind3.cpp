#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

const int maxWidth = 20;
const int maxHeight = 20;

int scalar (double* arr, double isk[maxWidth], int height, int width, double ans[maxWidth])
{
	int i,j;
	int flag = 0;
	int nulls=0;
	for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (arr[i*width+j] == 0)
            {
                nulls++;
            }
        }
    }
	if ((height < 1) || (width < 1) || (height > maxHeight) || (width > maxWidth)) 
	{
		flag = 1;
	}
	else if (nulls == height*width)
	{
		flag = 2;
	}
	for (i=0; i<height; i++)
	{
		for (j=0; j<width; j++)
		{
			ans[i]+=arr[i*width+j]*isk[j];
		}
	}
	return flag;
}


int main()
{
	FILE* input;
    double* arr = new double, tmpArr[maxHeight][maxWidth];
    
    int width = 0, height = 0, tmpWidth, tmpHeight;
    int i = 0, j = 0;
    int globalChoice, localChoice, exitChoice, inChoice;
    int answerCount = 0;
    int flag;
    int counter=0, maxC, index;
    double isk[maxHeight];
    double ans[maxWidth];
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
        scanf("%d", &globalChoice);
        if (globalChoice == 1)
        {
            tmpWidth = width;
            tmpHeight = height;
            do
            {
            	printf("How do you want to enter size of the array? 1 - from file; 2 - manually: ");
            	scanf("%d" , &inChoice);
            	if (inChoice == 1)
            	{
            		//	
				}
				if (inChoice == 2)
				{
					printf("Enter array's size in format height width: ");
                	scanf("%d%d", &height, &width);	
				}
            } 
			while ((width > maxWidth) || (height > maxHeight));
            printf("Are you sure you would like to set size of an array? 1 - yes; 2 - no: ");
            scanf("%d", &localChoice);
            if (localChoice == 2)
            {
                width = tmpWidth;
                height = tmpHeight;
            }
        }

        if (globalChoice == 2)
        {
            for (i = 0; i < height; i++)
            {
                for (j = 0; j < width; j++)
                {
                     tmpArr[i][j] = arr[i*width+j];
                }
            }
            if ((width > 0)&&(height > 0))
            {
                printf("How would you like to set up an array? 1 - random; 2 - manually; 3 - from file: ");
                scanf("%d", &localChoice);
                if (localChoice == 1)
                {
                    for (i = 0; i < height; i++)
                    {
                        for (j = 0; j < width; j++)
                        {
                            arr[i*width+j] = double(rand()%10-5);
                        }
                    }
                }
                if (localChoice == 2)
                {
                    double tmp;
                    printf("\n");
                    for (i = 0; i < height; i++)
                    {
                        for (j = 0; j < width; j++)
                        {
                            scanf("%lf", &tmp);
                            arr[i*width+j] = tmp;
                        }
                        printf("\n");
                    }
                }
                printf("Are you sure you would like to fill the array? 1 - yes; 2 - no: ");
                scanf("%d", &localChoice);
                if (localChoice == 2)
                {
                    for (i = 0; i < height; i++)
                    {
                        for (j = 0; j < width; j++)
                        {
                            arr[i*width+j] = tmpArr[i][j];
                        }
                    }
                }
            } else
            {
                printf("Dimension of array are set up incorrectly. Remember: width > 0 and height > 0\n");
            }
            localChoice = -1;
        }

        if (globalChoice == 3)
        {
            if ((width < 1) || (height < 1))
            {
                printf("Array is not set up\n");
            }
            else
            {
                for (i = 0; i < height; i++)
                {
                    for (j = 0; j < width; j++)
                    {
                        printf("%5.2lf ", arr[i*width+j]);
                    }
                    printf("\n");
                }
                getch();
            }
        }

        if (globalChoice == 4)
        {
            for (i = 0; i<height; i++)
            {
            	counter=0;
            	for (j=0; j<width; j++)
            	{
            		if (arr[i*width+j]<0)
					{
						counter++;	
					}	
				}
				if(maxC<counter)
				{
					maxC=counter;
					index=i;
				}
			}
			for(i=0; i<width; i++)
			{
				isk[i]=arr[index*width+i];
			}
			flag = scalar(arr, isk, height, width, ans);
			if (flag == 0)
			{
				printf("SUCCESSFULLY!!!\n");
			}
			if (flag == 1)
			{
				printf("ARRAY SIZE ERROR!!!\n");
			}
			if (flag == 2)
			{
				printf("ARRAY IS EMPTY!!!");
			}
			getch();
        }
        if (globalChoice == 5)
        {
            for (i=0; i<width; i++)
            {
            	printf("%5.2lf ", ans[i]);
			}
            getch();
        }
        if (globalChoice == 6)
        {
        	printf("Are you sure? 1 - yes 2 - no ");
        	scanf("%d" , exitChoice);
		}
    } while(exitChoice != 1);
    delete [] arr;
}


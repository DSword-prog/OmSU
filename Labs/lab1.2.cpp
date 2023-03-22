#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x=2, y=5;
	printf("-----------------------------\n");
	printf("| № | Выражение | Результат |\n");
	printf("-----------------------------\n");
	printf("| 1. | z=2/5    |     %d     |\n",2/5);
	printf("| 2. | z=2./5   |    %1.1lf    |\n", float(2)/5);
	printf("| 3. | z=2/5.   |    %1.1lf    |\n", 2/float(5));
	printf("| 4. | z=x/5    |%7.1lf    | \n", x/5);
    printf("| 5. | z=x/5.   |%7.1lf    | \n", x/float(5));
    printf("| 6. | z=x/y    |%7.1lf    | \n", x/y);
    printf("| 7. |   z=double(x)/5   | %7.1lf | \n", float(x)/5);
    printf("| 8. |   z=x/double(y)   | %7.1lf | \n", x/float(y));
    printf("| 9. |   z=2%5   | %d | \n", 2%5);
    printf("| 10. |   z=y%x  | %1.f | \n", y%x);

}

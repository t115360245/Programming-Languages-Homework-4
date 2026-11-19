#include <stdio.h>

void printArrary(const int a[][3]);

int main()
{
	int arrary1[2][3] = { {1,2,3},{4,5,6} };
	int arrary2[2][3] = { 1,2,3,4,5 };
	int arrary3[2][3] = { {1,2},{4} };

	printf("Values in arrary1 by row are: \n");
	printArrary(arrary1);

	printf("Values in arrary2 by row are: \n");
	printArrary(arrary2);

	printf("Values in arrary3 by row are: \n");
	printArrary(arrary3);

	return 0;
}

void printArrary(const int a[][3])
{
		int i, j;

		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 2; j++)
				printf("%d", a[i][j]);
			printf("\n");
		}

}




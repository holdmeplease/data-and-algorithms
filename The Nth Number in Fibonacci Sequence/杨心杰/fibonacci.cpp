#include<stdio.h>

int main()
{
	int a, c, d, x, y, z;
	scanf("%d", &a);  //input the number of terms to be calculated
	int* b = new int[a];
	for (c = 0;c < a;c++)  //input term number
	{
		scanf("%d", &b[c]);
		b[c] = (b[c] % 19948);
	}
	for (c = 0;c < a;c++)  //calculate Fibonacci Number
	{
		x = 0;y = 1;z = 1;  //case:term=0
		if (b[c] != 0)   //case:term>0
		{
			for (d = 0;d < b[c] - 1;d++)
			{
				z = (x + y) % 9973;
				x = y;
				y = z;
			}
		}
		else z = 0;
		printf("%d\n", z);
	}
	return 0;
}
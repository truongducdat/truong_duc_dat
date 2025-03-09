#include <stdio.h>


int main()
{
	int a;
	printf("vui long nhap so can kiem tra: \n");
	scanf_s("%d", &a) ;
	if (a > 0)
	{
		printf("day la so duong \n");
	}
	else if(a<0)
	{
		printf("day la so am \n");
	}
	else
	{
		printf("vui long nhap so khac 0 \n");
	}
	return 0;
	
}

#include <stdio.h>


int main()
{
	int n;
	printf("vui long nhap so can kiem tra: \n");
	scanf_s("%d", &n) ;
	if ((n%2)==0)
	{
		printf("day la so chan \n");
	}
	else if((n%2)!=0)
	{
		printf("day la so le \n");
	}
	else
	{
		printf("vui long nhap so khac 0 \n");
	}
	return 0;
	
}

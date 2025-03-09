#include <stdio.h>


int main()
{
	int kwh, level;
	float tongtien = 0;

	printf("Nhap so KWh su dung: ");
	scanf_s("%d", &kwh);
	if (kwh <= 50) level = 1;
	else if (kwh <= 100) level = 2;
	else if (kwh <= 200) level = 3;
	else if (kwh <= 300) level = 4;
	else if (kwh <= 400) level = 5;
	else level = 6;

	switch (level)
	{
		case 1:
			tongtien = kwh * 1678;
			break;
		case 2:
			tongtien = 50 * 1678 + (kwh - 50) * 1734;
			break;
		case 3:
			tongtien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
			break;
		case 4:
			tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
			break;
		case 5:
			tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
			break;
		case 6:
			tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
			break;
		default:
			printf("so kwh khong hop le \n");
			return 1;
	}
	printf("tong tien dien thang nay la: %.0f VND", tongtien);
	return 0;


}
#include <stdio.h>
#include <string.h>

void chuyen_chu_hoa(char str_1[])
{
	for (int i = 0; str_1[i] != '\0'; i++)
	{
		if (str_1[i] >= 'a' && str_1[i] <= 'z')
		{
			str_1[i] -= 32;
		}
	}
}
int main() {
	char str_2[] = "hello world";
	printf("chuoi ky tu truoc khi chuyen: %s\n", str_2);
	chuyen_chu_hoa(str_2);
	printf("chuoi ky tu sau khi chuyen: %s\n", str_2);

	return 0;
}

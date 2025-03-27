#include <stdio.h>
#include<string.h>


int xu_ly_chuoi(char* str_format) {
	char* vi_tri = strstr(str_format, "led_2");
	if (vi_tri != NULL) {
		vi_tri += strlen("led_2: ");
		if (strstr(vi_tri, "on") == vi_tri) {
			return 1;
		}
		else if (strstr(vi_tri, "off") == vi_tri) {
			return 0;
		}
	}
	return -1;

}
int main() {
	char* str = "led_1: on, led_2: off, led_3: on";
	int a = xu_ly_chuoi(str);
	printf("ket qua: %d\n", a);
	return 0;
}

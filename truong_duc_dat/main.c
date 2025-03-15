#include <stdio.h>
#include <string.h>

int dem_so_ky_tu(const char chuoi[]) {
	int dem = 0;
	for (int i = 0; chuoi[i] != '\0'; i++) {
		if (chuoi[i] == ' ') {
			dem++;
		}
	}
	return dem;

}
int main() {
	char str_1[] = "Hello I am Rataturi";
	int so_ky_tu = dem_so_ky_tu(str_1);
	printf("So ky tu space trong chuoi la: %d\n", so_ky_tu);
	return 0;
	
}

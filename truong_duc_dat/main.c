#include<stdio.h>
#include<stdint.h> //thu vien dung de goi kieu du lieu uint16_t
void in_bit_cao_thap(uint16_t so) {
	uint8_t bit_cao = (so >> 8) & (0xFF);
	uint8_t bit_thap = so & (0xFF);

	printf("8 Bit cao: %u (0x%02X)\n", bit_cao, bit_cao);
	printf("8 Bit thap(Byte thap): %u (0x%02X)\n", bit_thap, bit_thap);
}
void main() {
	uint16_t a;
	printf("Nhap so nguyen 16 bit(0-65535): ");
	scanf_s("%hu", &a);//%hu để đọc uint16_t

	in_bit_cao_thap(a);
	return 0;
}
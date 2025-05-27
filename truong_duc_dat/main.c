#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

smartHome_t pair_data(const char* data) {
	smartHome_t thietbi = { '0','0','0' }; // default: off
											//// strstr: dùng để tìm một chuỗi con trong một chuỗi lớn hơn			
					
	const char* light_position = strstr(data, "\"light\"");
	if (light_position && strstr(light_position, "\"on\""))
		thietbi.light = '1';

	const char* fan_position = strstr(data, "\"fan\"");
	if (fan_position && strstr(fan_position, "\"on\""))
		thietbi.fan = '1';

	const char* motor_position = strstr(data, "\"motor\"");
	if (motor_position && strstr(motor_position, "\"on\""))
		thietbi.motor = '1';

	return thietbi;
}

int main()
{
	const char* data = "HTTP1.1 200 OK{"
		"\"light\": \"on\","
		"\"fan\" : \"off\","
		"\"motor\" : \"off\"}";

	smartHome_t x = pair_data(data);
	printf("Light: %c\n", x.light);
	printf("Fan  : %c\n", x.fan);
	printf("Motor: %c\n", x.motor);
	return 0;
}

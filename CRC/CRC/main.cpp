#include <string.h>
#include <iostream>
#include <bitset>
#include <stdio.h>
int main(){

	int t, test;
    std::cin>>t;

	for (test = 0; test<t; test++){
		unsigned long hex_li = 0;
		char telele[9];
		std::cin>>telele;
		char binaryPx[33] = { NULL };
		int i, len = strlen(telele);
		for (i = 0; i < len; i++){
			switch (telele[i]){
			case '0': strcat(binaryPx, "0000"); hex_li += (0 * (1 << (4 * (len - i - 1)))); break;
			case '1': strcat(binaryPx, "0001"); hex_li += (1 * (1 << (4 * (len - i - 1)))); break;
			case '2': strcat(binaryPx, "0010"); hex_li += (2 * (1 << (4 * (len - i - 1)))); break;
			case '3': strcat(binaryPx, "0011"); hex_li += (3 * (1 << (4 * (len - i - 1)))); break;
			case '4': strcat(binaryPx, "0100"); hex_li += (4 * (1 << (4 * (len - i - 1)))); break;
			case '5': strcat(binaryPx, "0101"); hex_li += (5 * (1 << (4 * (len - i - 1)))); break;
			case '6': strcat(binaryPx, "0110"); hex_li += (6 * (1 << (4 * (len - i - 1)))); break;
			case '7': strcat(binaryPx, "0111"); hex_li += (7 * (1 << (4 * (len - i - 1)))); break;
			case '8': strcat(binaryPx, "1000"); hex_li += (8 * (1 << (4 * (len - i - 1)))); break;
			case '9': strcat(binaryPx, "1001"); hex_li += (9 * (1 << (4 * (len - i - 1)))); break;
			case 'A': strcat(binaryPx, "1010"); hex_li += (10 * (1 << (4 * (len - i - 1)))); break;
			case 'B': strcat(binaryPx, "1011"); hex_li += (11 * (1 << (4 * (len - i - 1)))); break;
			case 'C': strcat(binaryPx, "1100"); hex_li += (12 * (1 << (4 * (len - i - 1)))); break;
			case 'D': strcat(binaryPx, "1101"); hex_li += (13 * (1 << (4 * (len - i - 1)))); break;
			case 'E': strcat(binaryPx, "1110"); hex_li += (14 * (1 << (4 * (len - i - 1)))); break;
			case 'F': strcat(binaryPx, "1111"); hex_li += (15 * (1 << (4 * (len - i - 1)))); break;
			}
		}
		std::cout << hex_li << "\n";
		char * pch = strchr(binaryPx, '1');
		char tablica[10000];
		std::cin >> tablica;
		char *text = tablica;
		int stopien = strlen(pch) - 1;

		unsigned n, k, crc = 0;
		len = strlen(text);
		for (n = len; n > 0; n--) {
			crc ^= (*text++ << 8);
			for (k = 0; k < 8; k++){
				if (crc & (1 << (stopien - 1))){
					crc = (crc << 1) ^ hex_li;
				}
				else{
					crc <<= 1;
				}
			}
		}
		crc = crc & ((1 << (stopien)) - 1);
		printf("%X\n", crc);
	}
	std::cin >> t;
	return 0;
}

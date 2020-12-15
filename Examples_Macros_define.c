#include <stdio.h>
#include <windows.h>
#define PI 3.1415
#define text printf(".:: CONTOH PRA-PREPROCESSOR ::.\n")
#define text1 printf("HI BELAJAR C ITU MUDAH\n")
int main(void){
	float hasil;
	
	hasil = PI * 15 * 2;
	system("color 9");
	printf("",text);
	printf("",text1);
	printf("NILAI PI = 3.1415\n");
	printf("NILAI PI HASIL = PI * 15 * 2\n");
	printf("HASIL : %f", hasil);
	
	return 0;
}

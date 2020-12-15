  #include <stdio.h>
  #define PI 3.14
  #define AREA(x)(PI) * (x) * (x)

  int main(void){
	
	  printf("%f", AREA(10));
	  #undef PI // PI tidak dapat digunakan lagi..
	  return 0;
}

#include <stdio.h>

float bagi(int a, int b){
    float result = (float)a / (float)b;
    return result;
}

void main(){
    printf("Result 100/2 : %.2f\n", bagi(5, 2));
}

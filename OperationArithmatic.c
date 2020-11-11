#include <stdio.h>

void main(){

    // var a, b, result = a + b 
    int a, b, result;
    
    // input user 
    printf("Insert Value A : ");
    scanf("%i", &a);

    printf("Insert Value B : ");
    scanf("%i", &b);

    // result = a + b 
    result = a + b;

    printf("Result a + b : %i\n", result);
  
    // result a * b
    result = a * b;
    printf("Result a * b : %i\n", result);
    
    // result a / b
    result = a / b;
    printf("Result a / b : %i\n", result);
    
    // result a % b 
    result = a % b;
    printf("Result a % b : %i\n", result);
}

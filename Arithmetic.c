#include <stdio.h>

/**Contoh Operator Pemrograman C 
fungsi + penambahan 
fungsi - perkurangan 
fungsi * perkalian 
fungsi / pembagian 
fungsi % menghitung sisa pembagiann
memakai type data integer**/

void main(){
    
    //variable a dan b
    int a, b;
   
    //input nilai a
    printf("Inputkan nilai a: ");
    scanf("%i", &a);
   
    //input nilai b
    printf("Inputkan nilai b: ");
    scanf("%i", &b);
   
    //output operator +-*/%
    printf("Hasil a + b: %i\n", a + b);
    printf("Hasil a - b: %i\n", a - b);
    printf("Hasil a * b: %i\n", a * b);
    printf("Hasil a / b: %i\n", a / b);
    
    

}

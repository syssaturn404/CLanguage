#include <stdio.h>

void main(){

//membuat variable a,b
    int a, b, c;

    printf("Insert Value: ");
    scanf("%i", &a);

    printf("Insert Value:");
    scanf("%i", &b);

/**menjumlahkan value/nilai dari memori tersebut 
Fungsi & adalah mengingat memory dari sebuah variable
Fungsi &i adalah menampilkan bilangan desimal
bisa juga menggunakan &d**/
    c = a + b;

//ini nilai value / output dari sebuah variable tsb 
    printf("Result a + b: %i\n", c);
}

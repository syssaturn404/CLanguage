#include <stdio.h>

void main(){
    int a, b;

    //pengisian nilai dengan operator sama dengan =
    a = 5;
    b = 10;

    // keterangan 
    printf("Nilai Awal a : %d\n", a);
    printf("Nilai Awal b : %d\n", b);
	
    /** pengisian sekaligus pertambahan
    ini sama seperti b = b + a **/
    b += a;
    printf("Hasil b += a adalah %d\n", b);

    /** pengisian sekaligus pengurangan
    ini sama seperti b = b - a **/
    b -= a;
    printf("Hasil b -= a adalah %d\n", b);

     /** pengisian sekaligus perkalian
    ini sama seperti b = b * a **/
    b *= a; 
    printf("Hasil b *= a adalah %d\n", b);

     /** pengisian sekaligus pembagian
    ini sama seperti b = b / a **/
    b /= a; 
    printf("Hasil b /= a adalah %d\n", b);
}

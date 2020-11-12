#include <stdio.h>

void main(){

    char nama[] = "Rajingoding";
    int panjang_nama;

    // menghitung panjang nama
    panjang_nama = strlen(nama);

    printf("Nama : %s\n", nama);
    printf("Panjang : %d karakter\n", panjang_nama);

}

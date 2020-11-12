#include <stdio.h>

void main(){

    // variable
    char ulangi = 'y';
    int counter = 0;
   
    /** mengambil input menggunakan fungsi scanf 
    fungsi %c untuk menampilkan karakter
    satu huruf y/t **/
    do {
        // ambil input
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %s", &ulangi);

        /** increment counter
        increment digunakan untuk 
        menambah satu angka **/ 
        counter++;
    } while(ulangi == 'y' || ulangi == 'Y'); // kondisi

    printf("\n\n----------\n"); // output jika value bernilai false / t
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}


#include <stdio.h>

void main(){
    
    // variable
    char ulangi = 'y';
    int counter = 0;

    // ambil input user
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    }

    // output jika value sudah berakhir 
    printf("\n\n---------------------------\n");
    printf("Perulangan Selesai!\n");
    printf("Anda Telah Mengulang Sebanyak %i kali.\n", counter);
    printf("Terimakasih!\n");
    printf("---------------------------\n");
}

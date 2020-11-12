#include <stdio.h>

void main(){
    
    // variable
    char huruf = 'a';
    char nama[] = "Rajingoding";
    char* hasil;

    // menampilkan char yang ada pada var nama
    printf("Mencari huruf '%c' yang ada \n", huruf);
    
    // mencari huruf
    hasil = strchr(nama, huruf);

    while(hasil != NULL){
        printf("Ditemukan pada baris ke - %d\n", hasil - nama+1);
        hasil = strchr(hasil+1, huruf);
    }
}

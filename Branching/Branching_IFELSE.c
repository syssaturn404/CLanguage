#include <stdio.h>

void main(){
    
    /** membuat array karakter untuk menyimpan password dengan panjang 
    30 karakter, menggunakan Type Data Char kita membuat string 
    sepanjang 30 kata **/
    char password[30];

    // ambil input user
    printf("==== Program Login ====\n");
    printf("Masukan password: ");
    scanf("%s", &password);

    // percabangan if/esle
    // percabangan dua blok kode
    if( strcmp(password, "NgetehAsu") == 0 ){
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}

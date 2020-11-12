#include <stdio.h>

void main(){

    // variable
    char grade;

    // ambil input user
    printf("Inputkan grade: ");
    scanf("%c", &grade);

    /** bentuk percabangan lain if/else/if (switch case)
    menggunakan toupper **/
    switch (toupper(grade)){
        case 'A': // memilih kondisi
            printf("Luar biasa!\n");
            break; // keluar dari program saat case terpenuhi
        case 'B':
        case 'C':
            printf("Bagus!\n");
            break;
        case 'D':
            printf("Anda lulus\n");
            break;
        case 'E':
        case 'F':
            printf("Anda remidi\n");
            break;
        default: // nilai jika case yang dipilih tidak ada / false
            printf("Grade Salah!\n");
    }
}

#include <stdio.h>

void main(){

    int jawaban;
    
    // mengambil input dari scanf
    printf("Berapakah hasil 3+4?\n");
    printf("jawab : ");
    scanf("%d", &jawaban);
    
    // mengambil hasil / output dari scanf
    // guna sama dengan adalah mengambil nilai
    // dan guna ? adalah menentukan true false dalam operator ternary
    printf("Jawaban Kamu: %s\n", (jawaban == 7) ? "Mantab" : "Tingkatkan Lagi");

}

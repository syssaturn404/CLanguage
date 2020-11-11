#include <stdio.h>

int main(){
   
    int nilai;
    char Prestasi;

    printf("=== Program Grade Nilai ===\n");
    printf("Inputkan nilai: ");
    scanf("%i", &nilai);

    // menggunakan percabangan if/esle/if
    if (nilai >= 90) {
        Prestasi = 'A';
    } else if (nilai >= 80) {
        Prestasi = 'B'; // seharusnya B+
    } else if (nilai >= 70) {
        Prestasi = 'B';
    } else if (nilai >= 60) {
        Prestasi = 'C'; // seharusnya C+
    } else if (nilai >= 50) {
        Prestasi = 'C';
    } else if (nilai >= 40) {
        Prestasi = 'D';
    } else if (nilai >= 30) {
        Prestasi = 'E';
    } else {
        Prestasi = 'F';
    }

    printf("Nilai: %i\n", nilai);
    printf("Prestasi anda: %c\n", Prestasi);
    
    return 0;
}

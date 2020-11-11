#include <stdio.h>

    void add_nilai(int *nilai){
        
        // variable untuk add_nilai
        *nilai = nilai + 5;
        
        // output setelah nilai diubah
        // menggunakan pass by reference
        printf("Nilai Diubah Ke : %d\n", *nilai);
     }

    void main(){

        // menentukan referensi pointer sebelum mengubah nilai
        int nilai = 0;

        // nilai sebelum diubah
        printf("Nilai Sebelum Diubah : %d\n", nilai);

        // memanggil fungsi add_nilai
        add_nilai(&nilai);
        add_nilai(&nilai);
        add_nilai(&nilai);
        add_nilai(&nilai);
        add_nilai(&nilai);
        add_nilai(&nilai);
        add_nilai(&nilai);
    }

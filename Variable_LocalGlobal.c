#include <stdio.h>

// variable global
int nilai = 9;

void main(){

    // variabel local
    int nilai = 7;

    /** mencetak variabel
    variable global bisa di akses semua fungsi
    sedang lokal dengan fungsi itu sendiri
    output yang tampil adalah 7 karna kita memanggil dari variable local
    jika ingin memanggil variable global hapus nilai dari variable local tsb **/
    printf("Nilai: %d\n", nilai);
}

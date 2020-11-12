#include <stdio.h>
#include <string.h>

void main(){

    char str[] ="Rajinngoding";
    char * hasil;

    // cari kata "ngoding"
    hasil = strstr(str,"ngoding");

    /** lalu ubah kata "ngoding" menjadi "coly:v"
    menggunakan strncpy **/
    strncpy (hasil, "coly", 7);

    // puts akan menghasilkan line baru
    puts(str);
}

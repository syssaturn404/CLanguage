#include <stdio.h>

void main(){

    char str1[] = "Rajingoding";
    char str2[] = "Kuyngoding";
    int hasil;

    /** membandingkan string
    strcmp untuk membedakan 
    str1 dan str2 **/
    hasil = strcmp(str1, str2);

    if(hasil == 0){ // output ketika nilai sama jika dibandingkan
        printf("str1 dan str2 sama");
    } else { // output ketika nilai tidak sama jika dibandingkan
        puts("str1 dan str2 berbeda ");
    }
}

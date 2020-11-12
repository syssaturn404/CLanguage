#include <stdio.h>

int main(){
    
    // membuat array dari tinggi badan
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    // length itu sama dengan n
    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan); 
    int sum = 0;

    /** menggunakan loop for
    dan increment untuk sum **/
    for(int i = 0; i < length; i++){
        sum += tinggi_badan[i];
    }

    // rata-rata tinggi badan
    float rata_rata = (float)sum / (float)length;

    printf("Rata-rata tinggi badan: %.2f\n", rata_rata);

return 0;
}

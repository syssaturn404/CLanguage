#include <stdio.h>

   void main(){
       
       //mengisi variable nilai dengan type data int
       int nilai[5];
       
           //membuat nilai
           nilai[0] = 10;
           nilai[1] = 20;
           nilai[2] = 30;
           nilai[3] = 40;
           nilai[4] = 50;
           
        /** mengapa cuma 4 ? Karena Array memiliki indeks dari nol
        coba kita cetak **/
        printf("NilaiPertama : %d\n", nilai[0]);
        printf("NilaiKedua : %d\n", nilai[1]);
        printf("NilaiKetiga : %d\n", nilai[2]);
        printf("NilaiKeempat : %d\n", nilai[3]);
        printf("NilaiKelima : %d\n", nilai[4]);
   }

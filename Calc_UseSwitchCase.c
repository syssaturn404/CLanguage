/** Try using the GNU C COMPILER
if you can't use the online tools I provide
and let me know if there is an error **/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <sys\timeb.h>
void kalkulator();
int main(){
	kalkulator();
	return 0;
}
void kalkulator()
{
       int nil_1, nil_2, hasil, utama, menu;
       float nil_3,nil_4,hasilbagi;
awal:
       system("cls");
       printf("TUNGGU ");
       Sleep(500);
       printf(". ");
       Sleep(500);
       printf(". ");
       Sleep(500);
       printf(". ");
       Sleep(500);
       system("cls");
       // awal
       printf("\t =============================\n");
       printf("\t|     KALKULATOR SEDERHANA    |\n");
       printf("\t =============================\n");
       printf("\tMenu :\n");
       printf("\t[1]. PENJUMLAHAN\n");
       printf("\t[2]. PENGURANGAN\n");
       printf("\t[3]. PERKALIAN\n");
       printf("\t[4]. PEMBAGIAN\n");
       printf("\t[5]. KELUAR");
       printf ("\nPilih \t: ");
       scanf("%d", &menu);
       system("cls");
       printf("\t\t==================================\n");
       printf("\t\t====          ISI NILAI       ====\n");
       printf("\t\t==================================\n");
       switch(menu)
              {
                     case 1:
                            printf("\n++++++++ Penjumlahan ++++++++\n");
                            printf("Masukan Nilai Pertama \t: ");
                            scanf("%d", &nil_1);
                            printf("Masukan Nilai Kedua \t: ");
                            scanf("%d", &nil_2);
                            hasil = nil_1 + nil_2;
                            printf("+++++++++++++++++++++++++++++++\n");
                            printf("Hasil :\t\t\t   %d\n", hasil);
                            printf("+++++++++++++++++++++++++++++++\n");
                            Sleep(3000);
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            goto awal;
                     case 2:
                            printf("\n-------- Pengurangan --------\n");
                            printf("Masukan Nilai Pertama \t: ");
                            scanf("%d", &nil_1);
                            printf("Masukan Nilai Kedua \t: ");
                            scanf("%d", &nil_2);
                            hasil = nil_1 - nil_2;
                            printf("------------------------------- -\n");
                            printf("Hasil :\t\t\t   %d\n", hasil);
                            printf("------------------------------- -\n");
                            Sleep(3000);
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            goto awal;
                     case 3:
                            printf("\nxxxxxxxxx Perkalian xxxxxxxxx:\n");
                            printf("Masukan Nilai Pertama \t: ");
                            scanf("%d", &nil_1);
                            printf("Masukan Nilai Kedua \t: ");
                            scanf("%d", &nil_2);
                            hasil = nil_1 * nil_2;
                            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                            printf("Hasil :\t\t\t   %d\n", hasil);
                            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                            Sleep(3000);
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            goto awal;
                     case 4:
                            printf("\n///////// Pembagian /////////\n");
                            printf("Masukan Nilai Pertama \t: ");
                            scanf("%f", &nil_1);
                            printf("Masukan Nilai Kedua \t: ");
                            scanf("%f", &nil_2);
                            hasilbagi = nil_1 / nil_2;
                            printf("////////////////////////////// \n");
                            printf("Hasil :\t\t\t   %.2f\n", hasilbagi);
                            printf("////////////////////////////// \n");
                            Sleep(3000);
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            system("cls");
                            printf("BACK TO THE BEGINNING");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            goto awal;
                            break;
                     case 5:
                            system("cls");
                            printf("Anda Akan Keluar Dari Program Ini !");
                            system("pause");
                            system("cls");
                            printf("LOADING ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            system("cls");
                            printf("LOADING ");
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            printf(". ");
                            Sleep(500);
                            system("cls");
                            printf("Anda Akan Keluar Dari Program Ini !");
                            Sleep(1000);
                            system("cls");
                            printf("Hati-Hati Dijalan ^-^");
                            Sleep(500);
                            break;
                     default:
                            printf("\nInput Tidak Diterima !");
                            goto awal;
              }
}

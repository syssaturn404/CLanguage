#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <sys\timeb.h>
void tictac();
int main(){
    tictac();
    return 0;
}
void tictac()
{
       int gil,p,kot,bar,kol,win;
awal:
       {
              win=0;
              char b[3][3]= {{'1','2','3' },{'4','5','6' },{'7','8','9' } };

              for(gil=0; gil<9 && win==0; gil++)
                     {
                            system("cls");
                            printf(" >>>  %d  <<<\n",gil+1);

                            printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
                            printf(" ---+---+---\n");
                            printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
                            printf(" ---+---+---\n");
                            printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);

                            p=gil%2+1;
                            printf("\n*Player %d",p);

                            do
                                   {
                                          printf("\n Masukkan Kotak Yang Anda Pilih : ");
                                          scanf("%d",&kot);

                                          if(kot>=1 && kot<=3)
                                                 {
                                                        bar=0;
                                                        kol=kot-1;
                                                 }
                                          else if(kot>=4 && kot<=6)
                                                 {
                                                        bar=1;
                                                        kol=kot-4;
                                                 }
                                          else
                                                 {
                                                        bar=2;
                                                        kol=kot-7;
                                                 }
                                   }
                            while(kot<1 || kot>9 || b[bar][kol]=='X' || b[bar][kol]=='O');

                            if(p==1)
                                   {
                                          b[bar][kol]='X';
                                   }
                            else
                                   {
                                          b[bar][kol]='O';
                                   }

                            for(bar=0; bar<3; bar++)
                                   {
                                          if(b[bar][0]==b[bar][1] && b[bar][1]==b[bar][2])
                                                 {
                                                        win=p;
                                                 }
                                   }
                            for(kol=0; kol<3; kol++)
                                   {
                                          if(b[0][kol]==b[1][kol] && b[1][kol]==b[2][kol])
                                                 {
                                                        win=p;
                                                 }
                                   }
                            if(b[0][0]==b[1][1] && b[1][1]==b[2][2])
                                   {
                                          win=p;
                                   }
                            else if(b[0][2]==b[1][1] && b[1][1]==b[2][0])
                                   {
                                          win=p;
                                   };

                     }
              system("cls");
              printf(" ==Selesai==\n");

              printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
              printf(" ---+---+---\n");
              printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
              printf(" ---+---+---\n");
              printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);

              if(win!=0)
                     {
                            printf("\n =Player %d!=\n >>>>win<<<<\n",win);
                     }
              else
                     {
                            printf("\n >>>Seri!<<<\n");
                     }
              printf("\n1 UNTUK DUEL ULANG, DAN 0 UNTUK KELUAR: ");
              scanf("%d, &ulang");
              switch(getche())
                     {
                            case 1:
                                   system("cls");
                                   printf("Sedang Memuat Permainan ");
                                   Sleep(500);
                                   printf(". ");
                                   Sleep(500);
                                   printf(". ");
                                   Sleep(500);
                                   printf(". ");
                                   system("cls");
                                   printf("Sedang Memuat Permainan ");
                                   Sleep(500);
                                   printf(". ");
                                   Sleep(500);
                                   printf(". ");
                                   Sleep(500);
                                   printf(". ");
                                   goto awal;
                            case 0:
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
                                   printf("Hati-Hati Dijalan ^-^");
                                   Sleep(500);
                                   break;
                     }
       }
}

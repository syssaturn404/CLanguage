#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
void menu();
void tambah_mhs();
void tampil_mhs();
void edit_mhs();
void hapus_mhs();
void cari_mhs();
void close();
void header();
void statistik_nilai();
void tampil_sort();
void owner();
void table();
void tictac();
struct DATA {
	char nama[30];
	int umur,id;
	char jk[30];
	float nilai[5];
	int total;
	
}tambah,cek,hapus,sort[100],temp;

char index[2];
struct date{
	int tgl;
	int bln;
	int thn;
};
int main()
{
	system("cls");
		printf("Now Loading");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
	menu();
	return 0;
}
void menu(){
	int pilih;
	menu:
		system("cls");
		header();
		printf("MAIN MENU ::");
		printf("\n[1]. Tambah Nilai Dan Data Mahasiswa");
		printf("\n[2]. Tampil Data Mahasiswa");
		printf("\n[3]. Cari Data Lengkap Mahasiswa");
		printf("\n[4]. Hapus Data Mahasiswa");
		printf("\n[5]. Edit Data Mahasiswa");
		printf("\n[6]. Statistik Nilai");
		printf("\n[7]. Menampilkan Total Nilai ASCENDING Dan DESCENDING");
		printf("\n[8]. Keluar ");	
		printf("\n[9]. Owner Program");
		printf("\n[10]. Program Lainnya ");
		printf("\n[11]. GAME TICTACTOE");
		printf("\n\nInput Pilihan Nomor Menu : ");
		scanf("%d", &pilih);
		switch(pilih){
			case 1:tambah_mhs();
				break;
			case 2:tampil_mhs();
				break;
			case 3: cari_mhs();
				break;	
			case 4:hapus_mhs();
				break;
			case 5:edit_mhs();
				break;
			case 6:statistik_nilai();
				break;
			case 7:tampil_sort();
				break;
			case 8:close();
				break;
			case 9:owner();
				break;
			case 10:table();
				break;
			case 11:tictac();
				break;
			default:printf("\nInput Tidak Diterima !");
				getche();
				goto menu;
		}
}
void tambah_mhs(){
	FILE *ptr,*ptr1;
	int count=0;
	
	ptr =fopen("mahasiswa.txt","a");
		system("cls");
		ptr1 =fopen("mahasiswa.txt","r");
		while (fscanf (ptr1,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF)
		{
			tambah.id++;	
		}
		cek.id = tambah.id;
		fclose(ptr1);
		printf ("Masukan Nama Mahasiswa : ");fflush(stdin);
		scanf ("%[^\n]",tambah.nama);
		printf ("Masukan KK Mahasiswa : ");fflush(stdin);
		scanf ("%[^\n]",tambah.jk);
		printf ("Masukan Umur Mahasiswa : ");fflush(stdin);
		scanf ("%d",&tambah.umur); 
		printf("Nilai UTS\t: ");
		scanf("%f",&tambah.nilai[0]);
		printf("Nilai Tugas\t: ");
		scanf("%f",&tambah.nilai[1]);
		printf("Nilai Kuis\t: ");
		scanf("%f",&tambah.nilai[2]);
		printf("Nilai UAS\t: ");
		scanf("%f",&tambah.nilai[3]);
		tambah.nilai[4]=(tambah.nilai[0]+tambah.nilai[1]+tambah.nilai[2]+tambah.nilai[3])/4;
		tambah.total = tambah.nilai[4];
		fprintf(ptr,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
		fclose(ptr);
	
		printf("\n\nData Mahasiswa Sudah Disimpan !");
		add_invalid:
		printf("\n\n\t1 UNTUK KEMBALI DAN 0 UNTUK KELUAR : ");
		switch(getch()){
    		case '1': menu();
        		break;
        	case '0': close();
        		break;
        	default:printf("\nInput Tidak Diterima !");
        		getche();
        		goto add_invalid;
 		}
}
void index_nilai(){
	if(tambah.nilai[4]>85 && tambah.nilai[4]<=100){
		strcpy(index, "A");
	}
	else if(tambah.nilai[4]>75 && tambah.nilai[4]<=85){
		strcpy(index, "B+");
	}
	else if(tambah.nilai[4]>65 && tambah.nilai[4]<=75){
		strcpy(index, "B");
	}
	else if(tambah.nilai[4]>55 && tambah.nilai[4]<=65){
		strcpy(index, "C+");
	}
	else if(tambah.nilai[4]>45 && tambah.nilai[4]<=55){
		strcpy(index, "C");
	}
	else if(tambah.nilai[4]>30 && tambah.nilai[4]<=45){
		strcpy(index, "D");
	}
	else if(tambah.nilai[4]>0 && tambah.nilai[4]<=30){
		strcpy(index, "E");
	}
}

void tictac()
{
    int gil,p,kot,bar,kol,win;
    char ulang = '1';
   
    while(ulang=='1'){
        win=0;
        char b[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
   
        for(gil=0; gil<9 && win==0; gil++){
            system("cls");
            printf(" >>>  %d  <<<\n",gil+1);
       
            printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
            printf(" ---+---+---\n");
            printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
            printf(" ---+---+---\n");
            printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);
       
            p=gil%2+1;
            printf("\n*Player %d",p);
       
            do{
                printf("\n Masukkan Kotak Yang Anda Pilih : ");
                scanf("%d",&kot);
           
                if(kot>=1 && kot<=3){
                    bar=0;
                    kol=kot-1;
                }else if(kot>=4 && kot<=6){
                    bar=1;
                    kol=kot-4;
                }else{
                    bar=2;
                    kol=kot-7;
                }
            }while(kot<1 || kot>9 || b[bar][kol]=='X' || b[bar][kol]=='O');
       
            if(p==1){
                b[bar][kol]='X';   
            }else{
                b[bar][kol]='O';
            }
       
            for(bar=0; bar<3; bar++){
                if(b[bar][0]==b[bar][1] && b[bar][1]==b[bar][2]){
                    win=p;
                }
            }
            for(kol=0; kol<3; kol++){
                if(b[0][kol]==b[1][kol] && b[1][kol]==b[2][kol]){
                    win=p;
                }
            }
            if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
                win=p;
            }
            else if(b[0][2]==b[1][1] && b[1][1]==b[2][0]){
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
   
        if(win!=0){
            printf("\n =Player %d!=\n >>>>win<<<<\n",win);
        }else{
            printf("\n >>>Seri!<<<\n");
    }
        printf("\n1 UNTUK DUEL ULANG : ");
        scanf("%d, &ulang");
		}
    }

void table(){
int i, brng, pmbyr, kmbl, k2, hrg[100], jmlh[100], tsh=0, ttlhrg[100],tshd; 
       char nama[100][30], p[5];       
    system("cls");
	printf("Now Loading");
	Sleep(500);
	printf(". ");
	Sleep(500);
	printf(". ");
	Sleep(500);
	printf(". ");
	Sleep(500);
	printf(". ");
	Sleep(500);
	printf(". ");
	  system("cls");
      printf("\t\t\t===========================================\n");
      printf("\t\t\t|                RRRRRRRRRR                |\n");
      printf("\t\t\t|                RRR       RR              |\n");
      printf("\t\t\t|                RRR       RR              |\n");
      printf("\t\t\t|                RRRRRRRRR                 |\n");
      printf("\t\t\t|                RRR      RRR              |\n");
      printf("\t\t\t|                RRR        RR             |\n");
      printf("\t\t\t|                RRR        RRR            |\n");
      printf("\t\t\t-------------------------------------------\n");
      printf("\t\t\t================= RIDWAN ================\n");
      printf("\t\t\t-------------------------------------------\n");
      printf("\t\t\t|           PROGRAM STRUK TOKO             |\n");
      printf("\t\t\t-------------------------------------------\n");
    
      awal://LABEL"awal"
      printf("\t\t\t Masukkan banyak barang: ");
      scanf("%i",&brng);   
      for(i=1; i<=brng; i++)
     {
        printf("\t\t\t Masukkan nama barang ke-%i\t: ",i);
        scanf("%s", &nama[i]);
        printf("\t\t\t Masukkan harga per barang\t: Rp. ");
        scanf("%i",&hrg[i]); 
        printf("\t\t\t Masukkan jumlah barang\t: ");
        scanf("%i", &jmlh[i]); 
        printf("\n");
     }
     for(i=1; i<=brng; i++)
     {
        ttlhrg[i]=jmlh[i]*hrg[i]; 
        tsh=tsh+ttlhrg[i];      
     }
      printf("\t\t\t Total harga keseluruhan\t: Rp. %i\n", tsh);
      printf("\t\t\t Masukkan jumlah pembayaran\t: Rp. ");
      scanf("%i", &pmbyr);   
      kmbl=pmbyr-tsh; 
	  system("cls");    
      printf("\t\t\t=========================================\n");
      printf("\t\t\t Daftar belanja anda:\n");
     for(i=1; i<=brng; i++)
     {
       printf("\t\t\t%i. %i buah %s (@ Rp. %i)\t: Rp. %i\n", i, jmlh[i], nama[i], hrg[i], ttlhrg[i]);
     }                   
     if(pmbyr>=tsh)
     {
        printf("\t\t\t\tTotal harga\t\t: Rp. %i\n", tsh);
        printf("\t\t\t\tPembayaran\t\t: Rp. %i\n", pmbyr);
        printf("\t\t\t\tKembalian\t\t: Rp. %i\n", kmbl);
        printf ("\t\t\t|=================================|\n");
     printf ("\t\t\t|          Terimakasih            |\n");
     printf ("\t\t\t|       Telah berbelanja          |\n");
     printf ("\t\t\t|            Di Toko              |\n");
     printf ("\t\t\t|          GABUTERS.COM           |\n");
     }
     else
     {
        k2=-1*kmbl;
        printf("\t\t\tTotal harga\t: Rp. %i\n", tsh);
        printf("\t\t\tPembayaran\t: Rp. %i\n", pmbyr);
        printf("\t\t\tKekurangan\t: Rp. %i\n", k2);
     }
      printf("\t\t\t===================================\n");
      pilih://LABEL "pilih"
      printf("\nUlangi (y/t): ");
      scanf("%s", &p); 
      goto awal;
      if(strcmp(p,"y")==0||strcmp(p,"Y")==0)
     {
        goto awal;          
     }
       else if(strcmp(p,"t")==0||strcmp(p,"T")==0)
     {
        printf("\t\t\t Anda akan keluar dari program ini...\n");
     }
      else
     {
      printf("\t\t\t Masukkan pilihan yang benar...\n");
        goto pilih;            
		}
     }

void owner(){
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
	
	printf("\t\t ===============================\n");
	printf("\t\t|PROGRAM INI DIBUAT MENGGUNAKAN |\n");
	printf("\t\t|     BAHASA PEMROGRAMAN C      |\n");
	printf("\t\t|       OWNER PROGRAM ?         |\n");
	printf("\t\t|  https://wa.me+6289653832960  |\n");
	printf("\t\t ===============================\n");	
	printf("1 UNTUK KE MENU UTAMA,0 UNTUK KELUAR : ");
	switch(getch()){
	case '1': menu();
            		break;
            	case '0': close();
            		break;
            	default:printf("\nInput Tidak Diterima !");
            		getche();
   }  
}
void tampil_mhs()
{
	FILE *view;
	view = fopen("mahasiswa.txt","r");
	int test=0;
	system ("cls");
	printf ("ID\t\tNAMA\t\tKK\t\tUMUR\t\tUTS\t\tTUGAS\t\tKUIS\t\tUAS\t\tRata-Rata\n");
	while (fscanf (view,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF)
	{
		printf("%d\t\t%s\t%s\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
		test++;
	}
	printf ("\nJumlah Data Mahasiswa : %d",test);
	fclose(view);
	
	if(test==0)
	{
		system("cls");
		printf ("\nData Kosong / Tidak Ada ! \n");
	}
	list_invalid:
    printf("\n\n1 UNTUK KEMBALI DAN 0 UNTUK KELUAR : ");
    switch(getch()){
    	case '1': menu();
        	break;
        case '0': close();
        	break;
        default:printf("\nInput Tidak Diterima !");
        	getche();
        	goto list_invalid;
 	}
}
void cari_mhs()
{
	FILE *ptr;
	int test=0;
	system("cls");
	ptr=fopen("mahasiswa.txt","r");
	system("cls");
	printf("Input ID Mahasiswa : ");
	scanf("%d", &cek.id);
	while(fscanf (ptr,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF){
		if(tambah.id==cek.id){
			test=1;
			index_nilai();
			printf ("\nID [%d]",tambah.id);
			printf("\nNama Mahasiswa\t: %s",tambah.nama);
			printf("\nJenis Kelamin\t: %s",tambah.jk);
			printf("\nUmur\t\t: %d",tambah.umur);
			printf("\nNilai UTS\t: %.2f",tambah.nilai[0]);
			printf("\nNilai Tugas\t: %.2f",tambah.nilai[1]);
			printf("\nNilai Kuis\t: %.2f",tambah.nilai[2]);
			printf("\nNilai UAS\t: %.2f",tambah.nilai[3]);
			printf("\nNilai Akhir\t: %.2f",tambah.nilai[4]);
			printf("\nPredikat\t: %s",index);
		}
	}
	fclose(ptr);
	if(test!=1){
		system("cls");
		detail_print:
		printf("\nData tidak ditemukan / Tidak Ada !\a\a\a");
		detail_invalid:
		printf("\n1 UNTUK KEMBALI DAN 0 UNTUK KELUAR :");
        switch(getch()){
            case '0': cari_mhs();
            	break;
            case '1': menu();
            	break;
            case '2': close();
            	break;
            default:printf("\nInput Tidak Diterima !");
            	getche();
            	goto detail_invalid;
        }
	}else{
		detail_valid:
		printf("\n\n\n1 UNTUK KEMBALI DAN 0 UNTUK KELUAR :");
        switch(getch()){
        	case '1': menu();
       			break;
       		case '0': close();
       			break;
       		default:printf("\nInput Tidak Diterima !");
        		getche();
        		goto detail_valid;
       	}	
    }	
	
}
void header() {
    system("cls");
      printf("\t\t\t =========================================\n");
      printf("\t\t\t|  CCCCCC RRRRRR    UU     UU DDDDDDD     |\n");
      printf("\t\t\t| CC     RR    RR   UU     UU DD    DD    |\n");
      printf("\t\t\t| CC     RR    RR   UU     UU DD    DD    |\n");
      printf("\t\t\t| CC     RRRRRR     UU     UU DD    DD    |\n");
      printf("\t\t\t| CC     RR    RR   UU     UU DD    DD    |\n");
      printf("\t\t\t| CC     RR     RR  UU     UU DD    DD    |\n");
      printf("\t\t\t|  CCCCC RR      RR  UUUUUUU  DDDDDDD     |\n");
      printf("\t\t\t -----------------------------------------\n");
      printf("\t\t\t============== GABUTERS.COM ==============\n");
      printf("\t\t\t-------------------------------------------\n");
      printf("\t\t\t|            PROGRAM CRUD MAHASISWA        |\n");
      printf("\t\t\t-------------------------------------------\n");
      
	struct tm *Sys_T;
 
   time_t Tval;
       Tval = time(NULL);
       Sys_T = localtime(&Tval); /* Untuk mendapatkan waktu lokal komputer */
       /* Sys_T = gmtime(&Tval); / / Untuk mendapatkan waktu komputer berbasis GMT/UTC */

       printf("\n-----------------------");
       printf("\n--> Day of Month = %d   ",Sys_T->tm_mday);
       printf("\n--> Month        = %d   ",Sys_T->tm_mon+1);/* Ditambah 1 karena Januari dimulai dari 0 */
       printf("\n--> Year         = %d   ",1900+Sys_T->tm_year);/* Ditambah 1900, karena tahun dimulai dari 1900 */
       printf("\n--> Hour         = %d   ",Sys_T->tm_hour);
       printf("\n--> Minutes      = %d   ",Sys_T->tm_min);
       printf("\n--> Seconds      = %d   ",Sys_T->tm_sec);
       printf("\n--> Day of Week  = %d   ",Sys_T->tm_wday);/*0-6 melambangkan Minggu-Sabtu */
       printf("\n--> Day of Year  = %d   ",Sys_T->tm_yday);
       printf("\n-----------------------\n");
       printf ( "\n\nThe current date/time is: %s", asctime (Sys_T));
       /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
}
void hapus_mhs()
{
	FILE *lama, *baru;
	int test=0;
	lama = fopen("mahasiswa.txt","r");
	baru = fopen("baru.txt","w");
	system("cls");
	printf("Input No. ID Mahasiswa Yang Akan Di Hapus : ");
	scanf("%d", &hapus.id);
	while(fscanf (lama,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF)
	{
		if(tambah.id != hapus.id)
		{
			fprintf(baru,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);	
		}
		else{
			test++;
			printf("\nMahasiswa No ID : %d Dengan Nama : %s\n",tambah.id,tambah.nama);
			printf("\nData Berhasil Dihapus !");
		}
	}
	fclose(lama);
	fclose(baru);
	remove("mahasiswa.txt");
	rename("baru.txt","mahasiswa.txt");
		if(test==0){
            printf("\nData tidak ditemukan !\a\a\a");
            erase_invalid:
            printf("\n0 UNTUK MENCOBA LAGI, 1 MENU UTAMA, 2 KELUAR :");
			switch(getch()){
            	case '0': hapus_mhs();
            		break;
            	case '1': menu();
            		break;
            	case '2': close();
            		break;
            	default:printf("\nInput Tidak Diterima !");
            		getche();
            		goto erase_invalid;
			}
    }
    else{
    	erase_valid:
		printf("\n1 UNTUK MENU UTAMA, 2 UNTUK KELUAR :");
        switch(getch()){
       		case '1': menu();
       			break;
       		case '0': close();
       			break;
       		default:printf("\nInput Tidak Diterima !");
        		getche();
        		goto erase_valid;
        }
    }
	
}
void edit_mhs()
{
	int pilih,test=0;
	FILE *lama,*baru;
	lama = fopen("mahasiswa.txt","r");
	baru = fopen ("baru.txt","w");
	system("cls");
	
	printf ("Masukan ID Mahasiswa : ");
	scanf ("%d",&cek.id);
	while(fscanf (lama,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF)
	{
		if(tambah.id == cek.id)
		{
			test=1;
			ganti:
				printf("\nID : %d Mahasiswa dengan Nama : %s",tambah.id,tambah.nama);
				printf("\n\nPilih Data Yang Akan Dirubah : ");
				printf("\n[1]. Nama");
				printf("\n[2]. Jenis Kelamin");
				printf("\n[3]. Umur");
				printf("\nInput Pilihan : ");
				scanf("%d",&pilih);
				
				if(pilih == 1)
				{
					printf ("\nMasukan Data Nama Baru : ");fflush(stdin);
					scanf ("%[^\n]",cek.nama);
					strcpy(tambah.nama,cek.nama);
						fprintf(baru,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
					printf ("\nPerubahan Sudah Disimpan !");
				}
				else if (pilih == 2)
				{
					printf("\nMasukan Data Jenis Kelamin L/P : ");fflush(stdin);
					scanf ("%[^\n]",cek.jk);
					strcpy(tambah.jk,cek.jk);
						fprintf(baru,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
					printf ("\nBerhasil Disimpan !");
				}
				else if (pilih == 3)
				{
					printf ("\nMasukan Data Umur Baru : ");
					scanf ("%d",&cek.umur);
					tambah.umur = cek.umur;
					fprintf(baru,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
					printf ("\nBerhasil Disimpan !");
				}
				else{
					printf("\n\nInput Tidak Diterima !");
					getche();
					goto ganti;
				}
		}
		else
		{
			fprintf(baru,"%d;%s;%s;%d;%f;%f;%f;%f;%f\n",tambah.id,tambah.nama,tambah.jk,tambah.umur,tambah.nilai[0],tambah.nilai[1],tambah.nilai[2],tambah.nilai[3],tambah.nilai[4]);
		}
	}

	fclose(lama);
	fclose(baru);
	remove("mahasiswa.txt");
	rename("baru.txt","mahasiswa.txt");
	if(test!=1){   
		system("cls");
        printf("\nData tidak ditemukan / Tidak Ada !\a\a\a");
        edit_invalid:
        printf("\n1 UNTUK KEMBALI DAN 0 UNTUK KELUAR :");
        switch(getch()){
            case '0': edit_mhs();
            	break;
            case '1': menu();
            	break;
            case '2': close();
            	break;
            default:printf("\nInput Tidak Diterima !");
            	getche();
            	goto edit_invalid;
        }
    }
    else{
    	edit_valid:
		printf("\n\n\n1 UNTUK MENU UTAMA, 2 UNTUK KELUAR :");
        switch(getch()){
        	case '1': menu();
        		break;
        	case '0': close();
        		break;
        	default:printf("\nInput Tidak Diterima !");
        		getche();
        		goto edit_valid;
        }
    }
}
void tampil_sort()
{
	system("cls");
	FILE *data;
	int count = 0,i,j,test=0,pil;
	system("cls");
	printf ("MENAMPILKAN TOTAL NILAI ASCENDING DAN DESCENDING\n");
	data=fopen("mahasiswa.txt","r");
	while(fscanf (data,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF) {
		
		sort[count].total = tambah.nilai[4];
		sort[count].id = tambah.id;
		strcpy(sort[count].nama,tambah.nama);
		count++;
		test=1;
	}
	back:
	printf ("\n");
	printf ("1.ASCENDING\n");
	printf ("2.DESCENDING\n");
	printf("\nPilih: ");scanf("%d",&pil);
	
	if(pil==1)
	{
		printf ("ID\tNAMA\t\tTOTAL NILAI\n");
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++)
			{
				if(sort[i].total > sort[j].total)
				{
					temp = sort[j];
					sort[j] = sort[i];
					sort[i] = temp;
				}
			}
		}
		for(i=0;i<count;i++)
		{
			printf("%d\t%s\t%d\n",sort[i].id,sort[i].nama,sort[i].total);
		}
	}
	else if (pil == 2)
	{
		printf ("ID\tNAMA\t\tTOTAL NILAI\n");
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++)
			{
				if(sort[i].total < sort[j].total)
				{
					temp = sort[j];
					sort[j] = sort[i];
					sort[i] = temp;
				}
			}
		}
		for(i=0;i<count;i++)
		{
			printf("%d\t%s\t%d\n",sort[i].id,sort[i].nama,sort[i].total);
		}
	}
	else{
		printf ("INPUT SALAH !\n");
		getch();
		goto back;
	}
	fclose(data);
	if(test==0){
            printf("\nData Tidak Ditemukan / Tidak Ada !\a\a\a");
            erase_invalid:
            printf("\n1 MENU UTAMA, 2 KELUAR, 0 COBA LAGI :");
			switch(getch()){
            	case '0': tampil_sort();
            		break;
            	case '1': menu();
            		break;
            	case '2': close();
            		break;
            	default:printf("\nInput Tidak Diterima !");
            		getche();
            		goto erase_invalid;
			}
    }
    else{
    	erase_valid:
		printf("\n1 UNTUK MENU UTAMA DAN 0 UNTUK KELUAR :");
        switch(getch()){
       		case '1': menu();
       			break;
       		case '0': close();
       			break;
       		default:printf("\nInput Tidak Diterima !");
        		getche();
        		goto erase_valid;
        }
    }


	
}
void statistik_nilai(){
	system("cls");
	FILE *statistik;
	float max[5]={0,0,0,0,0},min[5]={100,100,100,100,100},sum[5]={0,0,0,0,0},avg[5];
	int count = 0,i;
	statistik=fopen("mahasiswa.txt","r");
	while(fscanf (statistik,"%d;%[^;];%[^;];%d;%f;%f;%f;%f;%f\n",&tambah.id,tambah.nama,tambah.jk,&tambah.umur,&tambah.nilai[0],&tambah.nilai[1],&tambah.nilai[2],&tambah.nilai[3],&tambah.nilai[4])!=EOF) {
		count++;
		/*perulangan nilai maximal*/
		for(i=0;i<=4;i++){
			if(max[i] < tambah.nilai[i]){
				max[i] = tambah.nilai[i];
			}
		}
		/*perulangan nilai minimal*/
		for(i=0;i<=4;i++){
			if(min[i] > tambah.nilai[i]){
				min[i] = tambah.nilai[i];
			}
		}
		/*perulangan penghitung jumlah nilai akhir*/
		for(i=0;i<=4;i++){
			sum[i] += tambah.nilai[i];
		}
		/*perulangan penghitung rata-rata*/
		for(i=0;i<=4;i++){
			avg[i]=sum[i]/count;
		}
	}
	printf("=============================================================");	
	printf("\nTerbesar\tUTS\tTugas\tKuis\tUAS\tNilai Akhir");
	printf("\nNilai\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",max[0],max[1],max[2],max[3],max[4]);
	printf("\n=============================================================");	
	printf("\nTerkecil\tUTS\tTugas\tKuis\tUAS\tNilai Akhir");
	printf("\nNilai\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",min[0],min[1],min[2],min[3],min[4]);
	printf("\n=============================================================");	
	printf("\nRata-rata\tUTS\tTugas\tKuis\tUAS\tNilai Akhir");
	printf("\nNilai\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",avg[0],avg[1],avg[2],avg[3],avg[4]);
	printf("\n=============================================================");	
	
	fclose(statistik);
	
	printf("\n\n1 UNTUK KEMBALI DAN 0 UNTUK KELUAR : ");
	list_invalid:
    switch(getch()){
    	case '1': menu();
        	break;
        case '0': close();
        	break;
        default:printf("\nInput Tidak Diterima !");
        	getche();
        	goto list_invalid;
 	}

}

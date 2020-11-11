#include <stdio.h>

void main () {
   
   // membuat variable 
   char name[50], web_address[50];

   // ini output dari variable name
   printf("Nama: ");
   gets(name);
   
   // value / nilai / output dari variable web_address
   printf("Alamat web: ");
   gets(web_address);

   /** ini value / nilai dari variable web_address & name
   fungsi %s untuk menampilkan string dan \n untuk 
   membuat baris baru **/
   printf("You entered: %s\n", name);
   printf("Web address: %s\n", web_address);

}

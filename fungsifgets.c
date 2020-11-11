#include <stdio.h>

/**Fungsi fgets() lebih aman dibandingkan gets()
karena kita bisa menentukan ukuran buffer dan sumber inputan.**/

int main(){
    //membuat variable 
    char name[50], email[50];
    
    // value dari variable name 
    printf("Nama: ");
    fgets(name, sizeof(name), stdin);
    
    // value dari variable email 
    printf("Email : ");
    fgets(email, sizeof(email), stdin);
   
   //value dari variable name dan email
    printf("\n-------------------------\n");
    printf("Nama anda: %s", name);
    printf("Alamat email: %s", email);
    printf("\n-------------------------\n");
    return 0;
}

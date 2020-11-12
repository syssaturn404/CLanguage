
#include <stdio.h> 
  
   void main(){
    
   // isi asli array 
   char abjad[5] = {'a','b','c','d','e'};
 
   // setelah dirubah   
   abjad[4] = 'z';
    
   // mencetak isi array 
   printf("Huruf : %c\n", abjad[4]);
}

#include <stdio.h>
void main(){
    
    /** nilai a true 
    dan nilai b false 
    true = 1 false = 0 dalam operator c **/
    
    int a = 1; // true
    int b = 0; // false
    
    // keterangan
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // logika AND
    printf("a && b = %i\n", a && b);

    // logika OR
    printf("a || b = %i\n", a || b);

    // logika NOT
    printf("!a = %i\n", !a);
}


#include <stdio.h>

int main(void)
{
    // membuat var
    int N;
    
    // ambil input user
    printf("Masukkan Bilangan Bulat : ");
    scanf("%d", &N);

    // bagian kondisi
    if(N >=0 && N <= 100)
    {
            if(N <= 50)
            {
                  printf("Nilai N kurang dari sama dengan 50 ");
            }
            else // false
            {
                  printf("Nilai N lebih dari 50");
            }
    }
    else // false
    {
        printf("N bilangan negatif atau lebih dari 100");
    }
    return 0;
}


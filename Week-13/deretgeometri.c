#include <stdio.h>
#include <stdlib.h>
#include "rumus.h"

int main()
{
    float a,r,hasil;
    int pilihan,n;

    printf("Selamat Datang di Program Deret Geometri\n");
    printf("Pilih '1' jika rasio > 1\n");
    printf("Pilih '2' jika rasio < 1\n");
    printf("Masukkan pilihan Anda = ");
    scanf("%d",&pilihan);
    printf("\nMasukkan nilai awal (a) = ");
    scanf("%f",&a);
    printf("Masukkan besar rasio (r) = ");
    scanf("%f",&r);
    printf("Masukkan jumlah data yang dicari (n) = ");
    scanf("%d",&n);

    if(pilihan==1){
        hasil=bagi(kali(a,(pangkat(r,n)-1)),(r-1));
    }
    else if(pilihan==2){
        hasil=bagi(kali(a,(1-pangkat(r,n))),(1-r));
    }
    else if(pilihan>2){
        printf("Pilihan yang Anda masukkan tidak ada");
    }
    printf("Jumlah %d bilangan pertama yang Anda cari adalah %f",n,hasil);
    return 0;
}

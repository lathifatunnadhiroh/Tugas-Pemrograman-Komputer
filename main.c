#include <stdio.h>
#include <stdlib.h>
#include "output.h"
#include "rumus.h"

int main()
{
    int pilihan,n,i;
    float a,b,r,hasil,*ptr;
    ptr=&hasil;

    printf("Selamat Datang di Program Barisan");
    garis();
    printf("Jenis barisan apa yang Anda perlukan??\n");
    printf("Masukkan angka '1' jika Anda memilih Barisan Aritmatika\n");
    printf("Masukkan angka '2' jika Anda memilih Barisan Geometri\n");
    printf("\nMasukkan pilihan Anda : ");
    scanf("%d",&pilihan);

    if (pilihan==1){
        garis();
        printf("Anda memilih Barisan Aritmatika\n");
        printf("\nMasukkan nilai awal (a) = ");
        scanf("%f",&a);
        printf("Masukkan besar beda antar suku (b) = ");
        scanf("%f",&b);
        printf("Masukkan letak suku yang dicari (n) = ");
        scanf("%d",&n);
        hasil=a+kali(n-1,b);
        printf("Nilai suku ke-%d yang Anda cari adalah %f",n,hasil);
        garis();
        option(n);
        printf("\nMasukkan pilihan Anda : ");
        scanf("%d",&pilihan);
        if (pilihan==1){
            for(i=1;i<=n;i++){
              *ptr=a+kali(i-1,b);
              printf("\nNilai suku ke-%d = %f",i,hasil);
            }
        }
        else if (pilihan==2){
            selesai();
        }
        else{
            error();
        }
    }
    else if (pilihan==2){
        garis();
        printf("Anda memilih Barisan Geometri\n");
        printf("\nMasukkan nilai awal (a) = ");
        scanf("%f",&a);
        printf("Masukkan besar rasio antar suku (r) = ");
        scanf("%f",&r);
        printf("Masukkan letak suku yang dicari (n) = ");
        scanf("%d",&n);
        hasil=kali(a,pangkat(r,n-1));
        printf("\nNilai suku ke-%d yang Anda cari adalah %f\n",n,hasil);
        garis();
        option(n);
        printf("\nMasukkan pilihan Anda : ");
        scanf("%d",&pilihan);
        if (pilihan==1){
            for(i=1;i<=n;i++){
              *ptr=kali(a,pangkat(r,i-1));
              printf("\nNilai suku ke-%d = %f",i,hasil);
            }
        }
        else if (pilihan==2){
            selesai();
        }
        else{
            error();
        }
    }
    else{
        error();
    }
    return 0;
}

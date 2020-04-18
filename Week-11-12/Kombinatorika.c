#include <stdio.h>
#include <stdlib.h>
#include "Rumus.h"

int main()
{
    //variable
    int pilihan,n,r,i,a,b,c,k,p,s;

    printf("Selamat Datang di Program Kombinatorika\n");
    printf("Masukkan pilihan Anda!\n");
    printf("ketik '1' jika Anda memilih Kombinasi\n");
    printf("ketik '2' jika Anda memilih Permutasi\n");
    printf("ketik '3' jika Anda memilih Permutasi Siklis\n");

    //input pilihan
    printf("Pilihan Anda : ");
    scanf("%d",&pilihan);

    //branching
    if (pilihan==1){
        printf("\nKOMBINASI\n");
        printf("Masukkan nilai n = ");
        scanf("%d",&n);
        printf("Masukkan nilai r = ");
        scanf("%d",&r);
        if (r<=n){
            a=faktorial(n);//import rumus faktorial dari file header "Rumus" yg memakai looping
            b=faktorial(n-r);
            c=faktorial(r);
            k=bagi(a,kali(b,c));
            printf("Hasil Kombinasi %d dari %d adalah %d",r,n,k);
        }
        else if(r>n){
            printf("Nilai r tidak boleh melebihi n");
        }
    }
    else if (pilihan==2){
        printf("\nPERMUTASI\n");
        printf("Masukkan nilai n = ");
        scanf("%d",&n);
        printf("Masukkan nilai r = ");
        scanf("%d",&r);
        if (r<=n){
            a=faktorial(n);
            b=faktorial(n-r);
            p=bagi(a,b);
            printf("Hasil Permutasi %d dari %d adalah %d",r,n,p);
        }
        else if (r>n){
            printf("Nilai r tidak boleh melebihi n");
        }
    }
    else if (pilihan==3){
        printf("\nPERMUTASI SIKLIS\n");
        printf("Masukkan nilai n = ");
        scanf("%d",&n);
        if (n>=0){
            s=faktorial(n-1);
            printf("Hasil Permutasi Siklis dari %d adalah %d",n,s);
        }
        else if (n<0){
            printf("Nilai yang Anda masukkan tidak valid");
        }
    }
    return 0;
}

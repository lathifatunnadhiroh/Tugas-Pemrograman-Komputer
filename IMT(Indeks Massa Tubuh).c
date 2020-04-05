#include <stdio.h>
#include <stdlib.h>
#include "RumusKuadratBagi.h"

int main()
{
    //Variable
    float berat,tinggi,kuadrattinggi,hasil;

    //input data
    printf("Program Kategori IMT (Indeks Massa Tubuh)\n");
    printf("Masukkan Berat Badan Anda (Kg) = ");
    scanf("%f",&berat);
    printf("Masukkan Tinggi Badan Anda (meter) = ");
    scanf("%f",&tinggi);
    printf("\n");

    //Function (use file header RumusKuadratBagi.h)
    kuadrattinggi=kuadrat(tinggi);
    hasil=bagi(berat,kuadrattinggi);

    //Branching
    if (hasil<17){
        printf("Anda termasuk dalam kategori kekurangan berat badan tingkat berat");
    }
    else if (hasil<=18.4){
        printf("Anda termasuk dalam kategori kekurangan berat badan tingkat ringan");
    }
    else if (hasil<=25){
        printf("Anda termasuk dalam kategori berat badan normal");
    }
    else if (hasil<=27){
        printf("Anda termasuk dalam kategori kelebihan berat badan tingkat ringan");
    }
    else if (hasil>27){
        printf("Anda termasuk dalam kategori kelebihan berat badan tingkat berat (Obesitas)");
    }
    return 0;
}

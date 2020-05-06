#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED

void garis(){
printf("\n======================================================\n");
}

void option(int x){
printf("Apakah Anda ingin mengetahui nilai suku ke-1 sampai suku ke-%d?\n",x);
printf("Masukkan '1' jika iya\n");
printf("Masukkan '2' jika tidak\n");
}

void error(){
printf("\nPilihan yang Anda input tidak valid");
}

void selesai(){
printf("\nProgram selesai!!");
}

#endif // OUTPUT_H_INCLUDED

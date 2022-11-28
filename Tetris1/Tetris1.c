/*Nama File 	: Tetris1.c*/
/*Deskripsi 	: Menampilkan susunan karakter '*' berbentuk segitiga siku-siku terbalik*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 18 Maret 2021, jam 19.15.09*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Nilai yang dibaca*/
    int i; /*Counter*/
    int j; /*Counter banyaknya bintang perbaris*/

  /*Algoritma*/
    printf("Masukkan banyaknya susunan yang diinginkan (N) = ");
    scanf("%d", &N);
    if (N>0){
        for (i=N;i>=1;i--){
            for (j=i;j>=1;j--){
                printf("*");
            }
            printf(" --%d",i);
            printf("\n");
        }
    }else{
        printf("Masukan harus lebih dari nol");
    }

  return 0;
}


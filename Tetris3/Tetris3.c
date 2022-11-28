/*Nama File 	: Tetris3.c*/
/*Deskripsi 	: Menampilkan susunan karakter '*' seperti aturan*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 19 Maret 2021, 07.51.52*/

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
        for (i=1;i<=N;i++){
            for (j=1;j<=1.0/2.0*i*(i+1);j++){
                printf("*");
                Sleep(100);
            }
            printf(" --%d",j-1);
            printf("\n");
        }
    }else{
        printf("N harus lebih dari nol");
    }

  return 0;
}


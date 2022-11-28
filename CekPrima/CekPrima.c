/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Mengecek dan menampilkan apakah bilangan prima atau tidak*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 18 Maret 2021, jam 00.24.18*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;/*Bilangan integer yang di cek*/
    int i; /*counter*/
    int faktor; /*Banyaknya faktor*/

  /*Algoritma*/
    printf("=Mengecek dan menampilkan apakah bilangan prima atau tidak=\n");
    printf("===========================================================\n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    if (N>0){
        faktor=0;
        for(i=1;i<=N;i++){
            if (N%i==0){
                faktor=faktor+1;
            }
        }if (faktor==2){
            printf("Bilangan prima");
        }else{
            printf("Bukan bilangan prima");
        }
    }else{
        printf("N harus positif");
    }

  return 0;
}


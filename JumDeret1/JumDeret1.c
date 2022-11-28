/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: menghitung jumlah deret dari deret 1+2+3+4+5+...+N*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 20 Maret 2021, jam 09.43.58*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;/*Banyaknya elemen deret*/
    int i;/*Counter*/
    int JLH;/*Jumlah deret*/

  /*Algoritma*/
    printf("Masukkan panjang deret = ");
    scanf("%d", &N);
    if(N<=0){
        printf("Bilangan harus positif");
    }else{
        JLH=0;
        for (i=1;i<=N;i++){
            JLH=JLH+i;
        }printf("%d",JLH);
    }

  return 0;
}


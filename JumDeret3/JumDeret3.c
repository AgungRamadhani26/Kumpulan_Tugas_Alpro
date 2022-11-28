/*Nama File 	: JumDeret3.c*/
/*Deskripsi 	: Menghitung jumlah deret yang berpola 1-2+3-4+5-...+N*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 20 Maret 2021 10.36.42*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Banyaknya elemen deret*/
    int i; /*Counter*/
    int Sum; /*Jumlah deret*/

  /*Algoritma*/
    printf("Masukkan panjangnya deret = ");
    scanf("%d", &N);
    if (N>0){
        Sum=0;
        for (i=1;i<=N;i++){
            if (i%2==1){
                Sum=Sum+i;
            }else{
                Sum=Sum-i;
            }
        }printf("%d",Sum);
    }else{
        printf("Bilangan harus positif");
    }

  return 0;
}


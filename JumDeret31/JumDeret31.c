/*Nama File 	: JumDeret31.c*/
/*Deskripsi 	: Menghitung jumlah deret yang berpola 1-2+3-4+5-...+N dengan array*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 23 Maret 2021 17.57.13*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Batas elemen deret*/
    int i; /*Counter indeks*/
    int Sum; /*Jumlah deret*/

  /*Algoritma*/
    printf("Masukkan panjangnya deret = ");
    scanf("%d", &N);
    if (N>0){
        printf("Jumlah deret = ");
        int Deret[N];/*Array berukuran N*/
        Sum=0;
        for (i=0;i<N;i++){
            Deret[i]=i+1;
            if (Deret[i]%2==1){
                Sum=Sum+Deret[i];
            }else{
                Sum=Sum-Deret[i];
            }
        }printf("%d",Sum);
    }else{
        printf("Bilangan harus positif");
    }

  return 0;
}


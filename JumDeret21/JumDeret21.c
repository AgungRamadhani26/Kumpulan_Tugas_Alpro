/*Nama File 	: JumDeret21.c*/
/*Deskripsi 	: menghitung jumlah deret yang berpola ganjil 1+3+5+...+(2N-1) dengan array*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 23 Maret 2021,jam 17.55.25*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Batas elemen deret*/
    int i; /*Counter indeks*/
    int SumGanjil; /*Jumlah deret ganjil*/

  /*Algoritma*/
    printf("Masukkan panjangnya deret ganjil = ");
    scanf("%d", &N);
    if (N<=0){
        printf("Panjangnya deret harus positif");
    }else{
        printf("Jumlah deret ganjil = ");
        int Deret[N];/*Array berukuran N*/
        SumGanjil=0;
        for(i=0;i<N;i++){
            Deret[i]=i+1;
            if (Deret[i]%2==1){
                SumGanjil=SumGanjil+Deret[i];
            }
        }printf("%d",SumGanjil);
    }
  return 0;
}


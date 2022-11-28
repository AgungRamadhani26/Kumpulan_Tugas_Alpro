/*Nama File 	: JumDeret11.c*/
/*Deskripsi 	: menghitung jumlah deret yang berpola 1+2+3+4+5+...+N dengan array*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 23 Maret 2021, jam 17.49.16*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Batas elemen deret*/
    int i; /*Counter indeks*/
    int JLH; /*Jumlahan Deret*/

  /*Algoritma*/
    printf("Masukkan banyaknya deret = ");
    scanf("%d", &N);
    if(N<=0){
        printf("Bilangan harus positif");
    }else{
        printf("Jumlah deret = ");
        int Deret[N];/*Array berukuran N*/
        JLH=0;
        for (i=0;i<N;i++){
            Deret[i]=i+1;
            JLH=JLH+Deret[i];
        }printf("%d",JLH);
    }
return 0;
}


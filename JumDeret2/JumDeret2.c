/*Nama File 	: JumDeret2.c*/
/*Deskripsi 	: menghitung jumlah deret yang berpola ganjil 1+3+5+...+(2N-1)*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 20 Maret 2021,jam 10.05.41*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Banyaknya elemen deret*/
    int i; /*Counter*/
    int JLH;/*Jumlahderet ganjil*/

  /*Algoritma*/
    printf("Masukkan panjangnya deret ganjil = ");
    scanf("%d", &N);
    if (N<=0){
        printf("Panjangnya deret harus positif");
    }else{
        JLH=0;
        for(i=1;i<=N;i++){
            if (i%2==1){
                JLH=JLH+i;
            }
        }printf("%d",JLH);
    }

  return 0;
}


/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: Menentukan dan menampilkan jenis segitiga*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 4 Maret 2021, jam 20.31.44*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int a,b,c; /*Sisi segitiga pertama, Sisi segitiga kedua, sisi segitiga ketiga*/

  /*Algoritma*/
    printf("===============================================================\n");
    printf("===========Menentukan dan menampilkan jenis segitiga===========\n");
    printf("===============================================================\n\n");
    printf("Masukkan sisi pertama (a) = ");
    scanf("%d",&a);
    printf("Masukkan sisi Kedua (b) = ");
    scanf("%d",&b);
    printf("Masukkan sisi Ketiga (c) = ");
    scanf("%d",&c);
    if (a>0 && b>0 && c>0){
        if ((a+b>c) && (b+c>a) && (c+a>b)){
            if((a==b) && (b==c) && (c==a)){
                printf("Segitiga Sama Sisi");
            }else if ((a==b) || (c==a) || (b==c)){
                printf("Segitiga Sama Kaki");
            }else {
                printf("Segitiga Sembarang");
            }
        }else{
            printf("Terdapat nilai yang bukan sisi segitiga");
        }
    }else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }printf("\n\n===============================================================");
  return 0;
}


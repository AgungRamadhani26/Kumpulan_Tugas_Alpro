/*Nama File 	: DeretPrima.c*/
/*Deskripsi 	: Mencetak bilangan prima yang dapat dibentuk sampai bilangan N(Mencetak deret Prima)*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 18 Maret 2021, jam 11.50.15*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Nilai yang dibaca*/
    int i; /*Counter*/
    int j; /*Counter*/
    int faktor; /*Banyaknya faktor*/

  /*Algoritma*/
    printf("====================================================================================\n");
    printf("Mencetak bilangan prima yang dapat dibentuk sampai bilangan N (Mencetak deret Prima)\n");
    printf("====================================================================================\n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    if (N>0){
        printf("====================================================================================\n");
        printf("bilangan prima yang dapat dibentuk yaitu = \n");
        for (i=2;i<=N;i++){
            faktor=0;
            for (j=1;j<=i;j++){
                if (i%j==0){
                    faktor=faktor+1;
                }
            }if (faktor==2){
                printf(" %d",i);
            }
        }printf("\n====================================================================================\n");
    }else {
        printf("Nilai N harus lebih dari 0");
    }

  return 0;
}


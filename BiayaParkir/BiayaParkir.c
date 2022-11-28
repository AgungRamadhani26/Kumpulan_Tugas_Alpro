/*Nama File 	: BiayaParkir.c*/
/*Deskripsi 	: Menghitung dan menampilkan besarnya biaya parkir*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 04 Maret 2021, jam 22.24.03*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{ /*Kamus*/
    int LamaParkir; /*Lamanya parkir*/
    int Biaya; /*Total biaya parkir*/

  /*Algoritma*/
    printf("====================================================\n");
    printf("==Menghitung dan menampilkan besarnya biaya parkir==\n");
    printf("====================================================\n\n");
    printf("Masukan lamanya parkir = ");
    scanf("%d", &LamaParkir);
    if (LamaParkir>0){
        if (LamaParkir<=2){
            Biaya=2000;
        }else{
            Biaya=2000+(LamaParkir-2)*500;
        }
    }else{
        printf("Lama parkir harus positif dan tidak boleh nol");
        printf("\n\n====================================================");
        return 0;
    }
    printf("Besarnya biaya parkir = %d",Biaya);
    printf("\n\n====================================================");
  return 0;
}


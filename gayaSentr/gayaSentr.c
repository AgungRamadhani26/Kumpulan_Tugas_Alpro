/*Nama File 	: gayaSentr.c*/
/*Deskripsi 	: Menghitung dan menampilkan gaya sentripetal*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: Kamis, 25 Februari 2021, 12.48.59*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main (){ //Program Utama
/*Kamus*/
    float m; /*(massa, kg)*/
    float V; /*(Kecepatan, meter/detik)*/
    float r; /*(Jari-jari, meter)*/
    float F; /*(Gaya sentripetal, Newton)*/

/*Algoritma*/
    printf("=======================Menghitung Gaya Sentripetal=======================\n");
    printf("*************************************************************************\n\n");
    printf("Masukkan besarnya massa(m) =");
    scanf("%f", &m); /*input*/
    printf("Masukkan besarnya kecepatan(V) =");
    scanf("%f", &V); /*input*/
    printf("masukkan panjangnya jari-jari(r) =");
    scanf("%f", &r); /*input*/
    F=m*V*V/r;
    printf("\n=========================================================================\n");
    printf("Gaya sentripetal(F)=> m x V x V / r = %.2f x %.2f x %.2f / %.2f = %.2f",m,V,V,r,F); /*output*/
    printf("\n=========================================================================\n");


    return 0;
}


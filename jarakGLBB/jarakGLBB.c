/*Nama File 	: jarakGLBB.c*/
/*Deskripsi 	: Menghitung dan menampilkan jarak yang ditempuh benda yang mengalami GLBB*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: Kamis, 25 Februari 2021, 11.19.18*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main (){
/*Kamus*/
    float V0; /*(Kecepatan awal, meter/detik)*/
    float t;  /*(Waktu, detik)*/
    float a;  /*(percepatan, meter/detik kuadrat)*/
    float S;  /*(Jarak, meter)*/

/*Algoritma*/
    printf("==============Menghitung Jarak Dari Gerak Lurus Berubah Beraturan==============\n");
    printf("###############################################################################\n\n");
    printf("Masukkan besarnya kecepatan awal(V0) =");
    scanf("%f", &V0);/*input*/
    printf("Masukkan besarnya waktu(t) =");
    scanf("%f", &t); /*input*/
    printf("Masukkan besarnya percepatan(a) =");
    scanf("%f", &a); /*input*/
    S=(V0*t)+(a*t*t)/2;
    printf("\n==============================================================================\n");
    printf("Jarak(S)=> (V0 x t) + (a x t x t) / 2 = (%.2f x %.2f) + (%.2f x %.2f x %.2f) / 2 = %.2f",V0,t,a,t,t,S); /*output*/
    printf("\n==============================================================================\n");


    return 0;
}


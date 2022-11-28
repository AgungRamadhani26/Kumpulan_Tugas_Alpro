/*Nama File 	: jarakPBola.c*/
/*Deskripsi 	: Menghitung dan menampilkan jarak yang ditempuh benda yang mengalami gerak parabola*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: Kamis, 25 Februari 2021, 12.05.05*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main (){
/*Kamus*/
    float V0; /*(Kecepatan awal, meter/detik)*/
    float t;  /*(Waktu, detik)*/
    float y;  /*(Jarak, meter)*/
    const float g = 9.8; /*(Konstanta gravitasi, meter/detik kuadrat)*/

/*Algoritma*/
    printf("========Menghitung Jarak Yang Ditempuh Benda Yang Mengalami Gerak Parabola========\n");
    printf("********************************************************************************\n\n");
    printf("Masukkan besarnya kecepatan awal(V0) =");
    scanf("%f", &V0); /*input*/
    printf("Masukkan besarnya waktu(t) =");
    scanf("%f", &t); /*input*/
    y=(V0*t)-(g*t*t)/2;
    printf("\n===============================================================================\n");
    printf("Jarak(y)=> (V0 x t) - (g x t x t) / 2 = (%.2f x %.2f) - (%.2f x %.2f x %.2f) / 2 = %.2f",V0,t,g,t,t,y); /*output*/
    printf("\n===============================================================================\n");


    return 0;
}


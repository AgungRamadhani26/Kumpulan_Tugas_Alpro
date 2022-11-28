/*Nama File 	: UpahKerja.c*/
/*Deskripsi 	: Menghitung dan menampilkan upah kerja perminggu*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 06 Maret 2021, jam 09.37.32*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int golongan; /*Golongan pekerja*/
    int jamkerja; /*Lamanya jam kerja per minggu*/
    int upah; /*Upah kerja per minggu*/

  /*Algoritma*/
    printf("=====================================================\n");
    printf("===Menghitung dan menampilkan upah kerja perminggu===\n");
    printf("=====================================================\n\n");
    printf("Masukkan golongan = ");
    scanf("%d", &golongan);
    printf("Masukkan jam kerja = ");
    scanf("%d", &jamkerja);

    if (jamkerja<=40){
        if (golongan==1){
            upah=jamkerja*1000;
        }else if (golongan==2){
            upah=jamkerja*1500;
        }else if (golongan==3){
            upah=jamkerja*2000;
        }else if (golongan==4){
            upah=jamkerja*2500;
        }
    }else{
        if (golongan==1){
            upah=(40*1000)+(jamkerja-40)*1.5*1000;
        }else if(golongan==2){
            upah=(40*1500)+(jamkerja-40)*1.5*1500;
        }else if(golongan==3){
            upah=(40*2000)+(jamkerja-40)*1.5*2000;
        }else if(golongan==4){
            upah=(40*2500)+(jamkerja-40)*1.5*2500;
        }
    }
    printf("Upah perminggu adalah = %d",upah);
    printf("\n\n=====================================================");



  return 0;
}


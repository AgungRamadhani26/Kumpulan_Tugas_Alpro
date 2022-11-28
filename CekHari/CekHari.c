/*Nama File 	: CekHari.c*/
/*Deskripsi 	: Menampilkan nama-nama hari berdasarkan pengecekan nomor hari*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 04 Maret 2021, jam 08.54.55*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int NoHari; /*Nomor hari*/

  /*Algoritma*/
    printf("============================================================\n");
    printf("Menampilkan nama-nama hari berdasarkan pengecekan nomor hari\n");
    printf("============================================================\n\n");
    printf("Masukkan nomor hari = ");
    scanf("%d", &NoHari);
    if (NoHari>=1 && NoHari<=7){
        if (NoHari==1){
            printf("Senin");
        }else if (NoHari==2){
            printf("Selasa");
        }else if (NoHari==3){
            printf("Rabu");
        }else if (NoHari==4){
            printf("Kamis");
        }else if (NoHari==5){
            printf("Jumat");
        }else if (NoHari==6){
            printf("Sabtu");
        }else{
            printf("Minggu");
        }
    }else{
        printf("Masukan nomor hari tidak tepat");
    }printf("\n\n============================================================");

  return 0;
}


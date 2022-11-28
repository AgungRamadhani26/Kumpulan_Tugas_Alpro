/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: Menampilkan nama-nama bulan berdasarkan pengecekan nomor bulan*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 04 Maret 2021, jam 11.43.58 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int NoBulan; /*Nomor bulan*/

  /*Algoritma*/
    printf("==============================================================\n");
    printf("Menampilkan nama-nama bulan berdasarkan pengecekan nomor bulan\n");
    printf("==============================================================\n\n");
    printf("Masukan nomor Bulan = ");
    scanf("%d", &NoBulan);
    if(NoBulan>=1 && NoBulan<=12){
        if (NoBulan==1){
            printf("Januari");
        }else if (NoBulan==2){
            printf("Februari");
        }else if (NoBulan==3){
            printf("Maret");
        }else if (NoBulan==4){
            printf("April");
        }else if (NoBulan==5){
            printf("Mei");
        }else if (NoBulan==6){
            printf("Juni");
        }else if (NoBulan==7){
            printf("Juli");
        }else if (NoBulan==8){
            printf("Agustus");
        }else if (NoBulan==9){
            printf("September");
        }else if (NoBulan==10){
            printf("Oktober");
        }else if (NoBulan==11){
            printf("November");
        }else{
            printf("Desember");
        }
    }else{
        printf("Masukan nomor bulan tidak tepat");
    }printf("\n\n==============================================================");

  return 0;
}

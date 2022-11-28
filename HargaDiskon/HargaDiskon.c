/*Nama File 	: HargaDiskon.c*/
/*Deskripsi 	: Menghitung dan menampilkan harga setelah diskon*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 05 Maret 2021, jam 13.55.45*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    char jenis; /*Jenia barang A,B,c*/
    int harga; /*Harga barang*/

  /*Algoritma*/
    printf("=====================================================\n");
    printf("===Menghitung dan menampilkan harga setelah diskon===\n");
    printf("=====================================================\n");
    printf ("Masukan jenis A,B,C = ");
    scanf("%c", &jenis);
    printf("Masukan harga = ");
    scanf("%d", &harga);

    if (jenis=='A'){
        if (harga>200 && harga<10000){
            harga=harga-(harga*(10.0/100.0));
        }else {
            printf("Tidak mendapat diskon");
            return 0;
        }
    }else if (jenis=='B'){
        if (harga>200 && harga<10000){
            harga=harga-(harga*(15.0/100.0));
        }else {
            printf("Tidak mendapat diskon");
            return 0;
        }
    }else if (jenis=='C'){
        if (harga>200 && harga<10000){
            harga=harga-(harga*(20.0/100.0));
        }else {
            printf("Tidak mendapat diskon");
            return 0;
        }
    }
    printf("Harga setelah diskon = %d",harga);
    printf("\n\n=====================================================");

  return 0;
}



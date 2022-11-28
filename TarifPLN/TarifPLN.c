/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menghitung dan menampilkan besarnya tarif listrik*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 06 Maret 2021, jam 11.49.03*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int Golongan; /*Golongan tarif*/
    int PemakaianDaya; /*Pemakaian daya listrik*/
    int Tarif; /*Tarif listrik*/

  /*Algoritma*/
    printf("=====================================================\n");
    printf("==Menghitung dan menampilkan besarnya tarif listrik==\n");
    printf("=====================================================\n\n");
    printf("Masukkan golongan = ");
    scanf("%d", &Golongan);
    printf("Masukkan Pemakaian daya = ");
    scanf("%d", &PemakaianDaya);
    if (Golongan == 1 || Golongan == 2){
        if (Golongan==1){
            if (PemakaianDaya>=100 && PemakaianDaya<1000){
                Tarif=PemakaianDaya*1000;
            }else if (PemakaianDaya>=1000){
                Tarif=(PemakaianDaya*1000)+PemakaianDaya*100; /* 10%*1000=100 */
            }else{
                Tarif=100000;
            }
        }else if (Golongan==2){
            if (PemakaianDaya>=100 && PemakaianDaya<1000){
                Tarif=PemakaianDaya*2000;
            }else if (PemakaianDaya>=1000){
                Tarif=(PemakaianDaya*2000)+PemakaianDaya*200; /* 10%*2000=200 */
            }else{
                Tarif=200000;
            }
        }
    }else{
        printf("Golongan tidak sesuai");
        printf("\n\n=====================================================");
        return 0;
    }
    printf("Tarif PLN = %d ",Tarif);
    printf("\n\n=====================================================");

  return 0;
}


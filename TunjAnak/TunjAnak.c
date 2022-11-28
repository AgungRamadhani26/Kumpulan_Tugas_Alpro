/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menghitung dan menampilkan tunjangan untuk anak*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 06 Maret 2021, jam 11.14.51*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int JumlahAnak; /*Jumlah anak*/
    int GajiPokok; /*Besarnya gaji pokok*/
    int tunjangan; /*Besarnya tunjangan*/

  /*Algoritma*/
    printf("===================================================\n");
    printf("==Menghitung dan menampilkan tunjangan untuk anak==\n");
    printf("===================================================\n\n");
    printf("Masukan jumlah anak = ");
    scanf("%d", &JumlahAnak);
    printf("Masukan gaji pokok = ");
    scanf("%d", &GajiPokok);
    if (JumlahAnak>=0){
        if (JumlahAnak<=3){
            tunjangan=JumlahAnak*(GajiPokok*(10.0/100.0));
        }else{
            tunjangan=3*(GajiPokok*(10.0/100.0));
        }
    }else{
        printf("Tidak mendapatkan tunjangan");
        printf("\n\n===================================================");
        return 0;
    }
    printf("Tunjangan = %d",tunjangan);
    printf("\n\n====================================================");


  return 0;
}


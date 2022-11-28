/*Nama File 	: CekSeriPositif.c*/
/*Deskripsi 	: Menghitung dan menampilkan total tahanan jika dirangkai seri*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 04 Maret 2021, jam 18.13.46*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    float R1,R2,R3; /*Tahanan pertama, Tahanan kedua, Tahanan ketiga*/
    float TotalSeri; /*Total tahanan jika dirangkai seri*/

  /*Algoritma*/
    printf("================================================================\n");
    printf("==Menghitung dan menampilkan total tahanan jika dirangkai seri==\n");
    printf("================================================================\n\n");
    printf("Masukkan besarnya tahanan pertama (R1) = ");
    scanf("%f", &R1);
    printf("Masukkan besarnya tahanan kedua (R2) = ");
    scanf("%f", &R2);
    printf("Masukkan besarnya tahanan ketiga (R3) = ");
    scanf("%f", &R3);
    if(R1>=0 && R2>=0 && R3>=0){
        TotalSeri=R1+R2+R3;
        printf("Total tahanan jika dirangkai seri = %.2f",TotalSeri);
    }else{
        printf("Masukan tahanan tidak boleh negatif");
    }printf("\n\n================================================================");
  return 0;
}


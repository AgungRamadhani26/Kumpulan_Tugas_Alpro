/*Nama File 	: CekBilSemb.c*/
/*Deskripsi 	: Menentukan dan menampilkan apakah suatu bilangan integer termasuk*/
                  /*bilangan bulat positif, negatif, atau nol*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 06 Maret 2021, jam 14.29.16*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{ /*Kamus*/
    int i; /*Bilangan integer sembarang*/

  /*Algoritma*/
    printf("=================================================\n");
    printf("Menentukan apakah suatu bilangan bulat\n");
    printf("merupakan bilangan positif, negatif, atau nol\n");
    printf("=================================================\n\n");
    printf("Masukkan bilangan integer sembarang (i) = ");
  /*
    CATATAN:
      scanf merupakan sebuah fungsi sehingga memiliki return value.
      jika tipe data yang diberikan telah sesuai,
      maka scanf akan mengembalikan nilai 1.
      Sehingga kita juga dapat memeriksanya menggunakan if-else
  */
    if (scanf("%d", &i) != 1){
        printf("Harap masukkan bilangan dengan tipe data integer\n");
    }else{
        if (i > 0){
            printf("%d merupakan bilangan bulat positif\n", i);
        }else if (i == 0){
            printf("%d merupakan bilangan nol", i);
        }else{
            printf("%d merupakan bilangan bulat negatif\n", i);
        }
    }
    printf("\n=================================================");

    return 0;
}


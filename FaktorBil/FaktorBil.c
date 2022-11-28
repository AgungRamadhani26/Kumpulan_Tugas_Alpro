/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Menentukan dan menampilkan faktor-faktor bilangan*/
                  /*dari bilangan integer sembarang*/
/*Pembuat   	: 24060120120016-Agung Ramadhai*/
/*Tgl Pembuatan	: 18 Maret 2021,jam 00.07.57*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;/*Bilangan integer yang akan dicari faktornya*/
    int i;/*Counter*/

  /*Algoritma*/
    printf("==Menentukan dan menampilkan faktor-faktor bilangan==\n");
    printf("=====================================================\n");
    printf("Masukkan bilangan integer yang akan dicari faktornya = ");
    scanf("%d",&N);
    if (N>0){
        for (i=1;i<=N;i++){
            if (N%i==0){
                printf("%d\n",i);
            }
        }
    }else{
        printf("N harus lebih dari 0");
    }


  return 0;
}


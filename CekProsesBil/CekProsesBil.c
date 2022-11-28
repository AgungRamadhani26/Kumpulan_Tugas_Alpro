/*Nama File 	: CekProsesBil.c*/
/*Deskripsi 	: Klasifikasi bilangan integer N sembarang*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 03 Maret 2021, jam 21.45.00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N; /*Bilangan yang diklasifikasikan*/

  /*Algoritma*/
    printf("==================================================================\n");
    printf("=============Klasifikasi bilangan integer N sembarang=============\n");
    printf("==================================================================\n\n");
    printf("Masukkan nilai bilangan integer yang akan diklasifikasikan (N) = ");
    scanf("%d", &N);
    if (N%2==0){
        N=N+3;
        if (N%5==0){
            N=N+5;
        }else{
            N=N+2;
        }
    }else{
        N=N+2;
        if(N%3==0){
            N=N+4;
        }else{
            N=N+1;
        }
    }
    printf("\n==================================================================\n");
    printf("Nilai dari N adalah = %d\n",N);
    printf("==================================================================");

  return 0;
}


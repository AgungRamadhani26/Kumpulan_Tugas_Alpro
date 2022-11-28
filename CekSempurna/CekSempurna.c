/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Mengecek dan menampilkan apakah suatu bilangan merupakan bilangan sempurna*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 18 Maret 2021, jam 11.28.58*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int N;/*Bilangan integer yang dicek*/
    int i;/*Counter*/
    int JlhFak; /*Jumlah faktor selain faktor sebesar N*/

  /*Algoritma*/
    printf("Mengecek dan menampilkan apakah suatu bilangan merupakan bilangan sempurna\n");
    printf("==========================================================================\n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    if (N>0){
        JlhFak=0;
        i=1;
        do{
            if (N%i==0){
                JlhFak=JlhFak+i;
            }i=i+1;
        }while(i<N);
        if (JlhFak==N){
            printf("Bilangan sempurna");
        }else{
            printf("Bukan bilangan sempurna");
        }
    }else{
        printf("Masukkan harus lebih dari nol");
    }


  return 0;
}



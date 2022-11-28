/*Nama File 	: Binary_Search.c*/
/*Deskripsi 	: Metode pencarian data dengan pencarian biner*/
/*Pembuat   	: 24060120120016 - Agung Ramadhani*/
/*Tgl Pembuatan	: 26-April-2021, jam 19.00*/

#include <stdio.h>
#include <stdlib.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int i; /*Counter*/
    int Arr[100];
    int Search;
    int First;
    int Last;
    int Middle;
    int N;

  /*Algoritma*/
  /*Memasukkan nilai ke array*/
    printf("Masukkan panjang array : ");
    scanf("%d", &N);
    printf("Masukkan angka berurutan dari kecil ke besar :\n");
    for(i=0;i<N;i++){
        scanf("%d", & Arr[i]);
    }

    /*Menampilkan nilai array*/
    printf("\nNilai array saat ini :\n");
    for(i=0;i<N;i++){
        printf("%d ",Arr[i]);
    }

    printf("\nAngka yang ingin dicari: ");
    scanf("%d", &Search);
    Last=N;
    First = 0;
    Middle=(First+Last)/2;
    while(First<=Last){
        if(Arr[Middle]<Search){
            First = Middle + 1;
        }else if(Arr[Middle]==Search){
            printf("Angka %d ditemukan di urutan ke-%d",Search, Middle+1);
            break;
        }else{
            Last= Middle - 1;
        }Middle=(First+Last)/2;
    }
    if(First>Last){
        printf("\nAngka %d tidak ditemukan", Search);
    }

return 0;
}


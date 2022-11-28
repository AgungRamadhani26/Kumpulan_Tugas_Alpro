/*Nama File 	: IsiMatrik.c*/
/*Deskripsi 	: Menampilkan matrik dengan ordo sama yang mana diagonal*/
                  /*utamanya bernilai 1, diatasnya bernilai 0 dan*/
                  /*dibawahnya bernilai 2*/
/*Pembuat   	: 24060120120016-Agung Ramadhani*/
/*Tgl Pembuatan	: 23 Maret 2021 19.51.14*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int M; /*Ordo baris*/
    int N; /*Ordo kolom*/
    int i; /*Counter*/
    int j; /*Counter*/

  /*Algoritma*/
    printf("Masukkan nilai M = ");
    scanf("%d", &M);
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    int T[M][N];
    if (M<=0||N<=0){
        printf("Masukan harus positif");
    }else{
        if (M != N){
            printf("Nilai M dan N harus sama");
        }else{
            for(i=0;i<M;i++){
                for(j=0;j<N;j++){
                    if(i>j){
                        T[i][j]=2;
                    }else if(i==j){
                        T[i][j]=1;
                    }else{
                        T[i][j]=0;
                    }printf("%d ",T[i][j]);
                }printf("\n");
            }
        }
    }
  return 0;
}



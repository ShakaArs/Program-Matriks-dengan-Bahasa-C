//Deklarasi atau inisialisasi
 char pilihan,next;
 int m,n;
    int matriks1[10][10], matriks2[10][10];
    int jumlah[10][10];
    int pengurangan[10][10];
    int perkalian[10][10];
    int transpose[10][10];
 int A[10][10],i,j,determinan;

 //ALGOTRITMA
void inputMatriks(int mat[10][10], int baris,int kolom){
   for(i=1;i<=baris;i++){
      for(j=1;j<=kolom;j++){
         printf("Input Matrik [%d],[%d] = ", i,j);
         scanf("%d", &mat[i][j]);
      }
   }
}
void penjumlahanMatriks(const int matriks[10][10],const int matriks2[10][10], int baris,int kolom,int jumlah[10][10]){
   for ( i = 1; i <= baris; i++){
      for(j=0;j<=kolom;j++){
         jumlah[i][j]= matriks[i][j] + matriks2[i][j];
      }
   }
   
}
void tampilMatriks(const int A[10][10],int baris,int kolom){
   printf("\n");
   for ( i = 1; i <= baris; i++){
      for (j = 1; j <= kolom; j++)
      {
         printf("%d ", A[i][j]);
      }
      printf("\n");
   }
}
void penguranganMatriks(const int matriks[10][10], const int matriks2[10][10],int baris,int kolom, int pengurangan[10][10]){
   for ( i = 1; i <= baris; i++){
      for(j=0;j<=kolom;j++){
         pengurangan[i][j]= matriks[i][j] - matriks2[i][j];
      }
   }
}
void perkalianMatriks(const int matriks[10][10], const int matriks2[10][10],int baris,int kolom, int perkalian[10][10]){
   for ( i = 1; i <= baris; i++){
      for(j=0;j<=kolom;j++){
         perkalian[i][j]= matriks[i][j] * matriks2[i][j];
      }
   }
}
void Transpose(const int matriks[10][10], const int matriks2[10][10],int baris,int kolom, int tranpose[10][10]){
   for (i = 1; i <= baris; i++){
    for(j = 0; j <= kolom; j++){
         transpose[j][i] = matriks[i][j];
    }
   }
    

}
void hasilTranspose(const int matriks1[10][10], const int matriks2[10][10],int baris,int kolom){
   printf("\nHasil Transpose Matriks :\n");
   printf("\nMatriks 1 :\n");
        for(j=1;j<=kolom;j++){
            for(i=1;i<baris+1;i++){
               printf("%d", matriks1[i][j]);
            if(i==baris) {
               printf("\n");
            }
            else {
               printf(" ");
            }
        }
    }
    printf("\n");
   printf("\nHasil Transpose Matriks :\n");
   printf("\nMatriks 2 :\n");
        for(j=1;j<=kolom;j++){
            for(i=1;i<baris+1;i++){
               printf("%d", matriks2[i][j]);
            if(i==baris) {
               printf("\n");
            }
            else {
               printf(" ");
            }
        }
    }
}
int main()
{
   do{
      printf("\n===================================");
      printf("\n| PROGRAM MATRIKS DENGAN BAHASA C |");
      printf("\n===================================\n");
      //PILIHAN MENU UNTUK SETIAP FUNGSI
      printf("\n MENU PROGRAM MATRIKS : \n");
      printf("\n 1. Penjumlahan Matiks  ");
      printf("\n 2. Pengurangan Matiks  ");
      printf("\n 3. Perkalian Matiks  ");
      printf("\n 4. Determinan Matiks  ");
      printf("\n 5. Transpose Matiks  \n");
      printf("\n 6. Keluar  \n");
      printf("\n Masukkan Pilihan [1-6] :  ");
      scanf("%d", &pilihan);

      switch (pilihan)
      {
      case 1:
         printf("=====Tentukan ordo matriks terlebih dahulu===== \n");
         printf("Input jumlah baris matrik : "); scanf("%d", &m);
         printf("Input jumlah kolom matrik : "); scanf("%d", &n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 1 :\n");
         inputMatriks(matriks1,m,n);
         tampilMatriks(matriks1,m,n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 2 :\n");
         inputMatriks(matriks2,m,n);
         tampilMatriks(matriks2,m,n);
         printf("=============================================== \n");
         penjumlahanMatriks(matriks1,matriks2,m,n,jumlah);
         printf("\nHasil Penjumlahan Matrik :\n");
         tampilMatriks(jumlah,m,n);
         break;
      
      case 2:
         printf("=====Tentukan ordo matriks terlebih dahulu===== \n");
         printf("Input jumlah baris matrik : "); scanf("%d", &m);
         printf("Input jumlah kolom matrik : "); scanf("%d", &n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 1 :\n");
         inputMatriks(matriks1,m,n);
         tampilMatriks(matriks1,m,n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 2 :\n");
         inputMatriks(matriks2,m,n);
         tampilMatriks(matriks2,m,n);
         printf("=============================================== \n");
         penguranganMatriks(matriks1,matriks2,m,n,pengurangan);
         printf("\nHasil Pengurangan Matrik :\n");
         tampilMatriks(pengurangan,m,n);
         break;
      
      case 3:
         printf("=====Tentukan ordo matriks terlebih dahulu===== \n");
         printf("Input jumlah baris matrik : "); scanf("%d", &m);
         printf("Input jumlah kolom matrik : "); scanf("%d", &n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 1 :\n");
         inputMatriks(matriks1,m,n);
         tampilMatriks(matriks1,m,n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 2 :\n");
         inputMatriks(matriks2,m,n);
         tampilMatriks(matriks2,m,n);
         printf("=============================================== \n");
         perkalianMatriks(matriks1,matriks2,m,n,perkalian);
         printf("\nHasil Perkalian Matrik :\n");
         tampilMatriks(perkalian,m,n);
         break;

      case 4:
         printf("=====Determinan Matriks  ===== \n");
         printf(" Pilihan untuk Operasi Determinan: \n"); 
         printf(" 1. Determinan untuk Matriks ordo 2 X 2 : \n"); 
         printf(" 2. Determinan untuk Matriks ordo 3 X 3 : \n"); 
         printf("\n Masukkan Pilihan [1 atau 2] :  ");
         scanf("%d", &pilihan);
         switch (pilihan)
         {
         case 1:
               printf("\n\n Anda Memilih matriks 2 X 2\n");
               printf("\n\n Masukan Nilai Matriks A Tiap Elemen : \n");

               //Inputan Elemen matriks 2 X 2
               for ( i = 1; i <=2; i++)
               {
                  for (j = 1; j <=2; j++)
                  {
                     printf("A[%d][%d] = ",i,j);
                     scanf("%d", &A[i][j]);
                  }
                  
               }

               //Tampilan Matriks 2 X 2
               printf ("\n Bentuk Matriks : \t");
               for ( i = 1; i <=2; i++)
               {
                  for (j = 1; j <=2; j++)
                     printf("%d\t", A[i][j]);
                     printf("\n");
                     printf("\t\t\t");
               }
               determinan = (A[1][1]*A[2][2]-(A[1][2]*A[2][1]));
               printf ("\n Hasil Determinan =  %d", determinan);
            break;
         case 2:
               printf("\n\n Anda Memilih matriks 3 X 3\n");
               printf("\n\n Masukan Nilai Matriks A Tiap Elemen : \n");

               //Inputan Elemen matriks 3 X 3
               for ( i = 1; i <=3; i++)
               {
                  for (j = 1; j <=3; j++)
                  {
                     printf("A[%d][%d] = ",i,j);
                     scanf("%d", &A[i][j]);
                  }
                  
               }

               //Tampilan Matriks 3 X 3
               for ( i = 1; i <=2; i++)
               {
                  for (j = 1; j <=2; j++)
                     printf("%d\t", A[i][j]);
                     printf("\n");
                     printf("\t\t\t");
               }
               determinan = ((A[1][1]*A[2][2]*A[3][3]) + (A[1][2]*A[2][3]*A[2][3]*A[3][1]) + (A[1][3]*A[2][1]*A[3][2]))
                              - ((A[3][1]*A[2][2]*A[1][3]) +(A[3][2]*A[2][3]*A[1][1]) + (A[3][3]*A[2][1]*A[1][2]));
               printf ("\n Hasil Determinan =  %d", determinan);
            break;
         default:
            printf("\n Pilihan Tidak Tersedia !!!");
            break;
         }
         break;

      case 5:
         printf("=====Tentukan ordo matriks terlebih dahulu===== \n");
         printf("Input jumlah baris matrik : "); scanf("%d", &m);
         printf("Input jumlah kolom matrik : "); scanf("%d", &n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 1 :\n");
         inputMatriks(matriks1,m,n);
         tampilMatriks(matriks1,m,n);
         printf("=============================================== \n");
         printf("\nInput nilai matrik 2 :\n");
         inputMatriks(matriks2,m,n);
         tampilMatriks(matriks2,m,n);
         printf("=============================================== \n");
         Transpose(matriks1,matriks2,m,n,transpose);
         hasilTranspose(matriks1,matriks2,m,n);
         break;
      case 6:
         return 0; 
      default:
         printf("\n Pilihan Tidak Tersedia !!! ");
         break;
      }
   printf("\n Mau Coba Lagi (Y/N)? ");
      scanf("%s", &next);
   }while ((next=='y')||(next=='Y'));
   
   return 0;
}

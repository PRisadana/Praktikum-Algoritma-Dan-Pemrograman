#include <stdio.h>
#include <stdlib.h>

void mulai();
void close();
void end();
int penjumlahan_matriks();
int perkalian_matriks();
int transpose_matriks();
int main();
void ulang();
 
void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||             OPERASI MATRIKS              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||ANGGOTA:                                  ||");
    printf("\n\t|| 1. Razky Yoga Adewindra                  ||");
    printf("\n\t||    (1805551134)                          ||");
    printf("\n\t|| 2. Ni Putu Mirah Kartika Cahyani         ||");
    printf("\n\t||    (2205551048)                          ||");
    printf("\n\t|| 3. Resandy Prisadana                     ||");
    printf("\n\t||    (2205551050)                          ||");
    printf("\n\t|| 4. Arya Prawira Perdana                  ||");
    printf("\n\t||    (2205551051)                          ||");
    printf("\n\t|| 5. Putu Aditya Mahendra Putra            ||");
    printf("\n\t||    (2205551058)                          ||");
    printf("\n\t|| 6. I Putu Eka Putra Juniawan             ||");
    printf("\n\t||    (2205551087)                          ||");
    printf("\n\t|| 7. Ni Putu Intan Oka Apriliana           ||");
    printf("\n\t||    (2205551109)                          ||");
    printf("\n\t|| 8. Komang Merthi Utami                   ||");
    printf("\n\t||    (2205551117)                          ||");
    printf("\n\t==============================================");
    close();
}

void close(){
    printf("\n\tBerikutnya...");
    getchar();
    printf("\n\tTekan enter untuk melanjutkan");
    getchar();
    system("clear");
}

void end(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||         SAMPAI BERTEMU KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT: KELOMPOK 3         ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}

// int validasi_int(){
//     char angka;
//     char * input;
//     input = (char *) malloc(sizeof(char));

//     int indeks = 0; // untuk indexin, jika benar masuk ke char input, jika salah langsung end
//     while(angka=getchar() != 13 ){
//         if(angka >= '0' && angka <='9'){
//             printf("%c", angka);
//             input[indeks] = angka;
//             indeks++;
//         }
//     }
//     input[indeks] = '\0'; // jika membuat char dalam pointer akhiri dengan ini

//     return atoi(input);
// }


int penjumlahan_matriks(){
    int i, j, baris, kolom;
    int matriks1[10][10];
    int matriks2[10][10];
    int hasilmatriks[10][10];
    printf("\n==============================================");
    printf("\n||           Penjumlahan Matriks            ||");
    printf("\n==============================================");
    printf("\nMasukkan jumlah baris matriks: ");
    while(scanf("%d", &baris) == 0 ){
        printf ("\nKarakter yang anda inputkan salah");
        printf ("\nInputan harus berupa angka");
        printf ("\n---------------------------------------");
        printf("\nMasukkan jumlah baris matriks: ");
        while (baris=getchar() != '\n');
    }
    printf("\nMasukkan jumlah kolom matriks: ");
    while(scanf("%d", &kolom) == 0 ){
        printf ("\nKarakter yang anda inputkan salah");
        printf ("\nInputan harus berupa angka");
        printf ("\n---------------------------------------");
        printf("\nMasukkan jumlah kolom matriks: ");
        while (kolom=getchar() != '\n');
    }
    printf("\nMasukkan elemen matriks pertama: \n");
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
          scanf("%d", &matriks1[i][j]);
    
    }
  }
    printf("\nMasukkan elemen matriks kedua: \n");
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            scanf("%d", &matriks2[i][j]);
    
    }
  }
    printf("hasil penjumlahan matriks : \n");
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            hasilmatriks[i][j] = matriks1[i][j] + matriks2[i][j];
            printf("%d \t", hasilmatriks[i][j]);
    }
    printf("\n");
  }

}

int perkalian_matriks(){
  int matriks1[10][10];
  int matriks2[10][10];
  int hasil[10][10];
  int i, j, k, baris1, kolom1, baris2, kolom2; 
  int jumlah = 0;
  printf("\n==============================================");
  printf("\n||            Perkalian Matriks             ||");
  printf("\n==============================================");
  printf("\nMasukkan jumlah baris matriks pertama: ");
  while(scanf("%d",&baris1) == 0){
    printf("\nKarakter yang anda inputkan salah");
    printf("\nInputan harus berupa angka");
    printf("\n---------------------------------------");
    printf("\nMasukkan jumlah baris matriks pertama: ");
    while (baris1=getchar() != '\n');
  }
  printf("\nMasukkan jumlah kolom matriks pertama: ");
  while(scanf("%d",&kolom1)== 0){
    printf("\nKarakter yang anda inputkan salah");
    printf("\nInputan harus berupa angka");
    printf("\n---------------------------------------");
    printf("\nMasukkan jumlah kolom matriks pertama: ");
    while (kolom1=getchar() != '\n');
  }

  printf("\nMasukkan jumlah baris matriks kedua: ");
  while(scanf("%d",&baris2)==0){
    printf("\nKarakter yang anda inputkan salah");
    printf("\nInputan harus berupa angka");
    printf("\n---------------------------------------");
    printf("\nMasukkan jumlah baris matriks kedua: ");
    while (baris2=getchar() != '\n');
  }
  printf("\nMasukkan jumlah kolom matriks kedua: ");
  while(scanf("%d",&kolom2)==0){
    printf("\nKarakter yang anda inputkan salah");
    printf("\nInputan harus berupa angka");
    printf("\n---------------------------------------");
    printf("\nMasukkan jumlah baris matriks kedua: ");
    while (kolom2=getchar() != '\n');
  }

  if(kolom1 != baris2){
    printf("Matriks tidak dapat dikalikan satu sama lain.\n");
  } else {

    printf("Masukkan elemen matriks pertama: \n");
    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom1; j++){
        scanf("%d", &matriks1[i][j]);
        }
      }
    }

    printf("Masukkan elemen matriks kedua: \n");
    for(i = 0; i < baris2; i++){
      for(j = 0; j < kolom2; j++){
        scanf("%d", &matriks2[i][j]);
      }
    }

    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        for(k = 0; k < baris2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    printf("Hasil perkalian matriks: \n");
    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        printf("%d\t", hasil[i][j]);
      }
      printf("\n");
    }
  
  return 0;
  
}

int transpose_matriks(){
    int i, j, baris, kolom;
    int matriks[10][10];
    int transpose[10][10];
    printf("\n==============================================");
    printf("\n||            Transpose Matriks             ||");
    printf("\n==============================================");
    printf("\nMasukkan jumlah baris matriks: ");
    while(scanf("%d", &baris) == 0 ){
            printf ("\nKarakter yang anda inputkan salah");
            printf ("\nInputan harus berupa angka");
            printf ("\n---------------------------------------");
            printf ("\nMasukkan pilihan kamu   : ");
            while (baris=getchar() != '\n');
    }
    printf("\nMasukkan jumlah kolom matriks: ");
    while(scanf("%d", &kolom) == 0 ){
            printf ("\nKarakter yang anda inputkan salah");
            printf ("\nInputan harus berupa angka");
            printf ("\n---------------------------------------");
            printf ("\nMasukkan pilihan kamu   : ");
            while (kolom=getchar() != '\n');
    }
    printf("Masukkan elemen matriks : \n");
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            scanf("%d", &matriks[i][j]);
        }
    }
    for (i = 0; i < baris; i ++){
        for(j = 0; j < kolom; j++){
            transpose[j][i] = matriks[i][j];
        }
    }
    printf("Hasil transpose matriks:\n");
    for (i = 0; i < kolom; i ++){
        for(j = 0; j < baris; j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }

}

int main(){
    mulai();
    //int pilihan[3] = {1, 2, 3};
    int pilih;
    printf("\n\t==============================================");
    printf("\n\t||          Program Operasi Matriks         ||");
    printf("\n\t==============================================");
    printf("\n\t|| (1) Perkalian Matriks                    ||");
    printf("\n\t|| (2) Penjumlahan Matriks                  ||");
    printf("\n\t|| (3) Transpose Matriks                    ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan pilihan anda : ");
    while(scanf("%d", &pilih) == 0 || pilih<1 || pilih > 3){
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tInputan harus berupa angka");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan pilihan kamu   : ");
        while (pilih=getchar() != '\n');
    }

    close();

    if(pilih==1){
        perkalian_matriks();
    }else if(pilih==2){
        penjumlahan_matriks();
    }else if(pilih==3){
        transpose_matriks();
    }
    
    close();
    //validasi_int();
    ulang();
} 

void ulang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||       Apakah anda ingin mengulang ?      ||");
    printf("\n\t==============================================");
    printf("\n\t|| (1)  Ya, saya ingin menghitung lagi      ||");
    printf("\n\t|| (2)  tidak, sudah cukup                  ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan pilihan kamu   : ");
    while (scanf  ("%d", &menu)==0 || menu <1 || menu>2){
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tInputan harus berupa angka");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan pilihan kamu   : ");
        while (menu=getchar() != '\n');
    }

    if (menu == 1){
        close();
        main();
    }else if (menu == 2){
        close();
        end();
    }
}

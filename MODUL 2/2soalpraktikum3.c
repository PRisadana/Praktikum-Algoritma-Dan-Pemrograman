#include <stdio.h>
#include <stdlib.h>

void mulai();
void close();
int main();
void binerkedesimal();
int fungsi_binerkedesimal(int biner);
void desimalkebiner();
int fungsi_desimalkebiner(int desimal);
void ulang();
void end();

void close(){
    printf("\n\tBerikutnya");
    getchar();
    printf("\n\tTekan enter untuk melanjutkan..");
    getchar();
    system("clear");
}
 
void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||         Konversi Bilangan Biner          ||");
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

int fungsi_desimalkebiner(int desimal){
    int biner = 0;
    int sisa = 0;
    int i = 1;

    while(desimal>0){
        sisa = desimal%2;//mencari sisa pembagian
        desimal = desimal/2;//pembagian biasa
        biner = biner + (sisa*i);//buat penjumlahan satuan, puluhan, ratusan, dsb-nya, nanti bakal keliatan di pembahasan while nya
        i = i*10;//ini digunakan untuk membuat biner (yang mau dipanggil) menjadi bernilai satuan, puluhan, ratusan, dsb 
    }
    return biner;
}

/* bilangan desimal = 5 
5 mod 2 = 1
2 mod 2 = 0
1 mod 2 = 1
101*/

void desimalkebiner(){
    int desimal;
    printf("\n\t==============================================");
    printf("\n\t||    Konversi Bilangan Desimal ke Biner    ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan bilangan desimal : ");
    while(scanf("%d", &desimal) == 0 || desimal<0 || desimal >255){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tBilangan desimal paling tinggi adalah 255");
        printf("\n\t==============================================");
        printf("\n\tMasukkan bilangan desimal : ");
        while(desimal=getchar() != '\n');
    }

    int rumus = fungsi_desimalkebiner(desimal);

    printf("\n\t==============================================");
    printf("\n\tBilangan desimal = %d", desimal);
    printf("\n\tBilangan biner   = %d", rumus);
    close();
}

int fungsi_binerkedesimal(int biner){
    int desimal=0;
    int i=1; 
    int digit;
    while(biner!=0){
    digit = biner % 10;
    desimal = desimal + (digit*i);
    i = i*2;
    biner = biner/10;
  }
  return desimal;
}

void binerkedesimal(){
    int biner;
    printf("\n\t==============================================");
    printf("\n\t||    Konversi Bilangan Biner ke Desimal    ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan bilangan biner : ");
    while(scanf("%d", &biner)==0 ){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t==============================================");
        printf("\n\tMasukkan bilangan biner : ");
        while(biner=getchar() != '\n');
    }

    int rumus = fungsi_binerkedesimal(biner);

    printf("\n\t==============================================");
    printf("\n\tBilangan biner    = %d", biner);
    printf("\n\tBilangan desimal  = %d", rumus);
    close();
}

int main(){
    mulai();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||              Konversi Bilangan           ||");
    printf("\n\t==============================================");
    printf("\n\t|| (1) Konversi Bilangan Biner ke Desimal   ||");
    printf("\n\t|| (2) Konversi Bilangan Desimal ke Biner   ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan = ");
    while(scanf("%d", &menu)==0 || menu<1 || menu>2){
        printf("\n\tAngka yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang...");
        printf("\n\t==============================================");
        printf("\n\tInputkan pilihan = ");
        while(menu=getchar() != '\n');
    }

    if (menu==1){
        binerkedesimal();
    }else if(menu==2){
        desimalkebiner();
    }
    ulang();
}

void ulang(){
    int menu;
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                 Apakah anda ingin mengulang ?               **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t** (1)  Ya, saya ingin menghitung lagi                         **");
    printf ("\n\t** (2)  tidak, sudah cukup                                     **");
    printf ("\n\t*****************************************************************");
    printf ("\n\tMasukkan pilihan kamu   : ");
    while (scanf  ("%d", &menu)==0 || menu <1 || menu>2){
        printf ("\t---------------------------------------");
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

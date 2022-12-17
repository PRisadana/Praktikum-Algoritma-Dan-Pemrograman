#include <stdio.h>
#include <stdlib.h>

//Pola bilangan fibonacci adalah suatu susunan angka dengan 
//nilai angka berikutnya diperoleh dari hasil menambahkan kedua angka sebelumnya secara berturut-turut

void mulai();
void close();
int main();
int deret_fibonacci(float bilasli);
int fibo(int x);
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
    printf("\n\t||             Deret Fibonacci              ||");
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

int fibo(int x){
    if(x==0)return 0;
    if(x==1)return 1;
    else return fibo(x-2)+fibo(x-1);
}

int deret_fibonacci(float bilasli){
    printf("\n\t=============================================================");
    printf("\n\t||            Deret Fibonacci Metode Rekursif              ||");
    printf("\n\t=============================================================");
    printf("\n\tDeret Fibonacci : ");
    for(int i=0;i<bilasli;i++){
        printf("%d, ", fibo(i)); 
    }

    float b1 = 1;
    float b2 = 0;
    float bilselanjutnya = b1+b2;
    printf("\n\t=============================================================");
    printf("\n\t||             Deret Fibonacci Metode Iteratif             ||");
    printf("\n\t=============================================================");
    printf("\n\tDeret Fibonacci : %.0f", b2); //revisi 

    for(float i=2; i<=bilasli; i++){
        printf(",%2.f", bilselanjutnya);
        b1 = b2;
        b2 = bilselanjutnya;
        bilselanjutnya = b1+b2;
    }
    close();
}

int main(){
    mulai();
    float bilasli;
    printf("\n\t=============================================================");
    printf("\n\t||                      Deret Fibonacci                    ||");
    printf("\n\t=============================================================");
    printf("\n\t| Pola bilangan fibonacci adalah suatu susunan angka dengan |");
    printf("\n\t|  nilai angka berikutnya diperoleh dari hasil menambahkan  |");
    printf("\n\t|        kedua angka sebelumnya secara berturut-turut       |");
    printf("\n\t=============================================================");
    close();
    printf("\n\t=============================================================");
    printf("\n\t||                      Deret Fibonacci                    ||");
    printf("\n\t=============================================================");
    printf("\n\t||Masukkan bilangan ke n : ");
    while(scanf("%f", &bilasli)==0){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan input ulang");
        printf("\n\t=============================================================");
        printf("\n\t||Masukkan bilangan ke n : ");
        while(bilasli=getchar() != '\n');
    }
    deret_fibonacci(bilasli);
    ulang();

    return 0;
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
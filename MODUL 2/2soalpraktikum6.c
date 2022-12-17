#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void mulai();
void close();
int main();
float angsuranpokok(float p, float t );
int bungabulan(float y, float p, float i, float angsuranpokok);
void ulang();
void end();

 
void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||           Menghitung Angsuran            ||");
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
    printf("\n\tBerikutnya");
    getchar();
    printf("\n\tTekan enter untuk melanjutkan...");
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

// p = Pokok Pinjaman
// i = Besar bunga dalam setahun
// t = Lama pinjaman dalam bulan
float angsuranpokok(float p, float t ){
    float rumusangsuranpokok = p/t;
    return rumusangsuranpokok; 
}

int bungabulan(float y, float p, float i, float angsuranpokok){
    float rumusbungabulankey =  (p - ((y-1) * angsuranpokok)) * (i/100)/12;
    return rumusbungabulankey;
}

int main(){
    mulai();
    int totalangsuran, totalbunga;
    float pokokpinjaman, besarbunga;
    float lamapinjaman;
    printf("\n\t=============================================");
    printf("\n\t||        Program Menghitung Angsuran      ||");
    printf("\n\t=============================================");
    printf("\n\tPokok pinjaman          :  ");
    while(scanf("%f", &pokokpinjaman)==0){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tTolong inputkan ulang...");
        printf("\n\t--------------------------------------------");
        printf("\n\tPokok pinjaman          :  ");
        while(pokokpinjaman=getchar() != '\n');
    }
    printf("\n\tBesar Bunga (persen)    :  ");
    while(scanf("%f", &besarbunga)==0 || besarbunga<0 || besarbunga>100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tTolong inputkan ulang...");
        printf("\n\t--------------------------------------------");
        printf("\n\tBesar Bunga (persen)    :  ");
        while(besarbunga=getchar() != '\n');
    }
    printf("\n\tLama pinjaman (bulan)   :  ");
    while(scanf("%f", &lamapinjaman)==0){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tTolong inputkan ulang...");
        printf("\n\t--------------------------------------------");
        printf("\n\tLama pinjaman (bulan)   :  ");
        while(lamapinjaman=getchar() != '\n');
    }
    close();

    printf("\n\t==========================================================================================");
    printf("\n\t||                                Rincian Angsuran                                      ||");
    printf("\n\t==========================================================================================");
    printf("\n\tBulan     ||     Bunga     ||     Angsuran Pokok     ||     Angsuran Perbulan           ||");
    for(int x=1; x<=lamapinjaman; x++){

        int rumus1 = angsuranpokok(pokokpinjaman, lamapinjaman);
        int rumus2 = bungabulan(x, pokokpinjaman, besarbunga, rumus1);
        int rumus3 = floor(rumus1+rumus2);

        printf("\n\t%d        \tRp. %d       \tRp. %d               \tRp. %d                       ", x, rumus2,rumus1,rumus3);
        
        totalbunga=totalbunga + rumus2;
        totalangsuran=totalangsuran + rumus3;
    }

    printf("\n\t=========================================================================================");
    printf("\n\t|| Total Bunga                          = Rp. %d                ", totalbunga);
    printf("\n\t|| Total Angsuran                       = Rp. %d                ", totalangsuran);
    printf("\n\t=========================================================================================");
    close();
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

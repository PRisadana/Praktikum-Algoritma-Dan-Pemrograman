#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define phi 3.14

//buat program luas permukaan dan volume tabung, bola, limas segiempat, prisma segitiga, kerucut

int main();
int ulang();
void start();
void close();
float tabung ();
float fungsi_lp_tabungdengantutup (float radius, float tinggi );
float fungsi_volume_tabungdengantutup (float radius, float tinggi);
float fungsi_lp_tabungtanpatutup(float radius, float tinggi);
float fungsi_volume_tabungtanpatutup(float radius, float tinggi);
float bola();
float fungsi_lp_bola(float radius_bola);
float fungsi_volume_bola(float radius_bola);
float limas_segiempat();
float fungsi_lp_limaspersegi(float sisi, float tinggi);
float fungsi_volume_limaspersegi(float sisi, float tinggi);
float fungsi_lp_limaspersegipanjang(float panjang, float lebar, float tinggi);
float fungsi_volume_limaspersegipanjang(float panjang, float lebar, float tinggi);
float prisma_segitiga();
float fungsi_lp_prismasegitiga(float alassegitiga, float tinggisegitiga, float tinggiprisma);
float fungsi_volume_prismasegitiga(float alassegitiga, float tinggisegitiga, float tinggiprisma);
float kerucut();
float fungsi_lp_kerucut(float radius, float tinggi);
float fungsi_volume_kerucut(float radius, float tinggi);
void end(); 


void close(){
    printf("\n\tBerikutnya...");
    getchar();
    printf("\n\tTekan enter untuk melanjutkan");
    getchar();
    system("clear");
}

void start(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||               BANGUN RUANG               ||");
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

float tabung (){
    int jenis;
    printf("\n\t================================================================================");
    printf("\n\t||                                  Tabung                                    ||");
    printf("\n\t================================================================================");
    printf("\n\tSilahkan pilih jenis tabung : ");
    printf("\n\t1. Tabung dengan tutup");
    printf("\n\t2. Tabung tanpa tutup");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih jenis tabung : ");
    while (scanf  ("%d", &jenis)==0 || jenis<1 || jenis>2){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan angka untuk memilih   : ");
        while (jenis=getchar() != '\n');
    }
    close();

if(jenis==1){
    float radius, tinggi, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                            Tabung dengan tutup                             ||");
    printf("\n\t================================================================================"); 
    printf("\n\tMasukkan radius       : ");
    while (scanf  ("%f", &radius)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan radius       : ");
        while (radius=getchar() != '\n');
    }
    printf("\n\tMasukkan tinggi       : ");
    while (scanf  ("%f", &tinggi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi       : ");
        while (tinggi=getchar() != '\n');
    }
    lp = fungsi_lp_tabungdengantutup (radius, tinggi);
    volume = fungsi_volume_tabungdengantutup (radius, tinggi);

    printf("\n\tLuas permukaan Tabung dengan tutup : %f\n\tVolume Tabung dengan tutup : %f\n" , lp,volume); 
}else if(jenis==2){
    float radius, tinggi, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                             Tabung tanpa tutup                             ||");
    printf("\n\t================================================================================"); 
    printf("\n\tMasukkan radius       : ");
    while (scanf  ("%f", &radius)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan angka untuk memilih   : ");
        while (radius=getchar() != '\n');
    }
    printf("\n\tMasukkan tinggi       : ");
    while (scanf  ("%f", &tinggi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan angka untuk memilih   : ");
        while (tinggi=getchar() != '\n');
    }
    lp = fungsi_lp_tabungtanpatutup(radius, tinggi);
    volume = fungsi_volume_tabungtanpatutup(radius, tinggi);
    printf("\n\tLuas permukaan Tabung tanpa tutup : %f\n\tVolume Tabung tanpa tutup : %f\n" , lp,volume);
}
}

float fungsi_lp_tabungdengantutup (float radius, float tinggi ){
    float luaspermukaan = 2*phi*radius*(radius+tinggi);
    return luaspermukaan;
}

float fungsi_volume_tabungdengantutup (float radius, float tinggi){
    float volume = phi*radius*radius*tinggi;
    return volume;
}
    
float fungsi_lp_tabungtanpatutup(float radius, float tinggi){
    float luasselimut = 2*phi*radius*tinggi;
    float luasalas = phi*radius*radius;
    float  lp_tabungtanpatutup = luasselimut+luasalas;
    return lp_tabungtanpatutup;
}

float fungsi_volume_tabungtanpatutup(float radius, float tinggi){
    float  volume_tabungtanpatutup = phi*radius*radius*tinggi;
    return volume_tabungtanpatutup;
}


float bola(){
    float radius, volume, lp;
    printf("\n\t================================================================================");
    printf("\n\t||                                    Bola                                    ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan radius : ");
    while (scanf  ("%f", &radius)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
       printf("\n\tMasukkan radius : ");
        while (radius=getchar() != '\n');
    }
    volume = fungsi_volume_bola(radius);
    lp = fungsi_lp_bola(radius);

    printf("\n\tLuas Permukaan Bola : %f\n\tVolume Bola : %f\n", lp, volume);
}

float fungsi_volume_bola(float radius_bola){
    float volume_bola = 4/3*phi*radius_bola*radius_bola*radius_bola; 
    return volume_bola;
}

float fungsi_lp_bola(float radius_bola){
    float lp_bola = 4*phi*radius_bola*radius_bola;
    return lp_bola;
}

float limas_segiempat(){
    int jenis;
    printf("\n\t================================================================================");
    printf("\n\t||                              Limas Segi Empat                              ||");
    printf("\n\t================================================================================");
    printf("\n\tSilahkan pilih jenis limas segi empat : ");
    printf("\n\t1. Limas segi empat alas persegi");
    printf("\n\t2. Limas segi empat alas persegi panjang");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih jenis limas : ");
    while (scanf  ("%d", &jenis)==0 || jenis<1 || jenis>2){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan angka untuk memilih jenis limas : ");
        while (jenis=getchar() != '\n');
    }
    close();

if(jenis==1){
    float sisi, tinggi, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                      Limas Segi Empat Alas Persegi                         ||");
    printf("\n\t================================================================================"); 
    printf("\n\tMasukkan sisi         : ");
    while (scanf  ("%f", &sisi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan sisi         : ");
        while (sisi=getchar() != '\n');
    }
    printf("\n\tMasukkan tinggi       : ");
    while (scanf  ("%f", &tinggi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi       : ");
        while (tinggi=getchar() != '\n');
    }
    lp = fungsi_lp_limaspersegi(sisi, tinggi);
    volume = fungsi_volume_limaspersegi (sisi, tinggi);
    
    printf("\n\tLuas permukaan Limas segi empat alas persegi : %f\n\tVolume limas segi empat alas persegi : %f\n" , lp,volume);
    
}else if(jenis==2){
    float panjang, lebar, tinggi, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                   Limas Segi Empat Alas Persegi Panjang                    ||");
    printf("\n\t================================================================================"); 
    printf("\n\tMasukkan panjang         : ");
    while (scanf  ("%f", &panjang)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan panjang         : ");
        while (panjang=getchar() != '\n');
    }
    printf("\n\tMasukkan lebar           : ");
    while (scanf  ("%f", &lebar)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan lebar           : ");
        while (lebar=getchar() != '\n');
    }
    printf("\n\tMasukkan tinggi          : ");
    while (scanf  ("%f", &tinggi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi          : ");
        while (tinggi=getchar() != '\n');
    }
    lp = fungsi_lp_limaspersegipanjang(panjang, lebar, tinggi);
    volume = fungsi_volume_limaspersegipanjang(panjang,lebar,tinggi);

    printf("\n\tLuas permukaan Limas segi empat alas persegi panjang : %f\n\tVolume limas segi empat alas persegi panjang : %f\n" , lp,volume);
}
}

float fungsi_lp_limaspersegi(float sisi, float tinggi){
    float tinggisegitiga = sqrt((0.5*sisi)*(0.5*sisi))+(tinggi*tinggi);
    float luassegitiga = 0.5*sisi*tinggisegitiga;
    float jumlahluassisitegak = 4*luassegitiga;
    float luasalas = sisi*sisi;
    float luaspermukaan = jumlahluassisitegak + luasalas;
    return luaspermukaan;
}

float fungsi_volume_limaspersegi(float sisi, float tinggi){
    float luasalas = sisi*sisi;
    float volume = 0.33333*luasalas*tinggi;
    return volume;
}

float fungsi_lp_limaspersegipanjang(float panjang, float lebar, float tinggi){
    float tinggisegitiga1 = sqrt((0.5*panjang)*(0.5*panjang))+(tinggi*tinggi);
    float tinggisegitiga2 = sqrt((0.5*lebar)*(0.5*lebar))+(tinggi*tinggi);
    float luassegitiga1 = 0.5*panjang*tinggisegitiga1;
    float luassegitiga2 = 0.5*lebar*tinggisegitiga2;
    float jumlahluassisitegak = (2*luassegitiga1)+(2*luassegitiga2);
    float luasalas = panjang*lebar;
    float luaspermukaan = jumlahluassisitegak + luasalas;
    return luaspermukaan;
}

float fungsi_volume_limaspersegipanjang(float panjang, float lebar, float tinggi){
    float luasalas = panjang*lebar;
    float volume = 0.333333*luasalas*tinggi;
    return volume;
}

float prisma_segitiga(){
    float alassegitiga, tinggisegitiga, tinggiprisma, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                               Prisma Segitiga                              ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan alas segitiga   : ");
   while (scanf  ("%f", &alassegitiga)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan alas segitiga   : ");
        while (alassegitiga=getchar() != '\n');
    }
    
    printf("\n\tMasukkan tinggi segitiga : ");
    while (scanf  ("%f", &tinggisegitiga)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi segitiga : ");
        while (tinggisegitiga=getchar() != '\n');
    }

    printf("\n\tMasukkan tinggi prisma   : ");
    while (scanf  ("%f", &tinggiprisma)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi prisma   : ");
        while (tinggiprisma=getchar() != '\n');
    }
    lp = fungsi_lp_prismasegitiga(alassegitiga, tinggisegitiga, tinggiprisma);
    volume = fungsi_volume_prismasegitiga(alassegitiga, tinggiprisma, tinggisegitiga);

printf("\n\tLuas Prisma Segitiga : %f\n\tVolume Prisma Segitiga : %f\n" , lp,volume); 
}

float fungsi_lp_prismasegitiga(float alassegitiga, float tinggisegitiga, float tinggiprisma){
    float luasalas = 0.5*alassegitiga*tinggisegitiga;
    float sisimiringsegitiga = sqrt((alassegitiga*alassegitiga)+(tinggisegitiga*tinggisegitiga));
    float kelilingalas = alassegitiga+tinggisegitiga+sisimiringsegitiga;
    float luaspermukaan = (2*luasalas)+(kelilingalas*tinggiprisma);
    return luaspermukaan;
}

float fungsi_volume_prismasegitiga(float alassegitiga, float tinggisegitiga, float tinggiprisma){
    float luasalas = 0.5*alassegitiga*tinggisegitiga;
    float volume = luasalas*tinggiprisma;
    return volume;
}


float kerucut(){
    float tinggi, radius, lp, volume;
    printf("\n\t================================================================================");
    printf("\n\t||                                   Kerucut                                  ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan radius alas    : ");
    while (scanf  ("%f", &radius)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan radius alas    : ");
        while (radius=getchar() != '\n');
    }
    printf("\n\tMasukkan tinggi kerucut : ");
    while (scanf  ("%f", &tinggi)==0){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan tinggi kerucut : ");
        while (tinggi=getchar() != '\n');
    }
    lp = fungsi_lp_kerucut(radius, tinggi);
    volume = fungsi_volume_kerucut(radius, tinggi);

printf("\n\tLuas Permukaan Kerucut : %f\n\tVolume Kerucut : %f\n" , lp,volume);
}

float fungsi_lp_kerucut(float radius, float tinggi){
    float luasalas = phi*radius*radius;
    float sisimiring = sqrt((radius*radius)+(tinggi*tinggi));
    float luaspermukaan = phi*radius*(radius+sisimiring);
    return luaspermukaan;
}

float fungsi_volume_kerucut(float radius, float tinggi){
    float luasalas = phi*radius*radius;
    float volume = 0.33333*luasalas*tinggi;
    return volume;
}

int ulang(){

    int menu;
    printf("\n\t================================================================================");
    printf("\n\t||                  Apakah anda ingin menghitung kembali ?                    ||");
    printf("\n\t================================================================================");
    printf("\n\t|| 1. Ya, saya ingin menghitung kembali                                       ||");
    printf("\n\t|| 2. Tidak, sudah selesai                                                    ||");
    printf("\n\t================================================================================");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih : ");
    while (scanf  ("%d", &menu)==0 || menu<1 || menu>2){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan angka untuk memilih   : ");
        while (menu=getchar() != '\n');
    }

    if (menu==1){
        close();
        main();
    }else if (menu==2){
        close();
        end();
    }
}

int main(){

    start();
    int menu;
    printf("\n\t================================================================================");
    printf("\n\t||                           Program Bangun Ruang                             ||");
    printf("\n\t================================================================================");
    printf("\n\t|| 1. Tabung                                                                  ||");
    printf("\n\t|| 2. Bola                                                                    ||");
    printf("\n\t|| 3. Limas Segi Empat                                                        ||");
    printf("\n\t|| 4. Prisma Segitiga                                                         ||");
    printf("\n\t|| 5. Kerucut                                                                 ||");
    printf("\n\t================================================================================");
    printf("\n\tProgram ini akan mencari luas permukaan dan volume dari bangun ruang yang anda pilih");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih bangun ruang : ");
    while (scanf  ("%d", &menu)==0 || menu<1 || menu>5){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan angka untuk memilih bangun ruang : ");
        while (menu=getchar() != '\n');
    }
    close();

    
    if(menu==1){
      tabung();
    }else if(menu==2){
      bola();
    }else if(menu==3){
      limas_segiempat();
    }else if(menu==4){
      prisma_segitiga();
    }else if(menu==5){
      kerucut();
    }
      printf("\n\t================================================================================");
      ulang();
    return 0;
}

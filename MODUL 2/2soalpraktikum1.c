#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/*(strcmp(bulan, 'A')) /*'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M' , 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm' , 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'))*/
void mulai();
void close();
int main();
void aries();
void taurus();
void gemini();
void cancer();
void leo();
void virgo();
void libra();
void scorpio();
void sagitarius();
void capricorn();
void aquarius();
void pisces();
void ulang();
void februari();
void end();


void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||            Menentukan Zodiak             ||");
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

void close(){
    printf ("\n\tBerikutnya");
    getchar();
    printf ("\n\tTekan enter untuk melanjutkan...");
    getchar();
    system ("clear");
}

void aries(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Aries                           **");
    printf ("\n\t*****************************************************************");
}

void taurus(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Taurus                          **");
    printf ("\n\t*****************************************************************");
}

void gemini(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Gemini                          **");
    printf ("\n\t*****************************************************************");
}

void cancer(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Cancer                          **");
    printf ("\n\t*****************************************************************");
}

void leo(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                               Leo                           **");
    printf ("\n\t*****************************************************************");
}

void virgo(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Virgo                           **");
    printf ("\n\t*****************************************************************");
}

void libra(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Libra                           **");
    printf ("\n\t*****************************************************************");
}

void scorpio(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Scorpio                         **");
    printf ("\n\t*****************************************************************");
}

void sagitarius(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                            Sagitarius                       **");
    printf ("\n\t*****************************************************************");
}

void capricorn(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                            Capricorn                        **");
    printf ("\n\t*****************************************************************");
}

void aquarius(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                            Aquarius                         **");
    printf ("\n\t*****************************************************************");
}

void pisces(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Zodiak Kamu Adalah                    **");
    printf ("\n\t**                             Pisces                          **");
    printf ("\n\t*****************************************************************");
}

void februari(){
    printf ("\n\t*****************************************************************");
    printf ("\n\t**        Tidak ada tanggal 30 dan 31 dalam Februari           **");
    printf ("\n\t**                      Silahkan ulangi                        **");
    printf ("\n\t*****************************************************************");
    printf ("\n\tTekan enter untuk melanjutkan...");
}

int main(){
    mulai();
    int tanggal, bulan;
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                       Selamat Datang di                     **");
    printf ("\n\t**                    Program Menentukan Zodiak                **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                         Tanggal Lahir                       **");
    printf ("\n\t*****************************************************************");
    printf ("\n\tMasukkan tanggal lahir kamu : ");
    while (scanf("%d", &tanggal)==0 || tanggal<1 || tanggal>31 ){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tInputan berupa angka");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan tanggal lahir kamu : ");
        while (tanggal=getchar() != '\n');
    }
    close();
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                          Bulan Lahir                        **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t** (1)  Januari                                                **");
    printf ("\n\t** (2)  Februari                                               **");
    printf ("\n\t** (3)  Maret                                                  **");
    printf ("\n\t** (4)  April                                                  **");
    printf ("\n\t** (5)  Mei                                                    **");
    printf ("\n\t** (6)  Juni                                                   **");
    printf ("\n\t** (7)  Juli                                                   **");
    printf ("\n\t** (8)  Agustus                                                **");
    printf ("\n\t** (9)  September                                              **");
    printf ("\n\t** (10) Oktober                                                **");
    printf ("\n\t** (11) November                                               **");
    printf ("\n\t** (12) Desember                                               **");
    printf ("\n\t*****************************************************************");
    printf ("\n\tMasukkan angka bulan lahir kamu   : ");
    while (scanf  ("%d", &bulan)==0 || bulan<1 || bulan>12 ){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf ("\n\tMasukkan angka bulan lahir kamu   : ");
        while (bulan=getchar() != '\n');
    }
    printf ("\n\t*****************************************************************");
    close();
    
    if (tanggal>=21 && tanggal<=31 && bulan == 3){
        aries();
    }else if (tanggal>=1 && tanggal<=19 && bulan== 4){
        aries();
    }else if (tanggal>=20 && tanggal<=30 && bulan== 4){
        taurus();
    }else if (tanggal>=1 && tanggal<=20 && bulan == 5){
        taurus();
    }else if (tanggal>=21 && tanggal <=31 && bulan == 5){
        gemini();
    }else if (tanggal>=1 && tanggal <=20 && bulan == 6){
        gemini();
    }else if (tanggal>=21 && tanggal <=30 && bulan == 6){
        cancer();
    }else if (tanggal>=1 && tanggal <=22 && bulan == 7){
        cancer();
    }else if (tanggal>=23 && tanggal <=31 && bulan == 7){
        leo();
    }else if (tanggal>=1 && tanggal <=22 && bulan == 8){
        leo();
    }else if (tanggal>=23 && tanggal <=31 && bulan == 8){
        virgo();
    }else if (tanggal>=1 && tanggal <=22 && bulan == 9){
        virgo();
    }else if (tanggal>=23 && tanggal <=30 && bulan == 9){
        libra();
    }else if (tanggal>=1 && tanggal <=22 && bulan == 10){
        libra();
    }else if (tanggal>=23 && tanggal <=31 && bulan == 10){
        scorpio();
    }else if (tanggal>=1 && tanggal <=21 && bulan == 11){
        scorpio();
    }else if (tanggal>=22 && tanggal <=30 && bulan == 11){
        sagitarius();
    }else if (tanggal>=1 && tanggal <=21 && bulan == 12){
        sagitarius();
    }else if (tanggal>=22 && tanggal <31 && bulan == 12){
        capricorn();
    }else if (tanggal>=1 && tanggal <=19 && bulan == 1){
        capricorn();
    }else if (tanggal>=20 && tanggal <=31 && bulan == 1){
        aquarius();
    }else if (tanggal>=1 && tanggal <=18 && bulan == 2){
        aquarius();
    }else if (tanggal>=19 && tanggal <=29 && bulan == 2){
        pisces();
    }else if (tanggal>=1 && tanggal <=20 && bulan == 3){
        pisces();
    }else if (tanggal>=30 && tanggal<=31 && bulan == 2){
        februari();
        getchar();
        main();
    }

    printf ("\n\tTanggal Lahir kamu : %d", tanggal);
    printf ("\n\tBulan Lahir kamu   : %d", bulan);
    ulang();
    return 0;
    }

void ulang(){
    int menu;
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                 Apakah anda ingin mengulang ?               **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t** (1)  Ya, saya ingin menentukan zodiak lagi                  **");
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

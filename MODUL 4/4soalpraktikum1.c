#include <stdio.h>
#include <stdlib.h>

void mulai();
void close();
void end();
int main();
void ulang();

void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||          MENGHITUNG GAJI HARIAN          ||");
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

// Penggunaan struct
struct gaji {
    float gaji_perjam;
    int jam_kerja;
    float gaji_perhari;
    float gaji_lembur;
    float gaji_pokok;
};

int main(){
    mulai();
    printf("\n\t==============================================");
    printf("\n\t||       PROGRAM MENGHITUNG GAJI HARIAN     ||");
    printf("\n\t==============================================");

    //mendeklarsikan variabel struct
    struct gaji pegawai;
    // mengisi nilai ke dalam variabel yang ada dalam struct
    pegawai.gaji_perjam = 10.625;
    pegawai.gaji_lembur = 8 * pegawai.gaji_perjam;

    printf("\n\tMasukkan jumlah jam kerja (jam) : ");
    while(scanf("%d", &pegawai.jam_kerja)==0 || pegawai.jam_kerja<0 || pegawai.jam_kerja >24){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan masukkan berupa angka dan dalam satuan jam");
        printf("\n\t--------------------------------------------------------");
        printf("\n\tMasukkan jumlah jam kerja (jam) : ");
        while(pegawai.jam_kerja = getchar() != '\n');
    }
    close();

    pegawai.gaji_pokok = pegawai.gaji_perjam * pegawai.jam_kerja;

    if (pegawai.jam_kerja>8){
        pegawai.gaji_perhari = pegawai.gaji_lembur + pegawai.gaji_pokok;
        printf("\n\t==============================================");
        printf("\n\t||            RINCIAN GAJI HARIAN           ||");
        printf("\n\t==============================================");
        printf("\n\tJumlah jam kerja kamu  : %d jam", pegawai.jam_kerja);
        printf("\n\tGaji pokok perhari     : Rp. %.2f", pegawai.gaji_pokok);
        printf("\n\tUang Lembur            : Rp. %.2f", pegawai.gaji_lembur);
        printf("\n\t----------------------------------");
        printf("\n\tTotal gaji harian kamu : Rp. %.2f", pegawai.gaji_perhari);
    }else{
        pegawai.gaji_perhari = pegawai.gaji_pokok;
        printf("\n\t==============================================");
        printf("\n\t||            RINCIAN GAJI HARIAN           ||");
        printf("\n\t==============================================");
        printf("\n\tJumlah jam kerja kamu  : %d jam", pegawai.jam_kerja);
        printf("\n\tGaji pokok perhari     : Rp. %.2f", pegawai.gaji_pokok);
        printf("\n\tUang Lembur            : Rp. 0");
        printf("\n\t----------------------------------");
        printf("\n\tTotal gaji harian kamu : Rp. %.2f", pegawai.gaji_perhari);
    }
    printf("\n\n");
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
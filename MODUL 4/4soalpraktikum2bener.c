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
    printf("\n\t||            STRUCT DAN UNION              ||");
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

struct bangun_ruang_struct {
    float luas_permukaan_struct;
    float sisi_struct;
    float volume_struct;
};

union bangun_ruang_union {
    float luas_permukaan_union;
    float volume_union;
    float sisi_union;
};

int main(){
    mulai();
    struct bangun_ruang_struct kubus_struct;
    union bangun_ruang_union kubus_union;

    float sisi; 

    printf("\n\t==============================================");
    printf("\n\t||            Kubus Struct dan Union        ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan sisi kubus : ");
    scanf("%f", &sisi);

    kubus_struct.sisi_struct = sisi;
    kubus_struct.volume_struct = kubus_struct.sisi_struct * kubus_struct.sisi_struct * kubus_struct.sisi_struct;
    kubus_struct.luas_permukaan_struct = 6 * kubus_struct.sisi_struct * kubus_struct.sisi_struct;

    printf("\n\t==============================================");
    printf("\n\t||             Kubus Dengan Struct          ||");
    printf("\n\t==============================================");
    printf("\n\tSisi           : %.2f", kubus_struct.sisi_struct);
    printf("\n\tVolume         : %.2f", kubus_struct.volume_struct);
    printf("\n\tLuas Permukaan : %.2f", kubus_struct.luas_permukaan_struct);

    printf("\n\t==============================================");
    printf("\n\t||              Kubus Dengan Union          ||");
    printf("\n\t==============================================");
    kubus_union.sisi_union = sisi;
    printf("\n\tSisi           : %.2f", kubus_struct.sisi_struct);
    kubus_union.volume_union = kubus_union.sisi_union * kubus_union.sisi_union * kubus_union.sisi_union;
    printf("\n\tVolume         : %.2f", kubus_struct.volume_struct);
    kubus_union.luas_permukaan_union = 6 * sisi *sisi;
    printf("\n\tLuas Permukaan : %.2f", kubus_struct.luas_permukaan_struct);

    //PS : PENGISIAN VARIABEL PADA UNION HARUS DILAKUKKAN SECARA TERPISAH SEBELUM PEMANGGILAN VARIABEL
    //DIKARENAKAN UNION MEMILIKI SIFAT DIMANA SETIAP VARIABEL YANG DIUBAH MAKA AKAN OTOMATIS MENGUBAH VARIABEL LAINNYA

    printf("\n\t==============================================");
    printf("\n\t||                Ukuran Memory             ||");
    printf("\n\t==============================================");
    printf("\n\tPada Kubus Struct : %d", sizeof(kubus_struct));
    printf("\n\tPada Kubus Struct : %d", sizeof(kubus_union));
    printf("\n\n");
    close();
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

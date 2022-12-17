#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void mulai();
int main();
void close();
void end();
void ulang();


void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||          Menentukan Nilai Akhir          ||");
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
    printf("\n\tTekan enter untuk melanjutkan..");
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

int main(){
    mulai();
    float absensi,  tugas1,  tugas2,  tugas3,  quiz,  uts,  uas;
    printf("\n\t========================================================");
    printf("\n\t||            Program Menentukan Nilai Akhir          ||");
    printf("\n\t========================================================");
    printf("\n\t========================================================");
    printf("\n\t||                      Absensi                       ||");
    printf("\n\t========================================================");
    printf("\n\tMasukkan berapa kali anda absensi : ");
    while (scanf("%f", &absensi) == 0 || absensi >15){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang (maks absen 15 kali)");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan berapa kali anda absensi : ");
        while(absensi=getchar() != '\n');
    }
    close();
    printf("\n\t========================================================");
    printf("\n\t||                    Nilai Tugas                     ||");
    printf("\n\t========================================================");
    printf("\n\tMasukkan nilai tugas 1 : ");
    while (scanf("%f", &tugas1) == 0 || tugas1 < 0 || tugas1 > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai tugas 1 : ");
        while(tugas1=getchar() != '\n');
    }
    printf("\n\tMasukkan nilai tugas 2 : ");
    while (scanf("%f", &tugas2) == 0 || tugas2 < 0 || tugas2 > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai tugas 2 : ");
        while(tugas2=getchar() != '\n');
    }
    printf("\n\tMasukkan nilai tugas 3 : ");
    while (scanf("%f", &tugas3) == 0 || tugas3 < 0 || tugas3 > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai tugas 3 : ");
        while(tugas3=getchar() != '\n');
    }

    float totalnilaitugas = ((tugas1 + tugas2 + tugas3)/3);

    close();
    printf("\n\t========================================================");
    printf("\n\t||                     Nilai Quiz                     ||");
    printf("\n\t========================================================");
    printf("\n\tMasukkan nilai quiz : ");
    while (scanf("%f", &quiz) == 0 || quiz < 0 || quiz > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai quiz : ");
        while(quiz=getchar() != '\n');
    }
    close();
    printf("\n\t========================================================");
    printf("\n\t||                    Nilai UTS                       ||");
    printf("\n\t========================================================");
    printf("\n\tMasukkan nilai uts : ");
    while (scanf("%f", &uts) == 0 || uts < 0 || uts > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai uts : ");
        while(uts=getchar() != '\n');
    }
    close();
    printf("\n\t========================================================");
    printf("\n\t||                    Nilai UAS                       ||");
    printf("\n\t========================================================");
    printf("\n\tMasukkan nilai uas : ");
    while (scanf("%f", &uas) == 0 || uas < 0 || uas > 100){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t----------------------------------------------------");
        printf("\n\tMasukkan nilai uas : ");
        while(uts=getchar() != '\n');
    }
    close();

    float nilaiakhir = ((absensi/15) * 0.05 * 100) + (totalnilaitugas * 0.2) + (quiz * 0.15) + (uts * 0.3) + (uas * 0.3);
    printf("\n\t========================================================");
    printf("\n\tAbsensi = %f", (absensi/15) * 5);
    printf("\n\tTotal Tugas = %f", (totalnilaitugas * 0.2));
    printf("\n\tQuis = %f", (quiz * 0.15));
    printf("\n\tUTS = %f", (uts * 0.3));
    printf("\n\tUAS = %f", (uas * 0.3));
    printf("\n\tNilai akhir anda adalah = %f", nilaiakhir);
    printf("\n\t========================================================");

    
    if (nilaiakhir >=80 && nilaiakhir <=100){
        printf("\n\t========================================================");
        printf("\n\t||                     Grade A                        ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=75 && nilaiakhir <80){
        printf("\n\t========================================================");
        printf("\n\t||                    Grade B+                        ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=65 && nilaiakhir <75){
        printf("\n\t========================================================");
        printf("\n\t||                     Grade B                        ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=60 && nilaiakhir <65){
        printf("\n\t========================================================");
        printf("\n\t||                    Grade C+                        ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=55 && nilaiakhir <60){
        printf("\n\t========================================================");
        printf("\n\t||                    Grade C                         ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=50 && nilaiakhir <55){
        printf("\n\t========================================================");
        printf("\n\t||                   Grade D+                       ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=45 && nilaiakhir <50){
        printf("\n\t========================================================");
        printf("\n\t||                    Grade D                         ||");
        printf("\n\t========================================================");
    }else if (nilaiakhir >=0 && nilaiakhir <45){
        printf("\n\t========================================================");
        printf("\n\t||                     Grade E                        ||");
        printf("\n\t========================================================");
    }
    ulang();
    return 0;

}

void ulang(){
    int menu;
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                 Apakah anda ingin mengulang ?               **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t** (1)  Ya, saya ingin menentukan nilai akhir lagi             **");
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

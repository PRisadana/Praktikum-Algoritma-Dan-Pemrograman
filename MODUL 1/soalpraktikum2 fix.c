#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define phi 3.14

int main();
int ulang();
void start();
void close();
void segitiga_sembarang();
void belah_ketupat();
void trapesium ();
void jajar_genjang ();
void lingkaran();
void end();


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

void start(){
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||              BANGUN DATAR                ||");
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

void segitiga_sembarang(){
    float sisi1;
    float sisi2;
    float sisi3;
    printf("\n\t================================================================================");
    printf("\n\t||                              Segitiga Sembarang                            ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan sisi 1 : ");
  while (scanf("%f", &sisi1) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi 1 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi 2 : ");
    while (scanf("%f", &sisi2) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi 2 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi 3 : ");
    while (scanf("%f", &sisi3) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi 3 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    float keliling = sisi1 + sisi2 + sisi3;
    float setengah_keliling  = keliling/2;
    float luas = sqrt(setengah_keliling*(setengah_keliling-sisi1)*(setengah_keliling-sisi2)*(setengah_keliling-sisi3));
    printf("\n\tLuas Segitiga : %f\n\tKeliling Segitiga : %f\n" , luas,keliling);
  }


void belah_ketupat(){
    float diagonal1;
    float diagonal2;
    printf("\n\t================================================================================");
    printf("\n\t||                                 Belah Ketupat                              ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan diagonal 1 : ");
while (scanf("%f", &diagonal1) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan diagonal 1 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
printf("\n\tMasukkan diagonal 2 : ");
while (scanf("%f", &diagonal2) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan diagonal 2 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
float sisi = sqrt((0.5*diagonal1)*(0.5*diagonal1))+((0.5*diagonal2)*(0.5*diagonal1));
float keliling  = 4*sisi;
float luas = 0.5*diagonal1*diagonal2;
printf("\n\tLuas Belah Ketupat : %f\n\tKeliling Belah Ketupat : %f\n" , luas,keliling);
}

void jajar_genjang (){
    float alas;
    float tinggi;
    float sisimiring1;
    float sisimiring2;
    printf("\n\t================================================================================");
    printf("\n\t||                                 Jajar Genjang                              ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan alas          : ");
while (scanf("%f", &alas) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan alas : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
printf("\n\tMasukkan tinggi        : ");
while (scanf("%f", &tinggi) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan tinggi : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
printf("\n\tMasukkan sisi miring 1 : ");
while (scanf("%f", &sisimiring1) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi miring 1 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
printf("\n\tMasukkan sisi miring 2 : ");
while (scanf("%f", &sisimiring2) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi miring 2 : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
float keliling  = 2*(alas+sisimiring1);
float luas = alas*tinggi;
printf("\n\tLuas Jajar Genjang : %f\n\tKeliling Jajar Genjang : %f\n" , luas,keliling);
}

void trapesium (){

    int jenis;
    printf("\n\t================================================================================");
    printf("\n\t||                                 Trapesium                                  ||");
    printf("\n\t================================================================================");
    printf("\n\tSilahkan pilih jenis trapesium : ");
    printf("\n\t1. Trapesium Sama Kaki");
    printf("\n\t2. Trapesium Siku Siku");
    printf("\n\t3. Trapesium Sembarang");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih jenis trapesium : ");
    while (scanf("%d", &jenis) == 0 || jenis < 1 || jenis > 3 )
    {
        printf("\t--------------------------------------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tSilahkan memilih angka 1, 2 atau 3 untuk memilih jenis trapesium ");
        printf("\n\t------------------------------------------------------------------------");
        printf("\n\tMasukkan angka untuk memilih jenis trapesium : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    close();

if(jenis==1){
    float sisibawah, sisiatas, tinggi, sisimiring, keliling, luas;
    printf("\n\t================================================================================");
    printf("\n\t||                            Trapesium Sama Kaki                             ||");
    printf("\n\t================================================================================"); 
    printf("\n\tsisi a dan b adalah sisi yang sejajar");
    printf("\n\tMasukkan sisi a      : ");
    while (scanf("%f", &sisiatas) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi a : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi b      : ");
    while (scanf("%f", &sisibawah) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi b : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi miring : ");
    while (scanf("%f", &sisimiring) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi miring : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan tinggi      : ");
    while (scanf("%f", &tinggi) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan tinggi : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    luas = 0.5*(sisibawah+sisiatas)*tinggi;
    keliling = sisiatas+sisibawah+sisimiring+sisimiring;
    printf("\n\tLuas Trapesium Sama Kaki : %f\n\tKeliling Sama Kaki : %f\n" , luas,keliling);
}else if(jenis==2){
    float sisibawah, sisiatas, tinggi, keliling, luas, miring;
    printf("\n\t================================================================================");
    printf("\n\t||                            Trapesium Siku Siku                             ||");
    printf("\n\t================================================================================"); 
    printf("\n\tsisi a dan b adalah sisi yang sejajar");
    printf("\n\tMasukkan sisi a      : ");
    while (scanf("%f", &sisiatas) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi a : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi b      : ");
    while (scanf("%f", &sisibawah) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi b : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan tinggi      : ");
    while (scanf("%f", &tinggi) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan tinggi : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    miring = sqrt(tinggi*tinggi)-((sisiatas-sisibawah)*(sisiatas-sisibawah)*(sisiatas-sisibawah)*(sisiatas-sisibawah));
    luas = 0.5*(sisibawah+sisiatas)*tinggi;
    keliling = sisiatas+sisibawah+miring+miring;
    printf("\n\tLuas Trapesium Siku Siku : %f\n\tKeliling Siku Siku : %f\n" , luas,keliling);
}else if(jenis==3){
    float sisibawah, sisiatas, tinggi, sisimiring, keliling, luas;
    printf("\n\t================================================================================");
    printf("\n\t||                            Trapesium Sembarang                             ||");
    printf("\n\t================================================================================"); 
    printf("\n\tsisi a dan b adalah sisi yang sejajar");
    printf("\n\tMasukkan sisi a      : ");
    while (scanf("%f", &sisiatas) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi a : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi b      : ");
    while (scanf("%f", &sisibawah) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi b : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan sisi miring : ");
    while (scanf("%f", &sisimiring) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi miring : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    printf("\n\tMasukkan tinggi      : ");
    while (scanf("%f", &tinggi) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan tinggi: ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
    luas = 0.5*(sisibawah+sisiatas)*tinggi;
    keliling = sisiatas+sisibawah+sisimiring+sisimiring;
    printf("\n\tLuas Trapesium Sembarang : %f\n\tKeliling Trapesium Sembarang : %f\n" , luas,keliling);
}
}

void lingkaran(){
    float radius;
    printf("\n\t================================================================================");
    printf("\n\t||                                  Lingkaran                                 ||");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan radius : ");
  while (scanf("%f", &radius) == 0)
      {
          printf("\t------------------------------------------------------------------------------");
          printf("\n\tKarakter yang Anda inputkan salah!");
          printf("\n\tMohon inputkan angka ");
          printf("\n\t------------------------------------------------------------------------------");
          printf("\n\tMasukkan sisi miring : ");
          int c;
          while ((c = getchar()) != '\n' && c != EOF);
      }
float keliling = 2*phi*radius;
float luas = phi*radius*radius;
printf("\n\tLuas Lingkaran : %f\n\tKeliling Lingkaran : %f\n" , luas,keliling);  
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
        while (scanf("%d", &menu) == 0 || menu < 1 || menu > 2)
        {
                printf("\t------------------------------------------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tSilahkan memilih angka 1 atau 2 memilih ");
                printf("\n\t------------------------------------------------------------------------------");
                printf("\n\tMasukkan angka untuk memilih : ");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
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
    printf("\n\t||                           Program Bangun Datar                             ||");
    printf("\n\t================================================================================");
    printf("\n\t|| 1. Segitiga Sembarang                                                      ||");
    printf("\n\t|| 2. Belah Ketupat                                                           ||");
    printf("\n\t|| 3. Jajar Genjang                                                           ||");
    printf("\n\t|| 4. Trapesium                                                               ||");
    printf("\n\t|| 5. Lingkaran                                                               ||");
    printf("\n\t================================================================================");
    printf("\n\tProgram ini akan mencari luas dan keliling dari bangun datar yang anda pilih");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih bangun datar : ");
    while (scanf("%d", &menu) == 0 || menu < 1 || menu > 5)
    {
        printf("\t------------------------------------------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tSilahkan memilih angka 1, 2, 3, 4 atau 5 untuk memilih bangun datar ");
        printf("\n\t------------------------------------------------------------------------------");
        printf("\n\tMasukkan angka untuk memilih bangun datar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
      close();

    if(menu==1){
      segitiga_sembarang();
    }else if(menu==2){
      belah_ketupat();
    }else if(menu==3){
      jajar_genjang();
    }else if(menu==4){
      trapesium();
    }else if(menu==5){
      lingkaran();
    }
      printf("\n\t================================================================================");
      ulang();
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main();
int ulang();
void start();
void close();
void penjumlahan(float angka1, float angka2);
void pengurangan (float angka1, float angka2);
void pembagian (float angka1, float angka2);
void perkalian (float angka1,float angka2);
void modulus (float angka1, float angka2);
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
    printf("\n\t||           KALKULATOR BILANGAN            ||");
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

void penjumlahan(float angka1, float angka2){
        printf("\n\t================================================================================");
        printf("\n\t||                              Program Penjumlahan                           ||");
        printf("\n\t================================================================================");
        printf("\n\tMasukkan angka 1 : ");
        while (scanf("%f", &angka1)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 1 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        printf("\n\tMasukkan angka 2 : ");
        while (scanf("%f", &angka2)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 2 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        float hasil = angka1+angka2;
        printf("\n\tHasil Penjumlahan : %.2f dan %.2f = %.2f", angka1, angka2, hasil);
}

void pengurangan (float angka1, float angka2){
        printf("\n\t================================================================================");
        printf("\n\t||                             Program Pengurangan                            ||");
        printf("\n\t================================================================================");
        printf("\n\tMasukkan angka 1 : ");
        while (scanf("%f", &angka1)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 1 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        printf("\n\tMasukkan angka 2 : ");
        while (scanf("%f", &angka2)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 2 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        float hasil = angka1-angka2;
        printf("\n\tHasil Pengurangan : %.2f dan %.2f = %.2f", angka1, angka2, hasil);
}

void pembagian (float angka1, float angka2){
        printf("\n\t================================================================================");
        printf("\n\t||                             Program Pembagian                              ||");
        printf("\n\t================================================================================");
        printf("\n\tMasukkan angka 1 : ");
        while (scanf("%f", &angka1)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 1 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        printf("\n\tMasukkan angka 2 : ");
        while (scanf("%f", &angka2)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 2 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        float hasil = angka1/angka2;
        printf("\n\tHasil Pembagian : %.2f dan %.2f = %.2f", angka1, angka2, hasil);
}

void perkalian (float angka1,float angka2){
        printf("\n\t===============================================================================");
        printf("\n\t||                             Program Perkalian                              ||");
        printf("\n\t================================================================================");
        printf("\n\tMasukkan angka 1 : ");
        while (scanf("%f", &angka1)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 1 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        printf("\n\tMasukkan angka 2 : ");
        while (scanf("%f", &angka2)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 2 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }
        float hasil = angka1*angka2;
        printf("\n\tHasil Perkalian : %.2f dan %.2f = %.2f", angka1, angka2, hasil);
}

void modulus (float angka1, float angka2){
        printf("\n\t================================================================================");
        printf("\n\t||                             Program Modulus                                ||");
        printf("\n\t================================================================================");
        printf("\n\tMasukkan angka 1 : ");
        while (scanf("%f", &angka1)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
               printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------qq------");
                printf("\n\tMasukkan angka 1 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }

        printf("\n\tMasukkan angka 2 : ");
        while (scanf("%f", &angka2)==0){
                printf("\t----------------------------------------------");
                printf("\n\tKarakter yang Anda inputkan salah!");
               printf("\n\tMohon inputkan angka \n");
                printf("\t----------------------------------------------");
                printf("\n\tMasukkan angka 2 : ");
                int c;
                while((c=getchar())!='\n' && c!=EOF);
        }

        float hasil =  fmod(angka1, angka2);
        printf("\n\tHasil Modulus : %f dan %f = %f", angka1, angka2, hasil);
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

int main (){

    start();
    int menu;
    printf("\n\t================================================================================");
    printf("\n\t||                             Program Kalkulator                             ||");
    printf("\n\t================================================================================");
    printf("\n\t|| 1. Penjumlahan                                                             ||");
    printf("\n\t|| 2. Pengurangan                                                             ||");
    printf("\n\t|| 3. Pembagian                                                               ||");
    printf("\n\t|| 4. Perkalian                                                               ||");
    printf("\n\t|| 5. Modulus                                                                 ||");
    printf("\n\t================================================================================");
    printf("\n\t================================================================================");
    printf("\n\tMasukkan angka untuk memilih operasi : ");
    while (scanf("%d", &menu) == 0 || menu < 1 || menu > 5)
    {
        printf("\t------------------------------------------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tSilahkan memilih angka 1, 2, 3, 4 atau 5 untuk memilih operasi ");
        printf("\n\t------------------------------------------------------------------------------");
        printf("\n\tMasukkan angka untuk memilih operasi : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    close();
    
    float angka1;
    float angka2;
   
    if(menu==1){
      penjumlahan(angka1, angka2);
    }else if(menu==2){
      pengurangan(angka1, angka2);
    }else if(menu==3){
      pembagian(angka1, angka2);
    }else if(menu==4){
      perkalian(angka1, angka2);
    }else if(menu==5){
      modulus(angka1, angka2);
    }
      printf("\n\t================================================================================");
      ulang();
    return 0;
}
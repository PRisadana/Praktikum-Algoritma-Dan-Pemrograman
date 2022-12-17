#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void ulang();
void mulai();
void end();
int main();
void enkripsi();
void deskripsi();
void fungsi_enkripsi(char *input, int key);
void fungsi_deskripsi(char *input, int key);
void close();

void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
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

int main(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t==============================================");
    printf("\n\t||Pilihan Menu Program:                     ||");
    printf("\n\t|| 1. Enkripsi                              ||");
    printf("\n\t|| 2. Deskripsi                             ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 2){
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        while(menu=getchar()!='\n' );
    }
    close();
 
    if(menu == 1){
        enkripsi();
    }else if(menu == 2){
        deskripsi();
    }
    close();
    ulang();
}
 
void enkripsi(){
    int kunci;
    char teks[100];
    printf("\n\t==============================================");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t==============================================");
    printf("\n\t||                 ENKRIPSI                 ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan teks yang ingin di-enkripsi : ");
    fflush(stdin);
    fgets(teks, sizeof(teks), stdin);
    printf("\n\tMasukan jumlah pergeseran : ");
    while (scanf("%d", &kunci)==0 || kunci < 1){
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukan jumlah pergeseran : ");
        while(kunci=getchar()!='\n' );
    }
    printf("\t----------------------------------------------");
    printf("\n\tTeks sebelum di-enkripsi : %s", teks);
    fungsi_enkripsi(teks, kunci);
    printf("\n\tTeks setelah di-enkripsi : %s", teks);
    printf("\n\t===============================================");
}
 
void deskripsi(){
    int kunci;
    char teks[100];
    printf("\n\t==============================================");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t==============================================");
    printf("\n\t||                DESKRIPSI                 ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan teks yang ingin di-deskripsi : ");
    fflush(stdin);
    fgets(teks, sizeof(teks), stdin);
    printf("\n\tMasukan jumlah pergeseran : ");
    while (scanf("%d", &kunci)==0 || kunci < 1){
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        while(kunci=getchar()!='\n');
    }
    printf("\t----------------------------------------------");
    printf("\n\tTeks sebelum di-deskripsi : %s", teks);
    fungsi_deskripsi(teks, kunci);
    printf("\n\tTeks setelah di-deskripsi : %s", teks);
    printf("\n\t===============================================");
}
 
void fungsi_enkripsi(char *input, int key){
    int i = 0;
    char temp;
    for (i; input[i] != '\0'; i++){
        temp = input[i];
        if(temp != ' '){
            if(isupper(temp))
            temp = (temp + key - 'A') % 26 + 'A';
            temp = (temp + key - 'a') % 26 + 'a';
        }
        input[i] = temp;
    }
}
 
void fungsi_deskripsi(char *input, int key){
    int i = 0;
    while (input[i] != '\0'){
        input[i] = input[i] - key;
        i++;
    }
}

void ulang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||       Apakah anda ingin mengulang ?      ||");
    printf("\n\t==============================================");
    printf("\n\t|| (1)  Ya, saya ingin mengurutkan lagi     ||");
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
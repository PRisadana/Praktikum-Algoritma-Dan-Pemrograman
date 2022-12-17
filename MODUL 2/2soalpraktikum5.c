#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mulai();
void close();
int main();
void hanoirekursif(int i, char x, char y, char z);
void hanoiiteratif(int piringan);
void ulang();
void end();

// revisi berisi langkah minimum yang diperlukan , clear


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
    printf("\n\t||               Menara Hanoi               ||");
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

int main(){
    mulai();
    int pilih;
    int hasil;
    printf("\n\t=================================================");
    printf("\n\t||            Program Menara Hanoi             ||");
    printf("\n\t=================================================");
    printf("\n\t|| (1) Metode Rekursif                           ");
    printf("\n\t|| (2) Metode Iteratif                           ");
    printf("\n\t=================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%d", &pilih) == 0 || pilih < 1 || pilih > 2){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang...");
        printf("\n\t=================================================");
        printf("\n\tMasukkan pilihan : ");
        while (pilih = getchar() != '\n');
    }
    close();

    //membuat tiang tiang menara hanoi
    int piringan;
    printf("\n\tMasukkan jumlah piringan : ");
    while (scanf("%d", &piringan) == 0){
        printf("\n\tKarakter yang anda inputkan salah");
        printf("\n\tSilahkan inputkan ulang");
        printf("\n\t=================================================");
        printf("\n\tMasukkan jumlah piringan : ");
        while (piringan = getchar() != '\n' );
    }
    printf("\n\tLangkah langkah pemindahan piringan : ");
    
    if(pilih==1){
        hanoirekursif(piringan, 'A', 'B', 'C');
    }else if(pilih==2){
        hanoiiteratif(piringan);
    }

        hasil = pow (2, piringan)-1;
        printf("\n\tJumlah langkah minimum yang diperlukan : %d", hasil);

    ulang();
}

//membuat kelas hanoi baru
void hanoirekursif(int i, char x, char y, char z){
    if(i>0){
        hanoirekursif(i-1, x, z, y);
        printf("\n\tpindahkan piringan %d dari %c ke %c", i, x, z);
        hanoirekursif(i-1, y, x, z);
    }
}


void hanoiiteratif(int piringan){
    puts("");
    for(int x=1;x<(1 << piringan);x++){
        printf("\n\tPindahkan piringan dari %d ke %d\n",(x&x-1)%piringan + 1,((x|x-1)+1)%piringan + 1);
    }  
}

void ulang(){
    int menu;
    printf ("\n\t*****************************************************************");
    printf ("\n\t**                 Apakah anda ingin mengulang ?               **");
    printf ("\n\t*****************************************************************");
    printf ("\n\t*****************************************************************");
    printf ("\n\t** (1)  Ya, saya ingin bermain menara hanoi lagi               **");
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

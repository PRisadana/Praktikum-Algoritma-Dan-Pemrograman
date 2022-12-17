#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mulai();
void close();
void end();
void main();
void bilanganRandom(int arr[], int n);
void duplikatArray(int asal[], int target[], int n);
void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
void bubbleSortPointer(int *array, int size);
void ulang();

void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||                STATISTIKA                ||");
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

void main(){
    int n, pilihan;
    clock_t waktu;
    double waktu1, waktu2;
    mulai();
    printf("\n\t==============================================");
    printf("\n\t||          PROGRAM SORTING DENGAN          ||");
    printf("\n\t||               BUBBLE SORT                ||");
    printf("\n\t==============================================");
    printf("\n\t||Pilihan Jumlah Data:                      ||");
    printf("\n\t|| 1. 1000 Data                             ||");
    printf("\n\t|| 2. 16000 Data                            ||");
    printf("\n\t|| 3. 64000 Data                            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &pilihan)==0 || pilihan < 1 || pilihan > 3){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
 
    if(pilihan == 1){
        n = 1000;
    }else if(pilihan == 2){
        n = 16000;
    }else if(pilihan == 3){
        n = 64000;
    }
 
    int arr[n], arr2[n];
    bilanganRandom(arr, n);
 
    printf("\n\t==============================================");
    printf("\n\tArray %d random sebelum di sort :\n", n);
    printArray(arr, n);
    duplikatArray(arr, arr2, n);
 
    waktu = clock();
    bubbleSort(arr, n);
    waktu = clock() - waktu;
    waktu1 = (double)(waktu) / CLOCKS_PER_SEC;
 
    waktu = clock();
    bubbleSortPointer(arr2, n);
    waktu = clock() - waktu;
    waktu2 = (double)(waktu) / CLOCKS_PER_SEC;
 
    printf("\n\t==============================================");
    printf("\n\t%d angka setelah di-sorting: ", n);
    getchar();
    printArray(arr, n);
    printf("\n\t==============================================");
    printf("\n\tHasil Waktu: ");
    printf("\n\t----------------------------------------------");
    printf("\n\tWaktu Bubble Sort                = %f", waktu1);
    printf("\n\tWaktu Bubble Sort dengan Pointer = %f", waktu2);
    if(waktu1 < waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble Sort Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu2 < waktu1){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble Sort dengan Pointer Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu1 == waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tKedua Metode Setara!");
        printf("\n\t==============================================");
    }
    close();
    ulang();
}
 
void bilanganRandom(int arr[], int n){
    int i;
    srand(time(NULL));
 
    for (i = 0; i < n; i++) {
        arr[i] = rand()%n;
    }
}
 
void duplikatArray(int asal[], int target[], int n){
    int i;
    for (i = 0; i < n; i++){
        target[i] = asal[i];
    }
}
 
void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("\n\tAngka ke-%d = %d", i+1, arr[i]);
    }
}
 
void bubbleSort(int arr[], int n){
    int i, j, a;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}
 
void bubbleSortPointer(int *array, int size){
    int i, j, temp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - i - 1; j++){
            if (*(array + j) > *(array + j + 1)){
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
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
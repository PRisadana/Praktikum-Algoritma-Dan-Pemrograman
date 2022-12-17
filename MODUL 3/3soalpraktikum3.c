#include <stdio.h>
#include <stdlib.h>

// Median = Nilai Tengah
// Mean = Rata Rata
// Modus = Nilai paling sering muncul

void mulai();
void close();
void end();
int main();
float median(float *arr, int n);
float modus(float *arr, int n);
float mean(float *arr, int n);
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

int main(){
    int total_data;
    float data[100];
    mulai();
    printf("\n\t==============================================");
    printf("\n\t||            PROGRAM STATISTIKA            ||");
    printf("\n\t==============================================");
    printf("\n\t||   Program ini menampilkan median, modus, ||");
    printf("\n\t||       dan mean dari n-buah data yang     ||");
    printf("\n\t||            diinputkan pengguna           ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan jumlah data: ");
    while (scanf("%d", &total_data)==0 || total_data < 1){
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tInputan harus berupa angka");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan jumlah data: ");
        while (total_data=getchar() != '\n');
    }

    for(int i=0; i<total_data; i++){
        printf("\tMasukkan data ke-%d : ", i+1);
        scanf("%f", &data[i]);
    }

    printf("\n\t==============================================");
    printf("\n\tMedian data tersebut : %.2f", median(data, total_data));
    printf("\n\tModus data tersebut  : %.2f", modus(data, total_data));
    printf("\n\tMean data tersebut   : %.2f", mean(data, total_data));
    printf("\n\t==============================================");
    close();
    ulang();
}
 
float median(float *arr, int n){
    float ganti;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                ganti = arr[i];
                arr[i] = arr[j];
                arr[j] = ganti;
            }
        }
    }
 
    if(n % 2 == 0){
        return (arr[n / 2] + arr[(n / 2) - 1]) / 2;
    }else{
        return arr[n / 2];
    }
}
 
float modus(float *arr, int n){
    int count = 1, max = 0;
    float modus = arr[0];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if (count > max){
            max = count;
            modus = arr[i];
        }
        count = 1;
    }
    return modus;
}
 
float mean(float *arr, int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum / n;
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

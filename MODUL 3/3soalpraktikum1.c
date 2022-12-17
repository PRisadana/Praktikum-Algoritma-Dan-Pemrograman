#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void mulai();
int main();
void sort();
void bilanganRandom(int arr[], int n);
void duplikatArray(int asal[], int target[], int n);
void printArray(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
float sequentialSearch(int arr[], int n, int angkaDicari);
float binarySearch(int arr[], int low, int high, int angkaDicari);
void search();
void close();
void ulang();
void selesai();
  
void mulai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||          SORTING DAN SEARCHING           ||");
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
 
int main(){
    int pilih;
    mulai();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          SORTING DAN SEARCHING           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Program:                          ||");
    printf("\n\t|| 1. Sorting                               ||");
    printf("\n\t|| 2. Searching                             ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan pilihan Anda: ");
    while (scanf("%d", &pilih)==0 || pilih < 1 || pilih > 2){
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\n\t==============================================");
        printf("\n\tMasukkan pilihan Anda: ");
        while(pilih=getchar() != '\n');
    }
    close();
 
    if(pilih==1){
        sort();
    }else if(pilih==2){
        search();
    }
    close();
    ulang();
}
 
void sort(){
    int n, pilih;
    clock_t waktu;
    double waktu1, waktu2, waktu3;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          SORTING DAN SEARCHING           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||              METODE SORTING              ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Jumlah Data:                      ||");
    printf("\n\t|| 1. 1000 Data                             ||");
    printf("\n\t|| 2. 16000 Data                            ||");
    printf("\n\t|| 3. 64000 Data                            ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan pilihan Anda: ");
    while (scanf("%d", &pilih)==0 || pilih < 1 || pilih > 3){
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\n\t==============================================");
        printf("\n\tMasukkan pilihan Anda: ");
        while(pilih = getchar() != '\n');
    }
 
    if(pilih == 1){
        n = 1000;
    }else if(pilih == 2){
        n = 16000;
    }else if(pilih == 3){
        n = 64000;
    }
 
    int arr[n], arr2[n], arr3[n];
    bilanganRandom(arr, n);
 
    printf("\n\t==============================================");
    printf("\n\tArray %d random sebelum di sort :\n", n);
    printArray(arr, n);
    duplikatArray(arr, arr2, n);
    duplikatArray(arr, arr3, n);
 
    waktu = clock();
    insertionSort(arr, n);
    waktu = clock() - waktu;
    waktu1 = (double)(waktu) / CLOCKS_PER_SEC;
 
    waktu = clock();
    bubbleSort(arr2, n);
    waktu = clock() - waktu;
    waktu2 = (double)(waktu) / CLOCKS_PER_SEC;
 
    waktu = clock();
    quickSort(arr3, 0, n - 1);
    waktu = clock() - waktu;
    waktu3 = (double)(waktu) / CLOCKS_PER_SEC;
 
    printf("\n\t==============================================");
    printf("\n\t%d angka setelah disorting: ", n);
    getchar();
    printArray(arr, n);
    printf("\n\t==============================================");
    printf("\n\tHasil Waktu: ");
    printf("\n\t----------------------------------------------");
 
    printf("\n\tWaktu Insertion Sort = %f", waktu1);
    printf("\n\tWaktu Bubble Sort    = %f", waktu2);
    printf("\n\tWaktu Quick Sort     = %f", waktu3);
 
    if(waktu1 == waktu2 && waktu1 == waktu3){
        printf("\n\t----------------------------------------------");
        printf("\n\tKetiganya Setara!");
        printf("\n\t==============================================");
    }else if(waktu1 == waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tInsertion dan Bubble Sort Setara!");
        printf("\n\t==============================================");
    }else if(waktu1 == waktu3){
        printf("\n\t----------------------------------------------");
        printf("\n\tInsertion dan Quick Sort Setara!");
        printf("\n\t==============================================");
    }else if(waktu2 == waktu3){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble dan Quick Sort Setara!");
        printf("\n\t==============================================");
    }else if(waktu1 <= waktu2 && waktu1 <= waktu3){
        printf("\n\t----------------------------------------------");
        printf("\n\tInsertion Sort Paling Cepat!");
        printf("\n\t==============================================");
    }else if(waktu2 <= waktu1 && waktu2 <= waktu3){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble Sort Paling Cepat!");
        printf("\n\t==============================================");
    }else if(waktu3 <= waktu1 && waktu3 <= waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tQuick Sort Paling Cepat!");
        printf("\n\t==============================================");
    }
}
 
void search(){
    clock_t start, end;
    float waktu1, waktu2;
    int n, angkaDicari, pilihan;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          SORTING DAN SEARCHING           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||             METODE SEARCHING             ||");
    printf("\n\t||==========================================||");
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
 
    int arr[n];
    bilanganRandom(arr, n);
    printArray(arr, n);
 
    printf("\n\t----------------------------------------------");
    printf("\n\tMasukkan Angka Yang Ingin Dicari: ");
    scanf("%d", &angkaDicari);
    printf("\t----------------------------------------------");
    bubbleSort(arr, n);
    waktu1 = sequentialSearch(arr, n, angkaDicari);
    waktu2 = binarySearch(arr, 0, n - 1, angkaDicari);
 
    printf("\n\t----------------------------------------------");
    printf("\n\tHasil waktu: \n");
    printf("\n\tSequential Search Membutuhkan %f Detik Untuk Mencari Data", waktu1);
    printf("\n\tBinary Search Membutuhkan %f Detik Untuk Mencari Data", waktu2);
 
    if(waktu1 < waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tSequential Search Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu2 < waktu1){
        printf("\n\t----------------------------------------------");
        printf("\n\tBinary Search Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu1 == waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tSequential dan Binary Search Setara!");
        printf("\n\t==============================================");
    }
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
 
int partition(int arr[], int low, int high){
    int temp;
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){
        if (arr[j] <= pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high){
    int p = partition(arr, low, high);
    if (low < high){
        p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
 
void insertionSort(int arr[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
 
void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
float sequentialSearch(int arr[], int n, int angkaDicari){
    clock_t start, end;
    float waktu;
    int i, counter = 0;
 
    start = clock();
    for (i = 0; i < n; i++) {
        if (arr[i] == angkaDicari){
            counter++;
        }
        printf("\n\tAngka ke-%d : %d", i, arr[i]);
    }
    end = clock();
    waktu = (double)(end - start) / CLOCKS_PER_SEC;
 
    if(counter == 0) {
        printf("\n\t==============================================");
        printf("\n\tAngka %d tidak ditemukan pada indeks sequential search!", angkaDicari);
    }else{
        int indexAngkaDicari[counter];
        counter = 0;
 
        for (i = 0; i < n; i++) {
            if (arr[i] == angkaDicari) {
                indexAngkaDicari[counter] = i;
                counter++;
            }
        }
        printf("\n\t==============================================");
        printf("\n\tAngka %d ditemukan pada index sequential search: ", angkaDicari);
        for (i = 0; i < counter; i++) {
            if(i == 0 && i == counter - 1){
                printf(" %d.", indexAngkaDicari[i]);
            }else if(i == counter - 1){
                printf(" dan %d.", indexAngkaDicari[i]);
            }else {
                printf(" %d,", indexAngkaDicari[i]);
            }
        }
    }
    return waktu;
}
 
float binarySearch(int arr[], int low, int high, int angkaDicari){
    clock_t start, end;
    float waktu;
    int i, counter = 0;
 
    start = clock();
    while (low <= high){
        int mid = low + (high - low) / 2;
 
        if (arr[mid] == angkaDicari) {
            counter++;
            for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            for (i = mid - 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            break;
        }
        else if (arr[mid] > angkaDicari) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    end = clock();
    waktu = (double)(end - start) / CLOCKS_PER_SEC;
 
    if (counter == 0) {
        printf("\n\tAngka %d tidak ditemukan pada indeks binary search!", angkaDicari);
    }
    else {
        int indexAngkaDicari[counter];
        counter = 0;
 
        while (low <= high) {
            int mid = low + (high - low) / 2;
 
            if (arr[mid] == angkaDicari) {
                indexAngkaDicari[counter] = mid;
                counter++;
                for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                for (i = mid - 1; i > 0 && arr[i] == angkaDicari; i--) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                break;
            }
            else if (arr[mid] > angkaDicari) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
 
        printf("\n\tAngka %d ditemukan pada index binary search: ", angkaDicari);
        bubbleSort(indexAngkaDicari, counter);
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1) {
                printf(" %d.", indexAngkaDicari[i]);
            }
            else if (i == counter - 1) {
                printf(" dan %d.", indexAngkaDicari[i]);
            }
            else {
                printf(" %d,", indexAngkaDicari[i]);
            }
        }
    }
    return waktu;
}
 
void close(){
    printf("\n\tBerikutnya...");
    getchar();
    printf("\n\tTekan enter untuk melanjutkan");
    getchar();
    system("clear");
}
 
void ulang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 2. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu)==0 || menu < 1 || menu > 2){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while(menu=getchar()!='\n' );
    }
    if (menu==1){
        close();
        main();
    }else if(menu==2){
        close();
        selesai();
    }
}
 
void selesai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT: KELOMPOK 3         ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}

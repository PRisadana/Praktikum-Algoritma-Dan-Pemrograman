#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa {
	char nama[100];
	int nilai;
};
 
void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||                 RANKING                  ||");
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

void main(){
    int menu;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||                 RANKING                  ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Menu:                             ||");
    printf("\n\t|| 1. Insert Data                           ||");
    printf("\n\t||    (Memasukkan Data Mahasiswa)           ||");
    printf("\n\t|| 2. Ranking Data                          ||");
    printf("\n\t||    (Mengurutkan Data Mahasiswa)          ||");
    printf("\n\t|| 3. Show Data                             ||");
    printf("\n\t||    (Menampilkan Data Mahasiswa)          ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    fflush(stdin);
    while(scanf("%d", &menu)==0 || menu < 1 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();
    if(menu == 1){
        tambahData();
    }else if(menu == 2){
        sortingData();
    }else if(menu == 3){
        showData();
    }
    close();
    ulang();
}

void tambahData(){
    int statusNama;
	char pilih, check;
	struct mahasiswa dataMahasiswa;
	FILE *file;
	printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||                 RANKING                  ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||               TAMBAH DATA                ||");
    printf("\n\t==============================================");
	printf("\n\tMasukkan Nama Mahasiswa: ");
	fflush(stdin);
	scanf("%[^\n]", &dataMahasiswa.nama);
	fflush(stdin);
    statusNama = validasiNama(dataMahasiswa.nama);
    while(statusNama == 0){
        printf("\n\tFormat Nama Salah! Masukan Format Yang Benar : ");
        fflush(stdin);
        scanf("%[^\n]", &dataMahasiswa.nama);
        fflush(stdin);
        statusNama = validasiNama(dataMahasiswa.nama);
    }

    do{
        printf("\n\tMasukkan Nilai: ");
        if(((scanf("%d%c", &dataMahasiswa.nilai, &check))!= 2 || check != '\n') && clean()){
            printf("\n\tInputan salah! Mohon memasukkan nilai yang benar [0-100]");
        }else{
            if(dataMahasiswa.nilai < 0){
                printf("\n\tInputan salah! Nilai harus > 0");
            }else if(dataMahasiswa.nilai > 100){
                printf("\n\tInputan salah! Nilai harus < 100");
            }else{
                break;
            }
        }
    }while(1);

    file = fopen("asistenin.txt","a");
    fprintf(file,"%s\n%d\n", dataMahasiswa.nama,dataMahasiswa.nilai);
    fclose(file);
    printf("\n\tData Berhasil Disimpan!");
    printf("\n\t==============================================");
}

void sortingData(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||                 RANKING                  ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||               RANKING DATA               ||");
    printf("\n\t==============================================");
    char pilih, check, temp[100];
    int counter = 0, i, j, temp2;
    FILE *file;
    file = fopen("asistenin.txt", "r");

    if(file != 0){
        while(fgets(temp, 100, file)){ //proses memasukkan data ke variabel{
            counter++;
            fgets(temp, 100, file);
        }

    fclose(file);

    struct mahasiswa dataMahasiswa[counter];
    file = fopen("asistenin.txt", "r");
    for(i=0; i<counter; i++){ //berfungsi untuk mengambil data nama dan nilai dari file asistenin
        fgets(temp, 100, file);
        temp[strcspn(temp, "\n")] = '\0'; //strcspn berfungsi untuk mencari indeks dari karakter \n di tiap line
        strcpy(dataMahasiswa[i].nama, temp);
        fgets(temp, 100, file);
        temp[strcspn(temp, "\n")] = '\0';
        dataMahasiswa[i].nilai = atoi(temp); //atoi berfungsi untuk mengubah tipe data string menjadi int
    }
    fclose(file);
    for(i=0; i<counter-1; i++){
        for(j=0; j<counter-1-i; j++){
            if(dataMahasiswa[j].nilai < dataMahasiswa[j+1].nilai){
                strcpy(temp,dataMahasiswa[j].nama);
                strcpy(dataMahasiswa[j].nama,dataMahasiswa[j+1].nama);
                strcpy(dataMahasiswa[j+1].nama,temp); //sorting nama
                temp2 = dataMahasiswa[j].nilai;
                dataMahasiswa[j].nilai = dataMahasiswa[j+1].nilai;
                dataMahasiswa[j+1].nilai = temp2; //sorting nilai
            }
        }
    }

    file = fopen("asistenout.txt", "w");
    fprintf(file, "\tNilai Mata Kuliah Algoritma dan Pemrograman:\n");
    fprintf(file, "\t==============================================\n");
    fprintf(file, "\tNo  Nama\tNilai\n");
    fprintf(file, "\t----------------------------------------------\n");
        for(i=0; i<counter; i++){
        fprintf(file, "\t%d. %s\t%d\n", i+1,dataMahasiswa[i].nama, dataMahasiswa[i].nilai);
        }
    fclose(file);
        printf("\n\tPerankingan berhasil dilakukan, silahkan cek file");

    }else{
        fclose(file);
        printf("\n\tData belum tersedia, silakan masukkan data terlebih dahulu");
    }
    printf("\n\t==============================================");
}

void showData(){
    char buff[255];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||                 RANKING                  ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                SHOW DATA                 ||");
    printf("\n\t==============================================");
    printf("\n");
    FILE *fptr;
    if ((fptr = fopen("asistenout.txt", "r")) == NULL){
        printf("\n\tError: File tidak ada!");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("%s", buff);
    }

    fclose(fptr);
    printf("\n\t==============================================");
}

int clean(){
	while(getchar() != '\n');
		return 1;
}

int validasiNama(char masukan[]){
    int i = 0;
    int salah = 0;

    while(masukan[i] != '\0'){
        if((masukan[i] >= 65 && masukan[i] <= 90) || (masukan[i] >= 97 && masukan[i] <= 122) || masukan[i] == ' ' || masukan[i] == '.' || masukan[i] == ','){
            i++;
        }else{
            salah = 1;
            masukan[i] = '\0';
        }
    }

    if(salah == 1){
        return 0;
    }else{
        return 1;
    }
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("clear");
}

void ulang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah Anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    fflush(stdin);
    while(scanf("%d", &menu)==0 || menu < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    if (menu==1){
        close();
        main();
    }else if(menu==0){
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

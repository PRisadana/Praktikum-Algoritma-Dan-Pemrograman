#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float input();
int hapus();
int validasiNim();
int cekNim();
int cekNimEdit();
int prosesReadDataTmp();
int main();
void Exit();
void reset();
void setDefaultDataTmp();
void prosesInsertData();
void prosesShowData();
void prosesUpdateData();
void prosesDeletedata();
void insertData();
void showData();
void updateData();
void deleteData();
void searchData();

struct Mahasiswa{
    int nim;
	char nama[50];
};

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||              DATA MAHASISWA              ||");
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
    int menu;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Menu Program:                       ||");
    printf("\n\t|| 1. Insert Data Mahasiswa                 ||");
    printf("\n\t|| 2. Show Data Mahasiswa                   ||");
    printf("\n\t|| 3. Update Data Mahasiswa                 ||");
    printf("\n\t|| 4. Delete Data Mahasiswa                 ||");
    printf("\n\t|| 5. Search Data Mahasiswa                 ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan Pilihan Anda: ");
    fflush(stdin);
    while(scanf("%d", &menu)==0 || menu < 1 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();
    if(menu == 1){
        insertData();
    }else if(menu == 2){
        showData();
    }else if(menu == 3){
        updateData();
    }else if(menu == 4){
        deleteData();
    }else if(menu == 5){
        searchData();
    }
    close();
    ulang();
}

void insertData(){
    int statusNim;
    int statusNama;
    int jumlah;
    struct Mahasiswa data;
    struct Mahasiswa data_tmp[100];

    setDefaultDataTmp(data_tmp);
    jumlah = prosesReadDataTmp(data_tmp);

    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          INSERT DATA MAHASISWA           ||");
    printf("\n\t==============================================");
	printf("\n\tTambah Data Mahasiswa: ");
	printf("\n\t----------------------------------------------");
	printf("\n\tMasukan NIM: ");
	fflush(stdin);
    data.nim = validasiNim();
    statusNim = cekNim(data, data_tmp, jumlah);
    while(statusNim == 1){
        printf("\n\tNIM Sudah Ada! Masukan NIM Yang Baru: ");
        data.nim = validasiNim();
        statusNim = cekNim(data, data_tmp, jumlah);
    }
	printf("\n\tMasukan Nama: ");
    scanf("%[^\n]", &data.nama);
    fflush(stdin);
    statusNama = validasiNama(data.nama);
    while(statusNama == 0){
        printf("\n\tFormat Nama Salah! Masukan Format Yang Benar : ");
        scanf("%[^\n]", &data.nama);
        fflush(stdin);
        statusNama = validasiNama(data.nama);
    }
    prosesInsertData(data);
    printf("\n\t----------------------------------------------");
    printf("\n\tData Berhasil Ditambahkan !");
    printf("\n\tNIM  : %d", data.nim);
    printf("\n\tNama : %s", data.nama);
	printf("\n\t==============================================");
}

void showData(){
	int jumlah;
    struct Mahasiswa data_tmp[100];

    setDefaultDataTmp(data_tmp);
    jumlah = prosesReadDataTmp(data_tmp);

    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||           SHOW DATA MAHASISWA            ||");
    printf("\n\t==============================================");
    printf("\n\tDaftar Data Mahasiswa :");
    printf("\n\t----------------------------------------------");
    prosesShowData(data_tmp, jumlah);
    if(jumlah != 1 || data_tmp[0].nim != 0){
        printf("\n\t----------------------------------------------");
        printf("\n\tJumlah Data : %d", jumlah);
    }
	printf("\n\t==============================================");
}

void updateData(){
    int statusNim, statusNama;
    int nomorEdit = 0;
    int jumlah;
    struct Mahasiswa data_edit;
    struct Mahasiswa data_tmp[100];

    setDefaultDataTmp(data_tmp);
    jumlah = prosesReadDataTmp(data_tmp);

	printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          UPDATE DATA MAHASISWA           ||");
    printf("\n\t==============================================");
    printf("\n\tDaftar Data Mahasiswa: ");
    printf("\n\t----------------------------------------------");
    prosesShowData(data_tmp, jumlah);
    if(jumlah != 1 || data_tmp[0].nim != 0){
    	printf("\n\t==============================================");
        printf("\n\tData Ingin Di Update? (1 - %d) : ", jumlah);
        nomorEdit = input(0, 0, jumlah);
        nomorEdit = nomorEdit - 1;
        printf("\n\t==============================================");
        printf("\n\tInput Update Data: \n");
	    printf("\n\tMasukan NIM: ");
        data_edit.nim = validasiNim();
        statusNim = cekNimEdit(data_edit, data_tmp, jumlah, nomorEdit);
        while(statusNim == 1){
            printf("\n\tNIM sudah ada! Masukkan NIM yang berbeda : ");
            data_edit.nim = validasiNim();
            statusNim = cekNimEdit(data_edit, data_tmp, jumlah, nomorEdit);
        }
	    printf("\n\tMasukkan Nama: ");
        scanf("%[^\n]", &data_edit.nama);
        fflush(stdin);
        statusNama = validasiNama(data_edit.nama);
        while(statusNama == 0){
            printf("\n\tFormat Nama salah! Masukkan Nama Dengan Benar: ");
            scanf("%[^\n]", &data_edit.nama);
            fflush(stdin);
            statusNama = validasiNama(data_edit.nama);
        }
        prosesUpdateData(data_edit, data_tmp, jumlah, nomorEdit);
	    printf("\n\tData Berhasil Diupdate!");
    }else if(jumlah == 1 && data_tmp[0].nim == 0){
        printf("\n\tMasukkan Data Terlebih Dahulu!");
    }
	printf("\n\t==============================================");
}

void deleteData(){
    struct Mahasiswa data_tmp[100];
    setDefaultDataTmp(data_tmp);
    int jumlah = prosesReadDataTmp(data_tmp);
    int nomorHapus = 0;
    int yakinHapus = 0;
	printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          DELETE DATA MAHASISWA           ||");
    printf("\n\t==============================================");
    printf("\n\tDaftar Data Mahasiswa: ");
    printf("\n\t----------------------------------------------");
    prosesShowData(data_tmp, jumlah);
    if(jumlah != 1 || data_tmp[0].nim != 0){
    	printf("\n\t----------------------------------------------");
        printf("\n\tData Yang Ingin Dihapus? (1 - %d) : ", jumlah);
        nomorHapus = input(0, 0, jumlah);
        nomorHapus = nomorHapus - 1;
        yakinHapus = hapus();
        if(yakinHapus == 1){
            prosesDeleteData(data_tmp, jumlah, nomorHapus);
            printf("\n\tData Telah Dihapus!\n");
        }else{
            printf("\n\tData Tidak Dihapus");
        }
    }else if(jumlah == 1 && data_tmp[0].nim == 0){
        printf("\n\tMasukan Data Terlebih Dahulu\n");
    }
	printf("\n\t==============================================");
}

void searchData(){
    int salah = 0, jumlah = 0;
    int searchNim;
    struct Mahasiswa data;

	printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||              DATA MAHASISWA              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          SEARCH DATA MAHASISWA           ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan NIM : ");
    searchNim = validasiNim();
    fflush(stdin);
    FILE *in=fopen("dataMahasiswa.txt", "r");
    printf("\n\t----------------------------------------------");
    while(!feof(in)){
        fflush(stdin);
        fscanf(in, "%d#%[^\n]\n", &data.nim, &data.nama);
        if(data.nim == searchNim){
        	printf("\n\tData Ditemukan !\n");
            printf("\n\tNama : %s", data.nama);
			printf("\n\tNIM  : %d", data.nim);
            jumlah +=1;
        }else{
            salah +=1;
            jumlah +=1;
        }
    }

    if(salah == jumlah){
        printf("\n\tData Tidak Ada!");
    }
    printf("\n\t==============================================");
    fclose(in);
}

int clear(){
	while(getchar() != '\n');
	return 1;
}

float input(int desimal, int min, int batas_akhir){
    char masukan[100];
    int i = 0;
    int belakang = 0;
    int isi_depan = 0;
    int isi_belakang = 0;
    int status = 0;
    int titik = 0;
    int minus = 0;
    int salah = 0;
    float hasil;

    scanf("%[^\n]", &masukan);
    fflush(stdin);

    while(masukan[i] != '\0'){
        if(masukan[0] == '.'){
            salah = 1;
            masukan[0] = '\0';
        }
		else if(masukan[i]>='0' && masukan[i]<='9' || masukan[i] == '.' || (masukan[0] == '-' && min == 1)){
            if((masukan[i] == '.') && (desimal == 1)){
                titik = titik + 1;
                if(titik > 1 || masukan[i+1] == '\0'){
                    salah = 1;
                    masukan[i] = '\0';
                }
                status = 1;
            }else if((masukan[i] == '.') && (desimal == 0)){
                salah = 1;
                masukan[i] = '\0';
            }

            if(masukan[0] == '-' && min == 1){
                minus = 1;
            }else if(masukan[0] == '-' && min == 0){
                salah = 1;
                masukan[i] = '\0';
            }

            if(masukan[i]>='0' && masukan[i]<='9'){
                if(status == 1){
                    isi_belakang = (isi_belakang * 10) + (masukan[i] - 48);
                    belakang = belakang + 1;
                }else{
                    isi_depan = (isi_depan * 10) + (masukan[i] - 48);
                }
            }
            i++;
        }else{
            salah = 1;
            masukan[i] = '\0';
        }
    }

    if(titik == 1){
        hasil = (float)isi_depan + (isi_belakang / (pow(10, belakang)));
    }else{
        hasil = isi_depan;
    }


    if(minus == 1 && min == 1){
        hasil = hasil - (hasil * 2);
    }else if(minus == 1 && min == 0){
        salah = 1;
        masukan[i] = '\0';
    }

    if(salah == 1){
        printf("\n\tMasukkan salah! Masukkan angka yang benar : ");
        return input(desimal, min, batas_akhir);
    }else if(min == 0 && hasil == 0){
        printf("\n\tMasukkan tidak boleh 0! Masukkan nilai yang benar : ");
        return input(desimal, min, batas_akhir);
    }else if(batas_akhir != 0 && hasil > batas_akhir){
        printf("\n\tMasukkan tidak boleh lebih dari %d! Masukkan nilai yang benar : ", batas_akhir);
        return input(desimal, min, batas_akhir);
    }else{
        return hasil;
    }
}

int hapus(){
    char huruf_hapus[1];
    int hasil = 0;
    printf("\n\tHapus Data?");
    printf("\n\t[Y] Yes				[N] No \n");
    printf("\n\tMasukkan Pilihan: ");
    scanf("%s", &huruf_hapus);
    fflush(stdin);

    if((strcmp(huruf_hapus, "Y") != 0) && (strcmp(huruf_hapus, "N") != 0)){
        printf("\n\tInput Invalid! Masukkan Dengan Benar: ");
        hapus();
    }else if((strcmp(huruf_hapus, "Y") == 0) || (strcmp(huruf_hapus, "y") == 0)){
		hasil = 1;
    }else{
		hasil = 0;
    }
    return hasil;
}

void setDefaultDataTmp(struct Mahasiswa data_tmp[]){
    int i;
    for(i = 0; i < 100; i++){
        data_tmp[i].nim = 0;
    }
}

int validasiNim(){
    char masukan[100];
    int i = 0;
    int salah = 0;
    int hasil = 0;

    scanf("%[^\n]", &masukan);
    fflush(stdin);

    while(masukan[i] != '\0'){
        if(masukan[i] >= '0' && masukan[i] <= '9'){
            hasil = (hasil * 10) + (masukan[i] - 48);
            i++;
        }else{
            salah = 1;
            masukan[i] = '\0';
        }
    }

    if(salah == 1){
        printf("\n\tFormat NIM Salah! Masukkan Format Yang Benar : ");
        return validasiNim();
    }else if(i != 10){
        printf("\n\tFormat NIM Salah! Masukkan Format Yang Benar : ");
        return validasiNim();
    }else{
        return hasil;
    }
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

int cekNim(struct Mahasiswa data, struct Mahasiswa data_tmp[], int jumlah){
    int i;
    int ditemukan = 0;

    for(i = 0; i < jumlah; i++){
        if(data.nim == data_tmp[i].nim){
            ditemukan = 1;
            break;
        }else{
            ditemukan = 0;
        }
    }
    return ditemukan;
}

int cekNimEdit(struct Mahasiswa data, struct Mahasiswa data_tmp[], int jumlah, int nomorEdit){
    int i;
    int ditemukan = 0;

    for(i = 0; i < jumlah; i++){
        if((data.nim == data_tmp[i].nim) && (data_tmp[i].nim != data_tmp[nomorEdit].nim)){
            ditemukan = 1;
            break;
        }else{
            ditemukan = 0;
        }
    }
    return ditemukan;
}

int prosesReadDataTmp(struct Mahasiswa data_tmp[]){
    int jumlah = 0;

    FILE *read_tmp = fopen("DataMahasiswa.txt","r");
    if(!read_tmp){
        jumlah = 1;
    }else{
	    while(!feof(read_tmp)){
	   	    fscanf(read_tmp,"%d#%[^\n]\n", &data_tmp[jumlah].nim, &data_tmp[jumlah].nama);
            jumlah++;
	    }
    }
	fclose(read_tmp);
    return jumlah;
}

void prosesInsertData(struct Mahasiswa data){
    FILE *insert = fopen("DataMahasiswa.txt", "a");
	fprintf(insert,"%d#%s\n", data.nim, data.nama);
	fclose(insert);
}

void prosesShowData(struct Mahasiswa data_tmp[], int jumlah){
    int i;
    if(jumlah == 1 && data_tmp[0].nim == 0){
        printf("\n\tTidak Ada Data");
    }else{
        for(i = 0; i < jumlah; i++){
            printf("\n\t%d. %d - %s", i+1, data_tmp[i].nim, data_tmp[i].nama);
        }
    }
}

void prosesUpdateData(struct Mahasiswa data_edit, struct Mahasiswa data_tmp[], int jumlah, int nomorEdit){
    int i, j;

    data_tmp[nomorEdit].nim = data_edit.nim;

    for(i = 0; i < 50; i++){
        data_tmp[nomorEdit].nama[i] = data_edit.nama[i];
    }

    FILE *update = fopen("DataMahasiswa.txt","w");
    for(i = 0; i < jumlah; i++){
        fprintf(update, "%d#%s\n", data_tmp[i].nim, data_tmp[i].nama);
    }
    fclose(update);
}

void prosesDeleteData(struct Mahasiswa data_tmp[], int jumlah, int nomorHapus){
    int i;
    FILE *del = fopen("DataMahasiswa.txt","w");
    for(i = 0; i < jumlah; i++){
        if(i == nomorHapus){
            continue;
        }else{
            fprintf(del, "%d#%s\n", data_tmp[i].nim, data_tmp[i].nama);
        }
    }
    fclose(del);
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
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    fflush(stdin);
	while(scanf("%d", &menu)==0 || menu < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
	close();
    if (menu==1){
        main();
    }else if(menu==0){
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
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||                PALINDROM                 ||");
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
    char palindrom_awal[255];
	int besar_palindrom;
	int status;
	int status_angka;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||                PALINDROM                 ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
	printf("\n\tMasukkan kata: ");
	masukkan_palindrom(&besar_palindrom, palindrom_awal, &status_angka);
	if(status_angka==1){
        return invalid();
	}
	//deklarasi kembali
	char palindrom_akhir[besar_palindrom];
	balikkan_palindrom(besar_palindrom, palindrom_awal, palindrom_akhir, &status);
	file_palindrom(besar_palindrom, palindrom_awal, status);

	printf("\t----------------------------------------------");
	printf("\n\tJumlah huruf     : %d", besar_palindrom);
	printf("\n\tSebelum di-balik : %s", palindrom_awal);
	printf("\n\tSetelah di-balik : %s", palindrom_akhir);
	printf("\n\t----------------------------------------------");
	if(status==1){
		printf("\n\tKata %s merupakan Palindrom", palindrom_awal);
	}
	else if(status==0){
		printf("\n\tKata %s bukan Palindrom", palindrom_awal);
	}
	printf("\n\t----------------------------------------------");
	printf("\n\tData dimasukkan ke KamusKata.txt");
	printf("\n\t==============================================");
	close();
	ulang();
}

int invalid(){
    fflush(stdin);
	int pilihan;
	int cekerror=0;
	printf("\n\t==============================================");
    printf("\n\t||               INPUT SALAH!               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah Anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
	printf("\n\tPilihan: ");
	masukkanAngka(&pilihan, &cekerror, 0, 1);
	if(cekerror==1){
		return invalid();
	}

	fflush(stdin);
	system("clear");
	if(pilihan==0){
		return selesai();
	}
	else if(pilihan==1){
		return main();
	}
}

int masukkanAngka(int *pilihan, int *cekerror, int skalaBawah, int skalaAtas){
	char sementara[255];
	char tampungNewline;

	while(1){
		fgets(sementara, sizeof(sementara), stdin);
		if(sscanf(sementara,"%d %s", pilihan, &tampungNewline)==1){
			if(*pilihan < skalaBawah || *pilihan > skalaAtas){
				fflush(stdin);
				*cekerror=1;
				return;
			}
			return;
		}else{
			fflush(stdin);
			*cekerror=1;
			return;
		}
	}
}

void masukkan_palindrom(int *besar, char palindrom_awal[], int *status_angka){
	scanf("%[^\n]s", palindrom_awal);

	//hitung panjang kata
	*besar = strlen(palindrom_awal);

	char sementara;
	int counter_tolower = 0;
	int counter_cekAngka = 0;

	//menjadikan semua huruf kecil
	while(palindrom_awal[counter_tolower]){
        sementara = palindrom_awal[counter_tolower];
        palindrom_awal[counter_tolower] = tolower(sementara);
        counter_tolower++;
	}

	//cek jika isi angka
	while(palindrom_awal[counter_cekAngka]){
        sementara = palindrom_awal[counter_cekAngka];
        if(isdigit(sementara)==1){
            *status_angka=1;
            break;
        }
        counter_cekAngka++;
	}
}

void balikkan_palindrom(int besar, char palindrom_awal[besar], char palindrom_akhir[besar], int* status){
	int counter_depan;
	int counter_belakang;
	char palindrom_sementara[besar];
	strcpy(palindrom_sementara, palindrom_awal);
	counter_belakang = besar - 1;
	strcpy(palindrom_akhir, strrev(palindrom_sementara));

	if(strcmp(palindrom_awal,palindrom_akhir)==!1){
		*status = 1;
	}else{
		*status = 0;
	}
}

void file_palindrom(int besar, char palindrom_awal[besar], int status){
	FILE *file = fopen("KamusKata.txt","a+");
	char palindrom_sorted[besar];
	int counter_tolower=0;
	char sementara;

	int counter_awal;
	int counter_lanjut;

	char huruf_file[0];
	int jumlah_huruf;

	int counter_input=0;
	int status_input;

	strcpy(palindrom_sorted, palindrom_awal);

	//urutkan palindrom sesuai huruf
	for (counter_awal=0 ; counter_awal<besar-1 ; counter_awal++) {
		for (counter_lanjut=counter_awal+1 ; counter_lanjut<besar ; counter_lanjut++) {
			if (palindrom_sorted[counter_awal] > palindrom_sorted[counter_lanjut]) {
					sementara = palindrom_sorted[counter_awal];
					palindrom_sorted[counter_awal] = palindrom_sorted[counter_lanjut];
					palindrom_sorted[counter_lanjut] = sementara;
			}
		}
	}


	fprintf(file,"%s(%d)\t\t : ", palindrom_awal, besar);

	while(counter_input<besar){
		jumlah_huruf = 0;
		status_input = 0;
		huruf_file[0] = palindrom_sorted[counter_input];
		fprintf(file, "%s=", huruf_file);
		jumlah_huruf++;

		while(1){
			if(palindrom_sorted[counter_input] == palindrom_sorted[counter_input+1]){
				jumlah_huruf++;
				counter_input++;
				status_input = 1;
			}else{
				counter_input++;
				break;
			}
		}
		fprintf(file, "%d ", jumlah_huruf);
	}

    if(status==1){
        fputs(": Palindrom",file);
    }
    else if(status==0){
        fputs(": Bukan Palindrom",file);
    }
    fputs("\n",file);
    fclose(file);
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("clear");
}

void ulang(){
    fflush(stdin);
    int menu, cekerror = 0;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    masukkanAngka(&menu, &cekerror, 0, 1);
	if(cekerror==1){
		return invalid();
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

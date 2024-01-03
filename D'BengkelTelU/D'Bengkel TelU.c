//D'BengkelTelU
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// deklarasi 
void menuUtama(); void pilihMenuUtama(); void printMenuUtama(); int rekursifAdmin();
void loginAdmin(); void printMenuAdmin(); void menuAdmin(); void printTambahBengkel();
void tambahBengkel(); void adminBengkel(); void hapusBengkel(); void daftarBengkel();
void bubbleSortBengkel(); void tampilkanBengkel(); void lihatOrderMasuk(); void cekFeedback();
void prosesHapus(); void printUtamaUser(); void utamaUser(); void loginUser(); void regisUser();
int cekUser(); void printMenuUser(); void menuUser(); void menuUser2(); void feedbackUser();
int cariNamaToko(); void pesanBengkel(); void cls(); void pause();
//struct data
struct bengkel
    {   
        char toko[20], nama[20], alamat[50], kontak[15], jambuka[15]; 
        int montir;
    };
    
struct pengguna
    {
        char nama[15];
        char jenis[15];
        char user[15];
        char pass[15];
        char plat[10];
        char notelp[15];
    };
struct feedback{
    char toko[15];
    char masukkan[300];
};

struct pesanan{
    char toko[15];
    char nama[15];
};

//Program
void cls(){system("cls");}
void pause(){system("pause");}

void menuUtama()
{
    cls();
    printf("===== MENU UTAMA =====\n");
    printf("|  1. User           |\n");
    printf("|  2. Admin          |\n");
    printf("|  3. Keluar         |\n");
    printf("======================\n");
    pilihMenuUtama();
}
void pilihMenuUtama()
{
    int a;
    printf("\nPilihan Anda : ");
    scanf("%d", &a); getchar();
    switch (a) {
        case 1:
            printUtamaUser();
            break;
        case 2:
            loginAdmin(a);
            break;
        case 3:
            cls();
            printf("Terima Kasih!\n\n");
            exit(0);
        default:
            printf("Maaf, %d tidak ada dalam pilihan.\n\n", a);
            pause();
            menuUtama();
    }
}
void printMenuUtama()
{
    printf("\n\t==============================================\n");
    printf("\t|              D'Bengkel Tel-u               |\n");
    printf("\t|               Developed by:                |\n");
    printf("\t|                                            |\n");
    printf("\t| Agita Alfizar Sastrawijaya || 101022300036 |\n");
    printf("\t| Sulthan Syakir Aryasatya   || 101022300290 |\n"); 
    printf("\t| Adrianus Wismar Nugrahanto || 101022330019 |\n");
    printf("\t| Ilham Gading Sojunangon P. || 101022330203 |\n");
    printf("\t==============================================\n\n");
    pause();
    menuUtama();
}
int rekursifAdmin(int a)
{
    char username[] = "admin";
    char password[] = "admin";
    char inputUser[20], inputPass[20];

    cls();
    printf("===== Admin Login =====");
    printf("\nMasukkan Username : "); gets(inputUser);
    printf("Masukkan Password : "); gets(inputPass);

    if (strcmp(username, inputUser) == 0 && strcmp(password, inputPass) == 0) {
        printf("Login Berhasil!\n");
        printMenuAdmin();
    } else { 
        if (a > 1){
            printf("Username atau Password salah!");
            printf("\nTersisa %d kesempatan.", a-1);
            printf("\nSilahkan coba lagi.");
            pause();
            return rekursifAdmin(a-1);
        } else{ 
            cls();
            printf("Anda telah mencoba 3 kali. Login gagal.\n");
            pause();
        }
    }
}
void loginAdmin()
{
    int login = rekursifAdmin(3);
    if(login == 1){
        //printMenuUtama();
    } else {
        exit(0);
    }
}
void printMenuAdmin()
{
    cls();
    printf("_________________________________________\n");
    printf("|     Selamat Datang Di Menu Admin      |\n");
    printf("|  1. Tambahkan Bengkel                 |\n");
    printf("|  2. Hapus Bengkel                     |\n");
    printf("|  3. Daftar Bengkel                    |\n");
    printf("|  4. Daftar Orderan Masuk              |\n");
    printf("|  5. Feedback Customer                 |\n");
    printf("|  6. Kembali Ke Menu Utama             |\n");
    printf("|_______________________________________|\n\n");
    menuAdmin();
}
void menuAdmin()
{
    int a;
    printf("Pilihan anda : ");
    scanf("%d", &a); getchar();
    switch(a){
        case 1:
        printTambahBengkel(); break;
        case 2:
        hapusBengkel(); break;
        case 3:
            daftarBengkel(); 
            printf("\nKembali ke menu utama?\n");
            pause();
            printMenuAdmin();break;
        case 4:
            lihatOrderMasuk(); break;
        case 5:
            cekFeedback(); break;
        case 6:
            menuUtama(); break;
        default:
        system("cls");
        printf("Maaf, pilihan Anda tidak tersedia.\n");
        pause();
        printMenuAdmin();
    }
}
//MENU 1 ADMIN
    void printTambahBengkel()
    {
        cls();
        printf("_________________________________\n");
        printf("|       Menu Tambah Bengkel     |\n");
        printf("|  1. Bengkel Mobil             |\n");
        printf("|  2. Bengkel Motor             |\n");
        printf("|  3. Bengkel Sepeda            |\n");
        printf("|  4. Kembali Ke Menu Admin     |\n");
        printf("|_______________________________|\n\n");
        tambahBengkel();
    }
    void tambahBengkel()
    {
        int a;
        
        printf("pilihan anda : ");
        scanf("%d",&a); getchar();
        switch(a){
            case 1:
            cls();
            adminBengkel("dataMobil.dat", "Mobil"); break;
            case 2: 
            adminBengkel("dataMotor.dat", "Motor"); break;
            case 3:
            adminBengkel("dataSepeda.dat","Sepeda"); break;
            case 4:
            printMenuAdmin(); break;
            default:
            printf("Maaf, pilihan Anda tidak tersedia.\n");
            pause();
            printTambahBengkel();
        }
    }
    void adminBengkel(const char *kendaraan, const char *jenis)
    {
        struct bengkel tambah;

        cls();
        printf("Tambahkan Bengkel %s\n", kendaraan);
        printf("Nama Bengkel : ");gets(tambah.toko);
        printf("Pemilik Toko : "); gets(tambah.nama);
        printf("Banyak Montir : "); scanf("%d", &tambah.montir); getchar();
        printf("Kontak Bengkel : "); gets(tambah.kontak);
        printf("Alamat Bengkel : "); gets(tambah.alamat);
        printf("Jam Buka Bengkel (Contoh : 08:00) : "); gets(tambah.jambuka);

        FILE *tambahBengkel= fopen(kendaraan, "ab");
        if(tambahBengkel=NULL){
            tambahBengkel = fopen(kendaraan, "wb");
        }
        fwrite(&kendaraan, sizeof(struct bengkel),1,tambahBengkel);
        fclose(tambahBengkel);

        printf("Data Bengekl berhasil ditambahkan ke %s.\n", kendaraan);
        printTambahBengkel();
    }
//MENU 2 ADMIN
    void hapusBengkel()
    {
        int a;
        char toko;
        cls();
        printf("_________________________________\n");
        printf("|      MENU HAPUS BENGKEL       |\n");
        printf("|   1. Bengkel Mobil            |\n");
        printf("|   2. BEngkel Motor            |\n");
        printf("|   3. Bengkel Sepeda           |\n");
        printf("|   4. Kembali                  |\n");
        printf("|_______________________________|\n");

        printf("\nSilahkan masukkan nomor menu [1-4]: ");scanf("%d",&a);getchar();
        switch (a)
        {
        case 1:
            tampilkanBengkel("dataMobil.dat", "MOBIL");
            printf("Masukkan nama toko yang ingin dihapus : ");scanf("%s",&toko);getchar();
            prosesHapus("dataMobil.dat", toko);
            break;
        case 2:
            tampilkanBengkel("dataMotor.dat","MOTOR");
            printf("Masukkan nama toko yang ingin dihapus : "); scanf("%s",&toko);getchar();
            prosesHapus("dataMotor.dat", toko);
            break;
        case 3:
            tampilkanBengkel("dataSepeda.dat","SEPEDA");
            printf("Masukkan nama toko yang ingin dihapus : "); scanf("%s",&toko);getchar();
            prosesHapus("dataSepeda.dat", toko);
            break;
        case 4:
            printMenuAdmin();
        default:
            printf("Pilihan Tidak Ada!\n");
            hapusBengkel();
            break;
        }
    }
    void prosesHapus(const char *kendaraan, const char *toko)
    {
        FILE *file = fopen(kendaraan, "rb");
        FILE *temp = fopen("temp.dat", "wb");

        struct bengkel hapus;

        int found = 0;
        while (fread(&hapus, sizeof(hapus), 1, file)==1) {
            if (strcmp(hapus.toko, toko) != 0) {
                found = 1;
                fwrite(&hapus, sizeof(struct bengkel), 1, temp);
                printf("Bengkel '%s' ditemukan dan dihapus.\n", toko);
            }
        }
        fclose(file);
        fclose(temp);
        remove(kendaraan);
        rename("temp.dat", kendaraan);

        if (!found) {
            printf("Bengkel '%s' tidak ditemukan.\n", toko);
        }
    }


//MENU 3 ADMIN
    void daftarBengkel()
    {
        tampilkanBengkel("dataMobil.dat", "MOBIL");
        tampilkanBengkel("dataMotor.dat", "MOTOR");
        tampilkanBengkel("dataSepeda.dat", "SEPEDA");
    }
    void bubbleSortBengkel(struct bengkel arr[], int n)
    {
        for (int i = 0 ;i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if (strcmp(arr[i].nama, arr[j+1].nama) > 0){
                struct bengkel temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                }
            }
        }
    }
    void tampilkanBengkel(const char *kendaraan, const char *jenis)
    {
        FILE *tampilkan = fopen(kendaraan, "rb");
        struct bengkel data[50];
        struct bengkel print;
        int count = 0;
        while(fread(&print, sizeof(struct bengkel), 1, tampilkan)){
            data[count++] = print;
        }
        fclose(tampilkan);
        bubbleSortBengkel(data, count);
        printf("\n\n===== BENGKEL %s =====", jenis);
        for(int i = 0; i < count; i++){
            printf("\n\n%d. Nama Toko   : %s\n", i+1, data[i].nama);
            printf("   Alamat Toko : %s\n", data[i].alamat);
            printf("   Kontak      : %s\n", data[i].kontak);
            printf("   Jam Buka    : %s", data[i].jambuka);
        } if (count == 0){
            printf("Tidak ada data untuk bengkel %s.\n", jenis);
        }
        printf("\n");
    }
//MENU 4 ADMIN
void lihatOrderMasuk()
{
    cls();
    FILE *filePesanan = fopen("pesanan.dat", "rb");
    struct pesanan data[50];
    struct pesanan print;
    int count = 0;
    while (fread(&print, sizeof(struct pesanan),1,filePesanan)){
        data[count++]=print;
    } fclose(filePesanan);
    printf("===== PESANAN BENGKEL =====\n");
    for(int i = 0; i < count; i++){
        printf("%d. Bengkel : %s\n", i+1, data[i].toko);
    }
    printf("\nKembali ke menu utama?\n");
    pause();
    printMenuAdmin();
}
//MENU 5 ADMIN
void cekFeedback(){
    cls();
    FILE *tampilkan = fopen("dataFeedback.dat", "rb");
    struct feedback data[50];
    struct feedback print;
    int count = 0;
    while(fread(&print, sizeof(struct feedback),1,tampilkan)){
        data[count++]=print;
    } fclose(tampilkan);
    printf("\n===== FEEDBACK BENGKEL =====\n");
    for(int i = 0; i < count; i++){
        printf("%d. Feedback bengkel  %s : %s\n", i+1, data[i].toko, data[i].masukkan);
    }
    printf("\nKembali ke menu utama?\n");
    pause();
    printMenuAdmin();
}

//MENU 6 ADMIN
    /*KEMBALI KE MENU UTAMA line */

//MENU UTAMA USERR
void printUtamaUser(){
    cls();
    printf("    ________________________________________\n");
    printf("    | Selamat Datang di Dasbor Utama User  |\n");
    printf("    |  1. Login User                       |\n");
    printf("    |  2. Registrasi User Baru             |\n");
    printf("    |  3. Kembali ke Menu Utama            |\n");
    printf("    |______________________________________|\n\n");
    utamaUser();
}
//DASBOR USER
void utamaUser(){
    //login, regis, keluar
    int a;
    printf("Pilihan anda : "); 
    scanf("%d", &a); getchar();
    switch (a)
    {
    case 1:
        loginUser();
        break;
    case 2:
        regisUser();
        break;
    case 3:
        menuUtama();
    default:
        printf("Maaf, pilihan Anda tidak tersedia.\n");
        pause();
        printUtamaUser();
        break;
    }
    
}

//MENU UTAMA USER : 1.LOGIN USER

void loginUser(){
    struct pengguna login;
    char username[15], password[15];
    int x = 0;
    FILE *dataUser = fopen("dataUser.dat", "rb");
        
    while (x <= 2){
        cls();
        printf("===== User Login =====");
        printf("\nMasukkan Username : "); gets(username);
        printf("Masukkan Password : "); gets(password);

        fseek(dataUser, 0, SEEK_SET);
            while (fread(&username, sizeof(struct pengguna),1,dataUser)==1){
                if (strcmp(username, login.user)==0 && strcmp(password, login.pass)==0){
                    printf("Login Berhasil!\n");
                    fclose(dataUser);
                    pause();
                    cls();
                    printMenuUser();
                }
                
            }
        printf("Username atau Password Salah!\n Kesempatan sisa %d\n", 2-x);
        x++;
        pause();
        } if (x == 3){
            printf("Tidak dapat melanjutkan! Kesempatan anda habis!");
            fclose(dataUser);
            exit(0);
        }
    }
//MENU UTAMA USER : 2.REGISTRASI USER
void regisUser(){

    FILE *dataUser;
    struct pengguna baru;
    cls();
        printf("Masukan Nama             : ");
        gets(baru.nama);
        printf("Masukkan Jenis Kendaraan : ");
        gets(baru.jenis);
        printf("Masukkan Plat Nomor      : ");
        gets(baru.plat);
        printf("Masukkan No. Telepon     : ");
        gets(baru.notelp);
        printf("Masukkan Username        : ");
        gets(baru.user);
            // cek apakah user ada dalam file atau tidak
            if (cekUser(baru.user)){
                printf("\nUsername sudah digunakan! Silahkan pilih username lain.\n");
                fclose(dataUser);
                pause();
                regisUser();
            }
        printf("Masukkan Password        : ");gets(baru.pass);

    dataUser = fopen("dataUser.dat", "ab+");
        
    fwrite(&baru,sizeof(baru),1,dataUser);
        printf("Pendaftaran berhasil.\nSilahkan login untuk melanjutkan.\n\n");
        fclose(dataUser);
        pause();
        printUtamaUser();    
}
//PROSES CEK USER
int cekUser(const char *username){
    FILE *dataUser = fopen("dataUser.dat", "rb");
    struct pengguna cek;

    //jika file tidak ada, maka buat file dulu
    if(dataUser == NULL){
        dataUser = fopen("dataUser.dat", "wb");
    }
    while (fread(&cek, sizeof(struct pengguna), 1, dataUser)){
        if(strcmp(username, cek.user) == 0){
            fclose(dataUser);
            return 1;
        }
    }
    fclose(dataUser);
    return 0;
}
//MENU USER SETELAH LOGIN
void printMenuUser(){
    cls();
    printf("    _______________________________\n");
    printf("    |       Menu Utama User       |\n");
    printf("    | 1. Pesan Bengkel            |\n");
    printf("    | 2. Tulis Feedback           |\n");
    printf("    | 3. Kembali ke menu utama    |\n");
    printf("    |_____________________________|\n\n");
    menuUser();
}
void menuUser(){
    struct bengkel feedback;
    int a;
    printf("Pilihan anda : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        menuUser2();
        break;
    case 2:
        cls();
        //print daftar bengkel
        daftarBengkel();
        //input namatoko yang ingin dihapus
        char toko[15];
        printf("\n===========================\n");
        printf("Cari Nama Toko : ");
        scanf("%s", &toko);
        //proses cari toko, ada apa ngga
        if (cariNamaToko("dataMobil.dat", toko)){
            feedbackUser(toko);
        }else if(cariNamaToko("dataMotor.dat", toko)){
            feedbackUser(toko);
        }else if (cariNamaToko("dataSepeda.dat", toko)){
            feedbackUser(toko);
        } else {
            cls();
            printf("\nMaaf, bengkel %s tidak ditemukan.\nSilahkan coba lagi.\n\n", toko);
            pause();
            }
        printMenuUser();    
        break;
    case 3: 
        printUtamaUser();
        break;
    default:
        printf("Pilihan tidak ada!");
        pause();
        printMenuUser();
        break;
    }
}
//MENU 1 USER : PESAN BENGKEL
void menuUser2(){
    char toko[20];
    daftarBengkel();
    printf("\n===========================\n");
        printf("Cari Nama Toko : ");
        scanf("%s", &toko);
        if (cariNamaToko("dataMobil.dat", toko)){
            pesanBengkel("dataMobil.dat", toko);
        }else if(cariNamaToko("dataMotor.dat", toko)){
            pesanBengkel("dataMotor.dat", toko);
        }else if (cariNamaToko("dataSepeda.dat", toko)){
            pesanBengkel("dataSepeda.dat", toko);
        } else {
            cls();
            printf("\nMaaf, bengkel %s tidak ditemukan.\nSilahkan coba lagi.\n\n", toko);
            pause();
        }
        printMenuUser();
}
void pesanBengkel(const char *kendaraan, const char *toko){
    cls();
    FILE *file = fopen(kendaraan,"rb");
    struct bengkel pesanBengkel;

    int ada = 0;
    while (fread(&pesanBengkel, sizeof(struct bengkel),1,file)){
        if(strcmp(pesanBengkel.toko, toko) == 0 ){
            ada=1;
            if (pesanBengkel.montir > 0){
                printf("\nData Bengkel:\n");
                printf("Nama Bengkel     : %s \n", pesanBengkel.toko);
                printf("Alamat Bengkel   : %s \n", pesanBengkel.alamat);
                printf("Kontak Bengkel   : %s \n",pesanBengkel.kontak);
                printf("Jam Buka Bengkel : %s \n",pesanBengkel.jambuka);
                printf("Jumlah Montir    : %d \n", pesanBengkel.montir);

                //menyimpan pesanan
                FILE *pesan = fopen("pesanan.dat","ab");
                if(pesan == NULL){
                pesan = fopen("pesanan.dat","wb");
                }
                struct pesanan order;
                strcpy(order.toko, pesanBengkel.toko);
                // nama user? strcpy(order.nama, pesanBengkel.nama);
                fwrite(&order, sizeof(struct pesanan), 1, pesan);
                fclose(pesan);
                printf("pesanan berhasil dilakukan di Bengkel %s\n", toko);
                pause();
                pesanBengkel.montir--;
                fseek(file, sizeof(struct bengkel), SEEK_CUR);
                fwrite(&pesanBengkel, sizeof(struct bengkel), 1, file);
            }else{
                printf("Maaf, bengkel %s sudah penuh.\n", toko);
            }
        }
    }
    fclose(file);
}
//MENU 2 USER : TULIS FEEDBACK
void feedbackUser(const char *toko){
    cls();
    struct feedback tulis;
        FILE *feedbackCustomer = fopen("dataFeedback.dat", "ab");
    
        //jika file tidak ada, maka buat file dulu
        if(feedbackCustomer == NULL){
            feedbackCustomer = fopen("dataFeedback.dat", "wb");
        }

    printf("\nBeri feedback ke bengkel %s\n", toko); strcpy(tulis.toko, toko);
    printf("Tulis Feedback : "); scanf("%s", &tulis.masukkan); getchar();
    printf("Terima Kasih atas feedbacknya!\n");
        //feedback ditulis ke file
    fwrite(&tulis, sizeof(tulis),1, feedbackCustomer);
    fclose(feedbackCustomer);
    pause();
}
//MENU 3 USER : KEMBALI KE MENU UTAMA
        /*MENU UTAMA USER line */

//PROSES CARI TOKO
int cariNamaToko(const char *kendaraan, const char *toko){
    FILE *cari = fopen(kendaraan, "rb");
    struct bengkel cek;
    if(cari == NULL){
        printf("BENGKEL TIDAK ADA!");
    } while(fread(&cek,sizeof(struct bengkel),1,cari)){
        if(strcmp(toko, cek.toko)==0){
            fclose(cari);
            return 1;
        }
    }
    fclose(cari);
    return 0;
}
int main(){
    bool keluar = false;
    while(!keluar){
        printMenuUtama();
        pause();
    }
    return 0;
}
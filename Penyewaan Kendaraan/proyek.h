#ifndef PROYEK_H_INCLUDED
#define PROYEK_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <sstream>
using namespace std;
char pilihlah[100];
char memilih[100];
char penjelasan[100];
int pilih_mobil;
int pilih_motor;
int pilih_sepeda;
bool ulang;
struct data{
    char nama[50];
    char alamat[50];
    char No_KTP[50];
    char No_SIM[50];
    char jenis_kelamin[10];
    char No_hp[20];
    char kode[20];
    char kendaraan[50];
    char jenis_kendaraan[50];
    char tipe_kendaraan[50];
    char tanggal_peminjaman[50];
    char tanggal_pengembalian[50];
};

struct harga{
    int mobil;
    int motor;
    int sepeda;
};

struct data1{
    int tanggal;
    int bulan;
    int tahun;
    int lama;
};

void garis() {
    cout << "======================================================" << endl;
}

data1 peminjaman;
data1 pengembalian;

void rupiah(int hargaTotal){
ostringstream convert;
convert << hargaTotal;
string harga;
char konversi[20];
harga = convert.str();
const char*hargatotal = harga.c_str();
cout<<"Total Biaya          = Rp ";
    for (int kounter = 0; kounter < strlen(hargatotal); kounter++) {
    konversi[strlen(hargatotal)-kounter-1] = hargatotal[kounter];
    }
        for (int kounter = strlen(hargatotal)-1; kounter>=0; kounter--) {
        cout << konversi[kounter];
        if (kounter%3 == 0) {
            if (kounter != 0) {
            cout << ".";
            }
        }
    }
}

void biaya() {
    int biayatotal;
    harga type;
    type.mobil=500000;
    type.motor=250000;
    type.sepeda=50000;
    if(strcmp(pilihlah, "Mobil")==0) {
        biayatotal = type.mobil*peminjaman.lama;
    }
    else if (strcmp(pilihlah, "Motor")==0) {
        biayatotal = type.motor*peminjaman.lama;
    }
    else if (strcmp(pilihlah, "Sepeda")==0) {
        biayatotal = type.sepeda*peminjaman.lama;
    }
    rupiah(biayatotal);
}


void judul(){
    cout << " __________________________________________" << endl;
    cout << "| ________________________________________ |" << endl;
    cout << "||                                        ||" << endl;
    cout << "||   ==================================   ||" << endl;
    cout << "||           ==================           ||" << endl;
    cout << "||               ==========               ||" << endl;
    cout << "||                WELCOME                 ||" << endl;
    cout << "||          PENYEWAAN KENDARAAN           ||" << endl;
    cout << "||           RODA 2 AND RODA 4            ||" << endl;
    cout << "||               ==========               ||" << endl;
    cout << "||           ==================           ||" << endl;
    cout << "||   ==================================   ||" << endl;
    cout << "||________________________________________||" << endl;
    cout << "|__________________________________________|" << endl;
    cout << endl;
    cout << endl;

}

void menu(){
    cout << endl;
    garis();
    cout << "                       Menu                    " << endl;
    garis();
    cout << "Jenis-jenis kendaraan  :" << endl;
    cout << "1.Mobil" << endl;
    cout << "2.Motor" << endl;
    cout << "3.Sepeda" << endl;
}
bool pilihan() {
    ulang=false;
    cout << "masukan nama kendaraan yang ingin di pinjam = ";
    cin >> pilihlah;

    system("CLS");

    if (strcmp(pilihlah,"mobil") == 0 || strcmp(pilihlah, "Mobil") == 0) {
        garis();
        cout << "                  jenis mobil               " << endl;
        garis();
        cout << "1. Toyota" << endl;
        cout << "2. Daihatsu" << endl;
        cout << "3. Suzuki" << endl;
    }
    else if (strcmp(pilihlah,"motor") == 0 || strcmp(pilihlah, "Motor") == 0) {
        garis();
        cout << "                  jenis motor               " << endl;
        garis();
        cout << "1. Honda" << endl;
        cout << "2. Yamaha" << endl;
        cout << "3. Kawasaki" << endl;
        cout << endl;
    }
    else  if (strcmp(pilihlah,"sepeda") == 0 || strcmp(pilihlah, "sepeda") == 0) {
        garis();
        cout << "                  jenis sepeda                     " << endl;
        garis();
        cout << "1. Polygon" << endl;
        cout << "2. wimcycle" << endl;
        cout << "3. BMX" << endl;
    }
    else {
        garis();
        cout << "       maaf pilihan anda tidak ada di menu         " << endl;
        garis();
        ulang=true;
        system("PAUSE");
    }
    return ulang;
}

bool kendaraan() {
    ulang=false;
    cout << endl;
    cout << "pilih tipe kendaraan = ";
    cin >> memilih;

    system("CLS");

    if (strcmp(memilih,"toyota") == 0 || strcmp(memilih, "Toyota") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Alphard" << endl;
        cout << "2. Avanza"  << endl;
        cout << "3. Yaris" << endl;

    }
    else if (strcmp(memilih,"daihatsu") == 0 || strcmp(memilih, "Daihatsu") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Terios" << endl;
        cout << "2. Xenia" << endl;
        cout << "3. Luxio" << endl;
    }
    else if (strcmp(memilih,"suzuki") == 0 || strcmp(memilih, "Daihatsu") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Apv" << endl;
        cout << "2. Ertiga" << endl;
        cout << "3. Karimun" << endl;
    }
    else if (strcmp(memilih,"honda") == 0 || strcmp(memilih, "Honda") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. CBR" << endl;
        cout << "2. Revo" << endl;
        cout << "3. Beat" << endl;
    }
    else if (strcmp(memilih,"yamaha") == 0 || strcmp(memilih, "Yamaha") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Vixion" << endl;
        cout << "2. Mio" << endl;
        cout << "3. Jupiter" << endl;
    }
    else if (strcmp(memilih,"kawasaki") == 0 || strcmp(memilih, "Kawasaki") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Ninja" << endl;
        cout << "2. Estrella" << endl;
        cout << "3. Versys" << endl;
    }
    else if (strcmp(memilih,"polygon") == 0 || strcmp(memilih, "Polygon") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Collosus" << endl;
        cout << "2. Enduro" << endl;
        cout << "3. Cozmic" << endl;
    }
    else if (strcmp(memilih,"wimcycle") == 0 || strcmp(memilih, "Wimcycle") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. CTB" << endl;
        cout << "2. Dragon Blade" << endl;
        cout << "3. MTB" << endl;
    }
    else if (strcmp(memilih,"bmx") == 0 || strcmp(memilih, "Bmx") == 0 || strcmp(memilih, "BMX") == 0) {
        garis();
        cout << "                 merek kendaraan                   " << endl;
        garis();
        cout << "1. Haro" << endl;
        cout << "2. Verde" << endl;
        cout << "3. Fit" << endl;
    }
    else {
        garis();
        cout << "       maaf tipe pilihan anda tidak ada disini     " << endl;
        garis();
        system("PAUSE");
        ulang=true;
    }
    return ulang;
}

bool tipe() {
    ulang=false;

    cout << endl;
    cout << "masukan merek kendaraan yang ingin dipilih = ";
    cin >> penjelasan;

    system("CLS");

    if (strcmp(penjelasan,"alphard") == 0 || strcmp(penjelasan, "Alphard") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 1 :" << endl;
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Alphard" << endl;
        cout << " -Warna mobil\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2005" << endl;
        cout << " -No. Polisi\t\t: BE 1234 SS" << endl;
        cout << " -No. Rangka\t\t: 3434222221134" << endl;
        cout << " -No. Mesin\t\t: 453453333222" << endl;
        cout << " -No. BPKB\t\t: 2014333322211" << endl;
        cout << " -Tanggal berlaku STNK\t: 24-11-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"avanza") == 0 || strcmp(penjelasan, "Avanza") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 2 :" << endl;
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Avanza" << endl;
        cout << " -Warna mobil\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221135" << endl;
        cout << " -No. Mesin\t\t: 453453333223" << endl;
        cout << " -No. BPKB\t\t: 2014333322212" << endl;
        cout << " -Tanggal berlaku STNK\t: 09-02-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"yaris") == 0 || strcmp(penjelasan, "Yaris") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 3 :" << endl;
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Yaris" << endl;
        cout << " -Warna mobil\t\t: Abu-abu" << endl;
        cout << " -Tahun pembuatan\t: 2008" << endl;
        cout << " -No. Polisi\t\t: 3434222221136" << endl;
        cout << " -No. Mesin\t\t: 453453333224" << endl;
        cout << " -No. BPKB\t\t: 2014333322213" << endl;
        cout << " -Tanggal berlaku STNK\t: 07-02-2018" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if  (strcmp(penjelasan,"terios") == 0 || strcmp(penjelasan, "Terios") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 4 :" << endl;
        cout << " -Jenis mobil\t\t: Daihatsu" << endl;
        cout << " -Tipe mobil\t\t: Terios" << endl;
        cout << " -Warna mobil\t\t: Merah" << endl;
        cout << " -Tahun pembuatan\t: 2012" << endl;
        cout << " -No. Polisi\t\t: 3434222221137" << endl;
        cout << " -No. Mesin\t\t: 453453333225" << endl;
        cout << " -No. BPKB\t\t: 2014333322214" << endl;
        cout << " -Tanggal berlaku STNK\t: 15-08-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"xenia") == 0 || strcmp(penjelasan, "Xenia") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 5 :" << endl;
        cout << " -Jenis mobil\t\t: Daihatsu" << endl;
        cout << " -Tipe mobil\t\t: Xenia" << endl;
        cout << " -Warna mobil\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2007" << endl;
        cout << " -No. Polisi\t\t: 3434222221138" << endl;
        cout << " -No. Mesin\t\t: 453453333226" << endl;
        cout << " -No. BPKB\t\t: 2014333322215" << endl;
        cout << " -Tahun berlaku STNK\t: 25-12-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"luxio") == 0 || strcmp(penjelasan, "Luxio") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 6 :" << endl;
        cout << " -Jenis mobil\t\t: Daihatsu" << endl;
        cout << " -Tipe mobil\t\t: Luxio" << endl;
        cout << " -Warna mobil\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2008" << endl;
        cout << " -No. Polisi\t\t: 3434222221139" << endl;
        cout << " -No. Mesin\t\t: 453453333227" << endl;
        cout << " -No. BPKB\t\t: 2014333322216" << endl;
        cout << " -Tahun berlaku STNK\t: 21-10-2018" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"apv") == 0 || strcmp(penjelasan, "Apv") == 0 || strcmp(penjelasan, "APV") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 7 :" << endl;
        cout << " -Jenis mobil\t\t: Suzuki" << endl;
        cout << " -Tipe mobil\t\t: Apv" << endl;
        cout << " -Warna mobil\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221140" << endl;
        cout << " -No. Mesin\t\t: 453453333228" << endl;
        cout << " -No. BPKB\t\t: 2014333322217" << endl;
        cout << " -Tahun berlaku STNK\t: 15-07-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"ertiga") == 0 || strcmp(penjelasan, "Ertiga") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 8 :" << endl;
        cout << " -Jenis mobil\t\t: Suzuki" << endl;
        cout << " -Tipe mobil\t\t: Ertiga" << endl;
        cout << " -Warna mobil\t\t: Biru" << endl;
        cout << " -Tahun pembuatan\t: 2013" << endl;
        cout << " -No. Polisi\t\t: 3434222221141" << endl;
        cout << " -No. Mesin\t\t: 453453333229" << endl;
        cout << " -No. BPKB\t\t: 2014333322218" << endl;
        cout << " -Tahun berlaku STNK\t: 12-09-2018" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"karimun") == 0 || strcmp(penjelasan, "Karimun") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 9 :" << endl;
        cout << " -Jenis mobil\t\t: Suzuki" << endl;
        cout << " -Tipe mobil\t\t: Karimun" << endl;
        cout << " -Warna mobil\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -No. Polisi\t\t: 3434222221142" << endl;
        cout << " -No. Mesin\t\t: 453453333230" << endl;
        cout << " -No. BPKB\t\t: 2014333322219" << endl;
        cout << " -Tahun berlaku STNK\t: 27-11-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
    }
    else if (strcmp(penjelasan,"cbr") == 0 || strcmp(penjelasan, "Cbr") == 0 || strcmp(penjelasan, "CBR") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 10 :" << endl;
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: CBR" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2012" << endl;
        cout << " -No. Polisi\t\t: 3434222221143" << endl;
        cout << " -No. Mesin\t\t: 453453333231" << endl;
        cout << " -No. BPKB\t\t: 2014333322220" << endl;
        cout << " -Tahun berlaku STNK\t: 07-08-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"revo") == 0 || strcmp(penjelasan, "Revo") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 11 :" << endl;
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: Revo" << endl;
        cout << " -Warna motor\t\t: Merah" << endl;
        cout << " -Tahun pembuatan\t: 2009" << endl;
        cout << " -No. Polisi\t\t: 3434222221144" << endl;
        cout << " -No. Mesin\t\t: 453453333232" << endl;
        cout << " -No. BPKB\t\t: 2014333322221" << endl;
        cout << " -Tahun berlaku STNK\t: 06-06-2019" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }

    else if (strcmp(penjelasan,"beat") == 0 || strcmp(penjelasan, "Beat") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 12 :" << endl;
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: Beat" << endl;
        cout << " -Warna motor\t\t: Hijau" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221145" << endl;
        cout << " -No. Mesin\t\t: 453453333233" << endl;
        cout << " -No. BPKB\t\t: 2014333322222" << endl;
        cout << " -Tahun berlaku STNK\t: 27-02-2019" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"vixion") == 0 || strcmp(penjelasan, "Vixion") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 13 :" << endl;
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Vixion" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2013" << endl;
        cout << " -No. Polisi\t\t: 3434222221146" << endl;
        cout << " -No. Mesin\t\t: 453453333234" << endl;
        cout << " -No. BPKB\t\t: 2014333322223" << endl;
        cout << " -Tahun berlaku STNK\t: 19-03-2018" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"mio") == 0 || strcmp(penjelasan, "Mio") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 14 :" << endl;
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Mio" << endl;
        cout << " -Warna motor\t\t: Merah" << endl;
        cout << " -Tahun pembuatan\t: 2007" << endl;
        cout << " -No. Polisi\t\t: 3434222221147" << endl;
        cout << " -No. Mesin\t\t: 453453333235" << endl;
        cout << " -No. BPKB\t\t: 2014333322224" << endl;
        cout << " -Tahun berlaku STNK\t: 19-03-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.100.000" << endl;
    }
    else if (strcmp(penjelasan,"jupiter") == 0 || strcmp(penjelasan, "Jupiter") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 15 :" << endl;
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Jupiter" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2005" << endl;
        cout << " -No. Polisi\t\t: 3434222221148" << endl;
        cout << " -No. Mesin\t\t: 453453333236" << endl;
        cout << " -No. BPKB\t\t: 2014333322225" << endl;
        cout << " -Tahun berlaku STNK\t: 20-05-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"ninja") == 0 || strcmp(penjelasan, "Ninja") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 16 :" << endl;
        cout << " -Jenis motor\t\t: Kawasaki" << endl;
        cout << " -Tipe motor\t\t: Ninja" << endl;
        cout << " -Warna motor\t\t: Hijau" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221149" << endl;
        cout << " -No. Mesin\t\t: 453453333237" << endl;
        cout << " -No. BPKB\t\t: 2014333322226" << endl;
        cout << " -Tahun berlaku STNK\t: 18-08-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"estrella") == 0 || strcmp(penjelasan, "Estrella") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 17 :" << endl;
        cout << " -Jenis motor\t\t: Kawasaki" << endl;
        cout << " -Tipe motor\t\t: Estrella" << endl;
        cout << " -Warna motor\t\t: Merah" << endl;
        cout << " -Tahun pembuatan\t: 2007" << endl;
        cout << " -No. Polisi\t\t: 3434222221150" << endl;
        cout << " -No. Mesin\t\t: 453453333238" << endl;
        cout << " -No. BPKB\t\t: 2014333322227" << endl;
        cout << " -Tahun berlaku STNK\t: 18-08-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"versys") == 0 || strcmp(penjelasan, "Versys") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 18 :" << endl;
        cout << " -Jenis motor\t\t: Kawasaki" << endl;
        cout << " -Tipe motor\t\t: Versys" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2006" << endl;
        cout << " -No. Polisi\t\t: 3434222221151" << endl;
        cout << " -No. Mesin\t\t: 453453333239" << endl;
        cout << " -No. BPKB\t\t: 2014333322228" << endl;
        cout << " -Tahun berlaku STNK\t: 18-08-2021" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
    }
    else if (strcmp(penjelasan,"collosus") == 0 || strcmp(penjelasan, "Collosus") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 19 :" << endl;
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Collosus" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2014" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"enduro") == 0 || strcmp(penjelasan, "Enduro") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 20 :" << endl;
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Enduro" << endl;
        cout << " -Warna sepeda\t\t: Biru" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"cozmic") == 0 || strcmp(penjelasan, "Cozmic") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 21 :" << endl;
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Cozmic" << endl;
        cout << " -Warna sepeda\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"ctb") == 0 || strcmp(penjelasan, "Ctb") == 0 || strcmp(penjelasan, "CTB") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 22 :" << endl;
        cout << " -Tipe sepeda\t\t: Wimcycle" << endl;
        cout << " -Merek sepeda\t\t: CTB" << endl;
        cout << " -Warna sepeda\t\t: Biru" << endl;
        cout << " -Tahun pembuatan\t: 2014" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"dragon blade") == 0 || strcmp(penjelasan, "Dragon blade") == 0 || strcmp(penjelasan, "Dragon Blade") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 23 :" << endl;
        cout << " -Tipe sepeda\t\t: Wimcycle" << endl;
        cout << " -Merek sepeda\t\t: Dragon Blade" << endl;
        cout << " -Warna sepeda\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"mtb") == 0 || strcmp(penjelasan, "Mtb") == 0 || strcmp(penjelasan, "MTB") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 24 :" << endl;
        cout << " -Tipe sepeda\t\t: Wimcycle" << endl;
        cout << " -Merek sepeda\t\t: MTB" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"haro") == 0 || strcmp(penjelasan, "Haro") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "1.Kode 25 :" << endl;
        cout << " -Tipe sepeda\t\t: BMX" << endl;
        cout << " -Merek sepeda\t\t: Haro" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2013" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"verde") == 0 || strcmp(penjelasan, "Verde") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "2.Kode 26 :" << endl;
        cout << " -Tipe sepeda\t\t: BMX" << endl;
        cout << " -Merek sepeda\t\t: Verde" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2014" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else if (strcmp(penjelasan,"fit") == 0 || strcmp(penjelasan, "Fit") == 0) {
        cout << "=================================================" << endl;
        cout << "               Keterangan kendaraan              " << endl;
        cout << "=================================================" << endl;
        cout << "3.Kode 27 :" << endl;
        cout << " -Tipe sepeda\t\t: BMX" << endl;
        cout << " -Merek sepeda\t\t: Fit" << endl;
        cout << " -Warna sepeda\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
    }
    else{
        cout<<"Pilihan Tidak tersedia"<<endl;
        ulang=true;
    }
    return ulang;
}

void terlambat(int telat){
    int denda;
        if (strcmp(pilihlah,"mobil") == 0 || strcmp(pilihlah, "Mobil") == 0) {
            denda=telat*500000;
    }
    else if (strcmp(pilihlah,"motor") == 0 || strcmp(pilihlah, "Motor") == 0) {
            denda=telat*250000;
    }
    else  if (strcmp(pilihlah,"sepeda") == 0 || strcmp(pilihlah, "sepeda") == 0) {
            denda=telat*50000;
    }
    cout<<"Denda Keterlambatan Pengembalian = "<<denda;
}

void tersedia{

}

#endif // PROYEK_H_INCLUDED

#ifndef PROYEK1_H_INCLUDED
#define PROYEK1_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <sstream>

using namespace std;

char pilih[100];
char memilih[100];
char penjelasan[100];
int pilih_mobil;
int pilih_motor;
int pilih_sepeda;
int telat;
int kode;
bool ulang;
int denda=0;

struct data_pelanggan{
    char nama[50];
    char alamat[50];
    char No_KTP[50];
    char No_SIM[50];
    char jenis_kelamin[10];
    char No_hp[20];
    char kendaraan[50];
    int kode;
};

struct harga{
    int mobil;
    int motor;
    int sepeda;
};

struct data{
    int tanggal;
    int bulan;
    int tahun;
    int lama;
};

void garis(){
    cout << "======================================================" << endl;
}

void bintang(){
    cout << "******************************************************" << endl;
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
    garis();
    cout << "                       Menu                    " << endl;
    garis();
    cout << "Jenis-jenis kendaraan  :" << endl;
    cout << "1.Mobil" << endl;
    cout << "2.Motor" << endl;
    cout << "3.Sepeda" << endl;
    cout << endl;
    cout << "masukan nama kendaraan yang ingin dipinjam [input nama] = ";
    cin >> pilih;
}

bool kendaraan(){
    ulang=false;
    system("CLS");

    if (strcmp(pilih,"mobil")==0 || strcmp(pilih,"Mobil")==0) {
        garis();
        cout << "               Keterangan Kendaraan               " << endl;
        garis();
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
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "2.Kode 2 :" << endl;
        cout << " -Jenis mobil\t\t: Daihatsu" << endl;
        cout << " -Tipe mobil\t\t: Xenia" << endl;
        cout << " -Warna mobil\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2007" << endl;
        cout << " -No. Polisi\t\t: 3434222221138" << endl;
        cout << " -No. Mesin\t\t: 453453333226" << endl;
        cout << " -No. BPKB\t\t: 2014333322215" << endl;
        cout << " -Tahun berlaku STNK\t: 25-12-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        cout << " -status kendaraan\t: " << endl;
        cout << endl;
        cout << "3.Kode 3 :" << endl;
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Avanza" << endl;
        cout << " -Warna mobil\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221135" << endl;
        cout << " -No. Mesin\t\t: 453453333223" << endl;
        cout << " -No. BPKB\t\t: 2014333322212" << endl;
        cout << " -Tanggal berlaku STNK\t: 09-02-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "4.Kode 4 :" << endl;
        cout << " -Jenis mobil\t\t: Suzuki" << endl;
        cout << " -Tipe mobil\t\t: Apv" << endl;
        cout << " -Warna mobil\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221140" << endl;
        cout << " -No. Mesin\t\t: 453453333228" << endl;
        cout << " -No. BPKB\t\t: 2014333322217" << endl;
        cout << " -Tahun berlaku STNK\t: 15-07-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        cout << " -status kendaraan\t: sedang dipinjam" << endl;
        cout << endl;
        cout << "masukan kode kendaraan [input angka] = ";
        cin >> kode;
    }
    else if (strcmp(pilih,"motor")==0 || strcmp(pilih,"Motor")==0) {
        garis();
        cout << "               Keterangan Kendaraan               " << endl;
        garis();
        cout << "1.Kode 5 :" << endl;
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: CBR" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2012" << endl;
        cout << " -No. Polisi\t\t: 3434222221143" << endl;
        cout << " -No. Mesin\t\t: 453453333231" << endl;
        cout << " -No. BPKB\t\t: 2014333322220" << endl;
        cout << " -Tahun berlaku STNK\t: 07-08-2017" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "2.Kode 6 :" << endl;
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: Beat" << endl;
        cout << " -Warna motor\t\t: Hijau" << endl;
        cout << " -Tahun pembuatan\t: 2010" << endl;
        cout << " -No. Polisi\t\t: 3434222221145" << endl;
        cout << " -No. Mesin\t\t: 453453333233" << endl;
        cout << " -No. BPKB\t\t: 2014333322222" << endl;
        cout << " -Tahun berlaku STNK\t: 27-02-2019" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "3.Kode 7 :" << endl;
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Vixion" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2013" << endl;
        cout << " -No. Polisi\t\t: 3434222221146" << endl;
        cout << " -No. Mesin\t\t: 453453333234" << endl;
        cout << " -No. BPKB\t\t: 2014333322223" << endl;
        cout << " -Tahun berlaku STNK\t: 19-03-2018" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "4.Kode 8 :" << endl;
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Jupiter" << endl;
        cout << " -Warna motor\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2005" << endl;
        cout << " -No. Polisi\t\t: 3434222221148" << endl;
        cout << " -No. Mesin\t\t: 453453333236" << endl;
        cout << " -No. BPKB\t\t: 2014333322225" << endl;
        cout << " -Tahun berlaku STNK\t: 20-05-2020" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        cout << " -status kendaraan\t: sedang dipinjam" << endl;
        cout << endl;
        cout << "masukan kode kendaraan [input angka] = ";
        cin >> kode;
    }
    else if (strcmp(pilih,"sepeda")==0 || strcmp(pilih,"Sepeda")==0) {
        garis();
        cout << "               Keterangan Kendaraan               " << endl;
        garis();
        cout << "1.Kode 9 :" << endl;
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Collosus" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2014" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "2.Kode 10 :" << endl;
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Cozmic" << endl;
        cout << " -Warna sepeda\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "3.Kode 11 :" << endl;
        cout << " -Tipe sepeda\t\t: Wimcycle" << endl;
        cout << " -Merek sepeda\t\t: Dragon Blade" << endl;
        cout << " -Warna sepeda\t\t: Putih" << endl;
        cout << " -Tahun pembuatan\t: 2015" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        cout << " -status kendaraan\t: ada" << endl;
        cout << endl;
        cout << "4.Kode 12 :" << endl;
        cout << " -Tipe sepeda\t\t: BMX" << endl;
        cout << " -Merek sepeda\t\t: Verde" << endl;
        cout << " -Warna sepeda\t\t: Hitam" << endl;
        cout << " -Tahun pembuatan\t: 2014" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        cout << " -status kendaraan\t: sedang dipinjam" << endl;
        cout << endl;
        cout << "masukan kode kendaraan [input angka] = ";
        cin >> kode;
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

bool status(){
    ulang=false;
    system("CLS");

    switch (kode){
    case 1:
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Alphard" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        break;
    case 2:
        cout << " -Jenis mobil\t\t: Daihatsu" << endl;
        cout << " -Tipe mobil\t\t: Xenia" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        break;
    case 3:
        cout << " -Jenis mobil\t\t: Toyota" << endl;
        cout << " -Tipe mobil\t\t: Avanza" << endl;
        cout << " -Harga sewa\t\t: Rp.500.000" << endl;
        break;
    case 4:
        garis();
        cout << "           maaf kendaraan sedang dipinjam          " << endl;
        garis();
        ulang=true;
        system("PAUSE");
        break;
    case 5:
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: CBR" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        break;
    case 6:
        cout << " -Jenis motor\t\t: Honda" << endl;
        cout << " -Tipe motor\t\t: Beat" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        break;
    case 7:
        cout << " -Jenis motor\t\t: Yamaha" << endl;
        cout << " -Tipe motor\t\t: Vixion" << endl;
        cout << " -Harga sewa\t\t: Rp.250.000" << endl;
        break;
    case 8:
        garis();
        cout << "           maaf kendaraan sedang dipinjam          " << endl;
        garis();
        ulang=true;
        system("PAUSE");
        break;
    case 9:
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Collosus" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        break;
    case 10:
        cout << " -Tipe sepeda\t\t: Polygon" << endl;
        cout << " -Merek sepeda\t\t: Cozmic" << endl;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        break;
    case 11:
        cout << " -Tipe sepeda\t\t: Wimcycle" << endl;
        cout << " -Merek sepeda\t\t: Dragon Blade" << endl;;
        cout << " -Harga sewa\t\t: Rp.50.000" << endl;
        break;
    case 12:
        garis();
        cout << "           maaf kendaraan sedang dipinjam          " << endl;
        garis();
        ulang=true;
        system("PAUSE");
        break;
    default:
        garis();
        cout << "           kode salah          " << endl;
        garis();
        ulang=true;
        system("PAUSE");
    }
    return ulang;
}

data peminjaman;
data pengembalian;

void rupiah(int hargaTotal){
    ostringstream convert;
    convert << hargaTotal;
    string harga;
    char konversi[20];
    harga = convert.str();
    const char*hargatotal=harga.c_str();
        for (int kounter=0; kounter<strlen(hargatotal); kounter++){
            konversi[strlen(hargatotal)-kounter-1]=hargatotal[kounter];
        }
        cout<<"Rp ";
            for (int kounter=strlen(hargatotal)-1; kounter>=0; kounter--){
                cout << konversi[kounter];
                if (kounter%3==0){
                    if (kounter!=0){
                        cout << ".";
                    }
                }
            }
}

int biaya(){
    int biayatotal;

    harga type;
    type.mobil=500000;
    type.motor=250000;
    type.sepeda=50000;

    if(strcmp(pilih,"mobil")==0){
        biayatotal = type.mobil*peminjaman.lama+denda;
    }
    else if (strcmp(pilih,"motor")==0){
        biayatotal = type.motor*peminjaman.lama+denda;
    }
    else if (strcmp(pilih,"sepeda")==0){
        biayatotal = type.sepeda*peminjaman.lama+denda;
    }
    rupiah(biayatotal);
}

void tersedia(){
    cout << "tanggal pengembalian  = ";
    cin >> pengembalian.tanggal;
    cout << "bulan pengembalian    = ";
    cin >> pengembalian.bulan;
    cout << "tahun pengembalian    = ";
    cin >> pengembalian.tahun;

    if  (pengembalian.tanggal>31){
        pengembalian.tanggal=pengembalian.tanggal-31;
        pengembalian.bulan=pengembalian.bulan+1;
        if (pengembalian.bulan>12){
            pengembalian.bulan=pengembalian.bulan-12;
            pengembalian.tahun=pengembalian.tahun+1;
        }
    }
}

void tglkembali(){

    pengembalian.tanggal = peminjaman.tanggal+peminjaman.lama;
    pengembalian.bulan = peminjaman.bulan;
    pengembalian.tahun = peminjaman.tahun;

        if (pengembalian.tanggal>31){
            pengembalian.tanggal=pengembalian.tanggal-31;
            pengembalian.bulan=pengembalian.bulan+1;
            if (pengembalian.bulan>12){
                pengembalian.bulan=pengembalian.bulan-12;
                pengembalian.tahun=pengembalian.tahun+1;
            }
        }
    cout<<pengembalian.tanggal << "-" << pengembalian.bulan << "-" << pengembalian.tahun << endl;
}

void terlambat(){
    data tgltelat;
    data sisa;

    harga telat;
    telat.mobil=500000;
    telat.motor=250000;
    telat.sepeda=50000;

    cin.ignore();
    cout<<"Masukan Tanggal      = ";
    cin>>tgltelat.tanggal;
    cout<<"Masukan Bulan        = ";
    cin>>tgltelat.bulan;
    cout<<"Masukan Tahun        = ";
    cin>>tgltelat.tahun;

    sisa.tahun=tgltelat.tahun-pengembalian.tahun;
    if(sisa.tahun!=0){
        tgltelat.bulan=tgltelat.bulan+12;
        sisa.bulan=tgltelat.bulan-pengembalian.bulan;
    }
    else{
        sisa.bulan=tgltelat.bulan-pengembalian.bulan;
    }
    if(sisa.bulan!=0){
          tgltelat.tanggal=tgltelat.tanggal+31;
          sisa.tanggal=tgltelat.tanggal-pengembalian.tanggal;
        }
    else{
            sisa.tanggal=tgltelat.tanggal-pengembalian.tanggal;
        }

    if (strcmp(pilih,"mobil")==0 || strcmp(pilih,"Mobil")==0){
        denda=telat.mobil*sisa.tanggal;
    }
    else if (strcmp(pilih,"motor")==0 || strcmp(pilih,"Motor")==0){
        denda=telat.motor*sisa.tanggal;
    }
    else  if (strcmp(pilih,"sepeda")==0 || strcmp(pilih,"Sepeda")==0){
        denda=telat.sepeda*sisa.tanggal;
    }
    cout<<"Denda                = ";
    rupiah(denda);
}

#endif // PROYEK1_H_INCLUDED

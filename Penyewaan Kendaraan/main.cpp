#include "proyek.h"

using namespace std;


int main() {
    int pilih;
    int merek;
    int keterangan;
    char kembali;
    char ulang;
    int hasil;

    judul();

    data pelanggan[1];
    for (int kounter = 0; kounter < 1; kounter++) {
        cout << "silahkan masukan data anda terlebih dahulu :" << endl;
        cout << "Nama           = ";
        cin.getline(pelanggan[kounter].nama, 50);
        cout << "Alamat         = ";
        cin.getline(pelanggan[kounter].alamat, 50);
        cout << "No. KTP        = ";
        cin.getline(pelanggan[kounter].No_KTP, 50);
        cout << "No. SIM        = ";
        cin.getline(pelanggan[kounter].No_SIM, 50);
        cout << "Jenis Kelamin  = ";
        cin.getline(pelanggan[kounter].jenis_kelamin, 10);
        cout << "No. HP         = ";
        cin.getline(pelanggan[kounter].No_hp, 20);
    }

    system("CLS");

    for (int kounter = 0; kounter < 1; kounter++) {

        cout << "======================================================" << endl;
        cout << "                        Data                          " << endl;
        cout << "======================================================" << endl;
        cout << "Nama           = " << pelanggan[kounter].nama << endl;
        cout << "Alamat         = " << pelanggan[kounter].alamat << endl;
        cout << "No. KTP        = " << pelanggan[kounter].No_KTP << endl;
        cout << "No.SIM         = " << pelanggan[kounter].No_SIM << endl;
        cout << "Jenis Kelamin  = " << pelanggan[kounter].jenis_kelamin << endl;
        cout << "No. HP         = " << pelanggan[kounter].No_hp << endl;

    }
    system("PAUSE");
    bool tes;
    do{
    system("CLS");
    menu();

    tes=pilihan();

    if(tes==false)tes=kendaraan();

    if(tes==false)tes=tipe();

    if(tes==true){
    cout << "ingin kembali lagi ke menu [y/t] = ";
    cin >> kembali;
    }

    }while(kembali=='y');

    cout << endl;


    //for (int kounter = 0; kounter < 100; kounter++) {
        cin.ignore();
        cout << "masukan tanggal peminjaman kendaraan = ";
        cin >> peminjaman.tanggal;
        cout<< "masukan bulan peminjaman kendaraan = ";
        cin >> peminjaman.bulan;
        cout << "masukan tahun peminjaman kendaraan = ";
        cin >> peminjaman.tahun;
        cout << endl;
        cout << "lama peminjaman = ";
        cin >> peminjaman.lama;

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

    pilihlah[0]=char(pilihlah[0]-32);
    memilih[0]=char(memilih[0]-32);
    penjelasan[0]=char(penjelasan[0]-32);
    system("CLS");

    harga total;
    for (int kounter = 0; kounter < 1; kounter++) {
        cout << "===================================================" << endl;
        cout << "Nama                   = " << pelanggan[kounter].nama << endl;
        cout << "Jenis Kelamin          = " << pelanggan[kounter].jenis_kelamin << endl;
        cout << "No. KTP                = " << pelanggan[kounter].No_KTP << endl;
        cout << "No.SIM                 = " << pelanggan[kounter].No_SIM << endl;
        cout << "Pengembalian           = " << pengembalian.tanggal << "-" << pengembalian.bulan << "-" << pengembalian.tahun << endl;
        cout << "kendaraan              = " << pilihlah << endl;
        cout << "jenis kendaraan        = " << memilih << endl;
        cout << "tipe kendaraan         = " << penjelasan << endl;
        biaya();
        cout << endl;
        cout << "===================================================" << endl;
    }

    cout << endl;
    judul();

    for (int kounter = 0; kounter < 1; kounter++) {
        cout << "===================================================" << endl;
        cout << "                PENGEMBALIAN KENDARAAN             " << endl;
        cout << "===================================================" << endl;
        cout << "Silahkan isi data anda disini : " << endl;
        cin.ignore();
        cout << "kode kendaraan         = ";
        cin.getline(pelanggan[kounter].kode, 20);
        cout << "Nama                   = ";
        cin.getline(pelanggan[kounter].alamat, 50);
        cout << "Jenis Kelamin          = ";
        cin.getline(pelanggan[kounter].jenis_kelamin, 10);
        cout << "No. KTP                = ";
        cin.getline(pelanggan[kounter].No_KTP, 50);
        cout << "No. SIM                = ";
        cin.getline(pelanggan[kounter].No_SIM, 50);
        cout << "kendaraan              = ";
        cin.getline(pelanggan[kounter].kendaraan, 50);
        cout << "jenis kendaraan        = ";
        cin.getline(pelanggan[kounter].jenis_kendaraan, 50);
        cout << "tipe kendaraan         = ";
        cin.getline(pelanggan[kounter].tipe_kendaraan, 50);
        cout << "tanggal peminjaman     = ";
        cin.getline(pelanggan[kounter].tanggal_peminjaman, 50);
        cout << "tanggal pengembalian   = ";
        cin.getline(pelanggan[kounter].tanggal_pengembalian, 50);
    }

    system("CLS");

    for (int kounter = 0; kounter < 1; kounter++) {
        cout << "===================================================" << endl;
        cout << "Nama                 = " << pelanggan[kounter].nama << endl;
        cout << "Jenis Kelamin        = " << pelanggan[kounter].jenis_kelamin << endl;
        cout << "No. KTP              = " << pelanggan[kounter].No_KTP << endl;
        cout << "No.SIM               = " << pelanggan[kounter].No_SIM << endl;
        cout << "kendaraan            = " << pilihlah << endl;
        cout << "jenis kendaraan      = " << memilih << endl;
        cout << "tipe kendaraan       = " << penjelasan << endl;
        cout << "tanggal peminjaman   = " << pelanggan[kounter].tanggal_peminjaman << endl;
        cout << "tanggal pengembalian = " << pelanggan[kounter].tanggal_pengembalian << endl;
        biaya();
        cout << endl;
        cout << "===================================================" << endl;
        cout << "***************************************************" << endl;
        cout << "===================================================" << endl;
        cout << "***************************************************" << endl;
        cout << "===================================================" << endl;
        cout << "                Terimakasih banyak                 " << endl;
        cout << "                Telah mengunjungi                  " << endl;
        cout << "                 Perusahaan kami                   " << endl;
        cout << "===================================================" << endl;
    }

}

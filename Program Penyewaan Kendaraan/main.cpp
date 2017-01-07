#include "proyek1.h"

using namespace std;

int main()
{
    char kembali;
    int hasil;
    int telat;
    int denda;

    judul();

    data_pelanggan kami[1];
    for (int kounter=0; kounter<1; kounter++){
        cout << "silahkan masukan data anda terlebih dahulu :" << endl;
        cout << "Nama           = ";
        cin.getline(kami[kounter].nama, 50);
        cout << "Alamat         = ";
        cin.getline(kami[kounter].alamat, 50);
        cout << "No. KTP        = ";
        cin.getline(kami[kounter].No_KTP, 50);
        cout << "No. SIM        = ";
        cin.getline(kami[kounter].No_SIM, 50);
        cout << "Jenis Kelamin  = ";
        cin.getline(kami[kounter].jenis_kelamin, 10);
        cout << "No. HP         = ";
        cin.getline(kami[kounter].No_hp, 20);
    }

    system("CLS");

    for (int kounter = 0; kounter < 1; kounter++) {
        cout << "======================================================" << endl;
        cout << "                        Data                          " << endl;
        cout << "======================================================" << endl;
        cout << "Nama           = " << kami[kounter].nama << endl;
        cout << "Alamat         = " << kami[kounter].alamat << endl;
        cout << "No. KTP        = " << kami[kounter].No_KTP << endl;
        cout << "No.SIM         = " << kami[kounter].No_SIM << endl;
        cout << "Jenis Kelamin  = " << kami[kounter].jenis_kelamin << endl;
        cout << "No. HP         = " << kami[kounter].No_hp << endl;
    }

    system("PAUSE");
    bool tes;
    do{
        kembali='n';
        system("CLS");

        menu();

        tes=kendaraan();

        if(tes==false)tes=status();

        if(tes==true){
            cout << endl;
            cout << "ingin kembali lagi menu [y/t] = ";
            cin >> kembali;
        }
        }while(kembali=='y');

    garis();
    cout << endl;
    cout << "masukan tanggal peminjaman kendaraan = ";
    cin >> peminjaman.tanggal;
    cout<< "masukan bulan peminjaman kendaraan   = ";
    cin >> peminjaman.bulan;
    cout << "masukan tahun peminjaman kendaraan   = ";
    cin >> peminjaman.tahun;
    cout << endl;
    cout << "berapa hari peminjaman               = ";
    cin >> peminjaman.lama;

    system("CLS");

    harga total;
    for (int kounter = 0; kounter < 1; kounter++) {
    garis();
    cout << "Nama                   = " << kami[kounter].nama << endl;
    cout << "Jenis Kelamin          = " << kami[kounter].jenis_kelamin << endl;
    cout << "No. KTP                = " << kami[kounter].No_KTP << endl;
    cout << "No.SIM                 = " << kami[kounter].No_SIM << endl;
    cout << "kendaraan              = " << pilih << endl;
    cout << "tanggal peminjaman     = " << peminjaman.tanggal << "-" << peminjaman.bulan << "-" << peminjaman.tahun << endl;
    cout << "tanggal pengembalian   = ";
    tglkembali();
    cout << "biaya                  = ";
    biaya();
    cout << endl;
    garis();
    }

    system("PAUSE");

    system("CLS");

    //judul();

    for (int kounter=0; kounter<1; kounter++){
        garis();
        cout << "                Pengembalian Kendaraan             " << endl;
        garis();
        cout << "kode                 = " << kode << endl;
        cout << "Nama                 = " << kami[kounter].nama << endl;
        cout << "Alamat               = " << kami[kounter].alamat << endl;
        cout << "jenis kelamin        = " << kami[kounter].jenis_kelamin << endl;
        cout << "No.KTP               = " << kami[kounter].No_KTP << endl;
        cout << "No.SIM               = " << kami[kounter].No_SIM << endl;
        cout << "kendaraan            = " << pilih << endl;
        cout << "peminjaman           = " << peminjaman.tanggal << "-" << peminjaman.bulan << "-" << peminjaman.tahun << endl;
        //cout << "pengembalian                            = " << pengembalian.tanggal << "-" << pengembalian.bulan << "-" << pengembalian.tahun << endl;
        cout << "biaya                = ";
        biaya();
        cout << endl;
        garis();
        cout << endl;
        cout << "tanggal pengembalian : " ;
        tglkembali();
        cout<< endl;
        cout << "masukan tanggal pengembalian saat ini : " << endl;
        terlambat();
        cout << "\nDenda+biaya          = ";
        biaya();
        cout << endl;
        garis();
        bintang();
        garis();
        bintang();
        garis();
        cout << "               Terimakasih banyak          " << endl;
        cout << "               Telah mengunjungi           " << endl;
        cout << "                Perusahaan kami            " << endl;
        garis();
    }
}


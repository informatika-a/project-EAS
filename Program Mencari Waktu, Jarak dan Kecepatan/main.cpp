#include "titobagus.h"

using namespace std;

mulai()awal

    coba tes;
    kota tek;

    do{
    tampilan();
    tampilanke2();
    cout<<" Masukan pilihan anda = ";cin>>tek.menu;
    cin.ignore();
    cout<<endl;
    cout<<" Pilihan anda no      = "<<tek.menu;
    cout<<endl;
    cout<<endl;

    switch (tek.menu){

    case 1:

    cout<<"kota asal                                        : ";
    cin.getline(tek.asal, 20);
    cout<<endl;
    cout<<"kota tujuan                                      : ";
    cin.getline(tek.tujuan,20);
    cout<<endl;
    cout<<"masukan jarak dalam km                           = ";
    cin>>tes.jarak;
    cout<<endl;
    cout<<"masukan kecepatan dalam km/jam                   = ";
    cin>>tes.kecepatan;
    cout<<endl;
    cout<<endl;
    tes.waktu = menghitungwaktu(tes.jarak,tes.kecepatan);
    tes.jam = menghitungjam(tes.waktu);
    tes.menit = menghitungmenit(tes.waktu);
    tampilanke4();
    cout<<"waktu yang ditempuh dari "<<tek.asal<<" ke "<<tek.tujuan<<" adalah "<<tes.jam<<" Jam "<<tes.menit<<" Menit ";
    tampilanke3();
    cout<<endl;
    tampilanke4();
    break;

    case 2 :

    cout<<"kota asal                                        : ";
    cin.getline(tek.asal, 20);
    cout<<endl;
    cout<<"kota tujuan                                      : ";
    cin.getline(tek.tujuan, 20);
    cout<<endl;
    cout<<"masukan waktu dalam jam                          = ";
    cin>>tes.waktu;
    cout<<endl;
    cout<<"masukan kecepatan dalam km/jam                   = ";
    cin>>tes.kecepatan;
    cout<<endl;
    tes.jarak = menghitungjarak(tes.kecepatan,tes.waktu);
    tes.meter = meter(tes.jarak);
    tampilanke4();
    cout<<"maka jarak yang ditempuh dari "<<tek.asal<<" ke "<<tek.tujuan<<" adalah "<<tes.jarak<<" Km "<<endl;
    cout<<endl;
    cout<<"maka jarak yang ditempuh dari "<<tek.asal<<" ke "<<tek.tujuan<<" adalah "<<tes.meter<<" M "<<endl;
    tampilanke3();
    cout<<endl;
    tampilanke4();
    break ;

    case 3 :

    cout<<"kota asal                                         : ";
    cin.getline(tek.asal, 20);
    cout<<endl;

    cout<<"kota tujuan                                       : ";
    cin.getline(tek.tujuan,20);
    cout<<endl;
    cout<<"Masukan jarak yang ditempuh perjalanan dalam km   = ";
    cin>>tes.jarak;
    cout<<endl;
    cout<<"Masukan waktu yang ditempuh perjalanan dalam jam  = ";
    cin>>tes.waktu;
    cout<<endl;
    tes.kecepatan = menghitungkecepatan(tes.jarak,tes.waktu);
    tampilanke4();
    cout<<"Jadi kecepatan kendaraan dari kota "<<tek.asal<<" menuju "<<tek.tujuan<<" adalah "<<tes.kecepatan<<" km/jam ";
    tampilanke3();
    cout<<endl;
    tampilanke4();

    break ;

    default:
    cout<<"*************************************  MAAF  ***********************************"<<endl;
    cout<<endl;
    cout<<"--------------  NO YANG ANDA PILIH SALAH ATAU TIDAK ADA PADA PILIHAN  ----------";
    cout<<endl;
}
    cout<<"apakah anda mau mengulang = ";
    cin>>tek.lagi;

}while(tek.lagi == 'y');


return 0;

akhir






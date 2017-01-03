#ifndef YUSUF_H_INCLUDED
#define YUSUF_H_INCLUDED
#include<iostream>
using namespace std;
char mad;
char nama[50];
struct{
int kode,harga,jumlah,total,bayar,kembali;

}definisi;

void perkenalanTour(){
cout<<"============================"<<endl;
 cout<<"MY TRAVEL MY ADVANTURE"<<endl;
 cout<<"============================"<<endl;
 cout<<""<<endl;
 cout<<"PAKET TOUR"<<endl;
 cout<<"1. BALI     Rp. 1000000"<<endl;
 cout<<"2. JOGJA    Rp. 750000"<<endl;
 cout<<"3. BANDUNG  Rp. 500000"<<endl;

 cout<<"============================"<<endl;

}

void pilihanMenu(){
     cout<<"Nama customer = ";
 cin.getline(nama,50);

        cout<<"\n Masukan KODE TOUR Pilihan : ";
         cin>>definisi.kode;

         switch (definisi.kode){
         case 1:
          cout<<"BALI"<<endl;
          cout<<"\n1. Pantai Pandawa";
          cout<<"\n2. pantai kute";
          cout<<"\n3. hotel+makan";
          cout<<"\n4. tanah lot";
          cout<<"\n5. tanjung benoa\n";
          definisi.harga=1000000;
          cout<<"Masukan Jumlah orang : ";
          cin>>definisi.jumlah;
           definisi.total=definisi.harga*definisi.jumlah;
          cout<<"Total Harga  : Rp. "<<definisi.total<<endl;
          cout<<"Uang yang Dibayar : Rp. ";
          cin>>definisi.bayar;
          if(definisi.bayar>definisi.total){
            cout<<"Uang Kembali = "<<definisi.bayar-definisi.total<<endl;
          }
          else{
           cout<<"Uang Kurang = "<<definisi.total-definisi.bayar<<endl;
           cout<<"Selesaikan Pembayarannya Ya !!!"<<endl;
          }
          cout<<"Masih ada Y/T  : ";
          cin>>mad;
          break;
         case 2:
          cout<<'\n'<<"JOGJA"<<endl;
          cout<<"\n 1.candi borobudur";
          cout<<"\n 2.candi prambanan";
          cout<<"\n 3.hotel+makan";
          cout<<"\n 4.mallioboro \n";
           definisi.harga=750000;
          cout<<"Masukan Jumlah orang : ";
          cin>>definisi.jumlah;
           definisi.total=definisi.harga*definisi.jumlah;
          cout<<"Total Harga  : Rp. "<<definisi.total<<endl;
          cout<<"Uang yang Dibayar : Rp. ";
          cin>>definisi.bayar;
           if(definisi.bayar>definisi.total){
            cout<<"Uang Kembali = "<<definisi.bayar-definisi.total<<endl;
          }
          else{
           cout<<"Uang Kurang = "<<definisi.total-definisi.bayar<<endl;
           cout<<"Selesaikan Pembayarannya Ya !!!"<<endl;
          }
          cout<<"Masih ada Y/T  : ";
          cin>>mad;
          break;
         case 3:
          cout<<'\n'<<"BANDUNG"<<endl;
          cout<<"\n 1.kawah putih ciwiday";
          cout<<"\n 2.hotel+makan";
          cout<<"\n 3.gunung takuban prahu \n";
           definisi.harga=500000;
          cout<<"Masukan Jumlah orang : ";
          cin>>definisi.jumlah;
           definisi.total=definisi.harga*definisi.jumlah;
          cout<<"Total Harga  : Rp. "<<definisi.total<<endl;
          cout<<"Uang yang Dibayar : Rp. ";
          cin>>definisi.bayar;
           if(definisi.bayar>definisi.total){
            cout<<"Uang Kembali = "<<definisi.bayar-definisi.total<<endl;
          }
          else{
           cout<<"Uang Kurang = "<<definisi.total-definisi.bayar<<endl;
           cout<<"Selesaikan Pembayarannya Ya !!!"<<endl;
          }
          cout<<"Masih ada Y/T  : ";
          cin>>mad;
          break;

         default:
         cout<<"Kode yang anda masukkan tidak ada";
         }
 }



#endif // YUSUF_H_INCLUDED

#include <iostream>
#include <stdio.h>

using namespace std ;

#define awal {
#define akhir }
#define mulai() main()

struct coba{

    float jarak,kecepatan;
    long meter;
    float waktu,jam,menit;
    char tujuan[20];
    char asal[20];
};

struct kota{

    char tujuan[20];
    char asal[20];
    int menu;
    char lagi;
};
void tampilan(){
    cout<<endl;
    cout<<"******************TUGAS AKHIR MATA KULIAH PEMROGRAMAN STRUKTUR***************** "<<endl;
    cout<<endl;
    cout<<"================================================================================ "<<endl;
    cout<<endl;
    cout<<"--------------------------NAMA : Tito Bagus Kuncoro----------------------------- "<<endl;
    cout<<"---------------------------NPM : 06.2016.1.06627-------------------------------- "<<endl;
    cout<<"---------------------------JURUSAN : Informatika-------------------------------- "<<endl;
    cout<<endl;
    cout<<"================================================================================ "<<endl;
    cout<<endl;
    cout<<endl;
}
void tampilanke2(){
    cout<<"         Selamat datang di program menentukan waktu, jarak dan kecepatan         "<<endl;
    cout<<endl;

    cout<<" Masukan soal yang anda pilih =  \n\n 1. Mencari waktu yang ditempuh perjalanan =  \n\n 2. Menentukan jarak pada suatu perjalanan =  \n ";
    cout<<"\n 3. Menentukan kecepatan pada kendaraan   =  \n\n";
    cout<<endl;
}

int menghitungwaktu(float jarak, float kecepatan){
        float waktu;
        waktu = ((jarak*60)/kecepatan);
return waktu;
}

int menghitungjam(float waktu){
        float jam ;
        jam = waktu/60;
return jam;
}

int menghitungmenit(int jam){
    float menit;
    menit = jam%60;
return menit;
}

int menghitungjarak(float kecepatan,float waktu){
    float hasil;
    hasil = kecepatan*waktu;
return hasil;
}

int meter(float jarak){
    float hasil;
    hasil = jarak*1000;
return hasil;
}

int menghitungkecepatan(float jarak,float waktu){
    float hasil;
    hasil = jarak / waktu ;
return hasil;
}
void tampilanke3(){
    cout<<endl;
    cout<<endl;
    cout<<"-----------------  TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI  ---------------- "<<endl;

}
void tampilanke4(){
    cout<<"==============================================================================="<<endl;
    cout<<endl;
}

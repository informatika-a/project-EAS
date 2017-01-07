#ifndef DATAKTP_H_INCLUDED
#define DATAKTP_H_INCLUDED
#include <iostream>
#include <cstring>
#include <windows.h>
#include <stdlib.h>
#include <mysql.h>
 using namespace std;

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;

struct data{
    char nik[20];
    char nama[30];
    char tempt[15];
    char tgl[20];
    char alamat[50];
    char RT[4];
    char RW[4];
    char kel[15];
    char kec[15];
    char agama[10];
    char status[13];
    char pekerjaan[20];
    char kewarganegaraan[4];
    char gol_dar[4];
};

struct daftar{
    int tgl;
    int bulan;
    int tahun;
};

    data penduduk[100];
    daftar pembuatan[100], selesai[100];
    string bulan[12]={"Jan", "Feb", "Mar", "Apr", "Mei", "Jun", "Jul", "Agu", "Sept", "Okt", "Nov", "Dec"};

    void ubahdata(char nik[100], int kounterinput);
    void outputsatu(char nik[100], int kounterinput);

void daftar(){
    string user, password;
    int qstate;
    conn = mysql_init(0);
    if(conn){
        cout<<"Koneksi Oke"<<endl;
    }
    else{
        cout<<"Koneksi Problem !! "<<mysql_error(conn)<<endl;
    }
    conn = mysql_real_connect(conn, "localhost", "root", "", "ktp", 0, NULL, 0);
    output :
    if(conn){
        cout<<"Terkoneksi ke Database Kependudukan"<<endl;
    }
    else{
        cout<<"Koneksi Problem !! "<<mysql_error(conn)<<endl;
    }
    cout<<"Masukan Username = ";
    cin>>user;
    cout<<"Masukan Password = ";
    cin>>password;
    string query ="insert into login(username,password) values('"+user+"','"+password+"')";

    const char* q= query.c_str();
    qstate=mysql_query(conn, q);
    if(!qstate){
        cout<<"Data Sukses di input"<<endl;
    }
    else{
        cout<<"Koneksi Problem "<<mysql_error(conn)<<endl;
    }
    system("PAUSE");
}

void garis(){
    cout<<"================================================================================\n";
}

bool login(){
    string nama, password;
    bool login=false, qstate;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "ktp", 0, NULL, 0);
    cout<<"Username : ";
    cin>>nama;
    cout<<"Password : ";
    cin>>password;
    const char* nama1= nama.c_str();
    const char* password1= password.c_str();
    qstate = mysql_query(conn, "select * from login");//Proses menampilkan
        if(!qstate)//nilai qsate tidak nol;
            {
            res=mysql_store_result(conn);
            while(row=mysql_fetch_row(res))
    {
    if(strcmp(nama1, row[0])==0 && strcmp(password1, row[1])==0){
        cout<<"Login Success"<<endl;
        login=true;
        break;
    }
    }
    if(login==false){
        char daftarakun[10];
        cout<<"Tidak menemukan akun"<<endl;
    }
    }
    else{
        cout<<"Koneksi Problem";
    }
    return login;
}

void inputdata(int kounterinput){
    char ubah[10];
    bool cek;
    int sama;
    do{
    cout<<"Tanggal Mendaftar :\n";
    cout<<"Tanggal(hh) = ";
    cin>>pembuatan[kounterinput].tgl;
    }while(pembuatan[kounterinput].tgl<1 || pembuatan[kounterinput].tgl>31);
    do{
    cout<<"Bulan (bb)  = ";
    cin>>pembuatan[kounterinput].bulan;
    }while(pembuatan[kounterinput].bulan<1 || pembuatan[kounterinput].bulan>12);
    do{
    cout<<"Tahun (tttt)= ";
    cin>>pembuatan[kounterinput].tahun;
    }while(pembuatan[kounterinput].tahun<2015 || pembuatan[kounterinput].tahun>2017);
    cin.ignore();
    cout<<"Masukan Data dengan benar : \n";
    do{
    sama=0;
    cout<<"NIK                                 = ";
    cin.getline(penduduk[kounterinput].nik, 20);
    if(kounterinput!=0){
    for(int kounter=0; kounter<kounterinput; kounter++){
        if(strcmp(penduduk[kounterinput].nik, penduduk[kounter].nik)==0){
            cout<<"NIK Sudah didaftarkan\n";
            sama=1;
        }
    }
    }
    if(strlen(penduduk[kounterinput].nik)==0){
        cout<<"NIK tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Nama                                = ";
    cin.getline(penduduk[kounterinput].nama, 30);
    if(strlen(penduduk[kounterinput].nama)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Tempat Lahir                        = ";
    cin.getline(penduduk[kounterinput].tempt, 15);
    if(strlen(penduduk[kounterinput].tempt)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Tanggal Lahir(hh-bulan-tttt)        = ";
    cin.getline(penduduk[kounterinput].tgl, 20);
    if(strlen(penduduk[kounterinput].tgl)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Alamat                              = ";
    cin.getline(penduduk[kounterinput].alamat, 50);
    if(strlen(penduduk[kounterinput].alamat)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"RT                                  = ";
    cin.getline(penduduk[kounterinput].RT, 4);
    if(strlen(penduduk[kounterinput].RT)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"RW                                  = ";
    cin.getline(penduduk[kounterinput].RW, 4);
    if(strlen(penduduk[kounterinput].RW)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Kelurahan / Desa                    = ";
    cin.getline(penduduk[kounterinput].kel, 15);
    if(strlen(penduduk[kounterinput].kel)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Kecamatan                           = ";
    cin.getline(penduduk[kounterinput].kec, 15);
    if(strlen(penduduk[kounterinput].kec)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Agama                               = ";
    cin.getline(penduduk[kounterinput].agama, 10);
    if(strlen(penduduk[kounterinput].agama)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Status Perkawinan(Belum Kawin/Kawin)= ";
    cin.getline(penduduk[kounterinput].status, 13);
    if(strlen(penduduk[kounterinput].status)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Pekerjaan                           = ";
    cin.getline(penduduk[kounterinput].pekerjaan, 20);
    if(strlen(penduduk[kounterinput].pekerjaan)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Kewarganegaraan (WNI/WNA)           = ";
    cin.getline(penduduk[kounterinput].kewarganegaraan, 4);
    if(strlen(penduduk[kounterinput].kewarganegaraan)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    sama=0;
    cout<<"Golongan Darah (A/B/AB/O)           = ";
    cin.getline(penduduk[kounterinput].gol_dar, 4);
    if(strlen(penduduk[kounterinput].gol_dar)==0){
        cout<<"Data ini tidak boleh kosong\n";
        sama=1;
    }
    }while(sama==1);
    do{
    cek=false;
    system("CLS");
    outputsatu(penduduk[kounterinput].nik, kounterinput);
    garis();
    cout<<"Anda Yakin Data sudah benar ?\n";
    cout<<"ketik ya untuk melanjutkan dan ganti untuk mengubah data anda ? ";
    cin.getline(ubah, 10);
    if(strcmp(ubah, "ganti")==0){
    ubahdata(penduduk[kounterinput].nik, kounterinput);
    system("pause");
    cek=true;
    }
    else if(strcmp(ubah, "ya")==0){
    }
    else{
    cek=true;
    }
    }while(cek==true);
}

void outputall(int kountertampil, int kounterinput){
            for(kountertampil=0; kountertampil<=kounterinput; kountertampil++){
            cout<<"Tanggal Mendaftar : "<<pembuatan[kountertampil].tgl<<"-"
            <<pembuatan[kountertampil].bulan<<"-"<<pembuatan[kountertampil].tahun<<endl<<endl<<endl;
            cout<<"                    KARTU TANDA PENDUDUK              \n";
            cout<<"======================================================\n";
            cout<<"NIK                  = "<<penduduk[kountertampil].nik<<endl;
            cout<<"Nama                 = "<<penduduk[kountertampil].nama<<endl;
            cout<<"Tempat/tanggal Lahir = "<<penduduk[kountertampil].tempt<<","<<penduduk[kountertampil].tgl<<endl;
            cout<<"Alamat               = "<<penduduk[kountertampil].alamat<<endl;
            cout<<"  RT/RW              = "<<penduduk[kountertampil].RT<<"/"<<penduduk[kountertampil].RW<<endl;
            cout<<"  Kelurahan/Desa     = "<<penduduk[kountertampil].kel<<endl;
            cout<<"  Kecamatan          = "<<penduduk[kountertampil].kec<<endl;
            cout<<"Agama                = "<<penduduk[kountertampil].agama<<endl;
            cout<<"Status Perkawinan    = "<<penduduk[kountertampil].status<<endl;
            cout<<"Pekerjaan            = "<<penduduk[kountertampil].pekerjaan<<endl;
            cout<<"Kewarganegaraan      = "<<penduduk[kountertampil].kewarganegaraan<<endl;
            cout<<"Golongan Darah       = "<<penduduk[kountertampil].gol_dar<<endl<<endl<<endl;
        }
}

void tabeljadi(int kountertampil, int kounterinput){
    cout<<"NO\tNIK\t\t\tNama\t\t\tTanggal Pengambilan\n";
    garis();
    for(kountertampil=0; kountertampil<=kounterinput; kountertampil++){
        cout<<kountertampil+1<<"\t";
        cout<<penduduk[kountertampil].nik<<"\t";
        cout<<penduduk[kountertampil].nama;
        if(strlen(penduduk[kountertampil].nama)<=15){
            cout<<"\t";
        }
        cout<<"\t";
        selesai[kountertampil].tgl=pembuatan[kountertampil].tgl+14;
        selesai[kountertampil].bulan=pembuatan[kountertampil].bulan;
        selesai[kountertampil].tahun=pembuatan[kountertampil].tahun;
        if(selesai[kountertampil].tgl>31){
            if(selesai[kountertampil].bulan==2){
                if(selesai[kountertampil].tgl>28){
                    selesai[kountertampil].tgl=selesai[kountertampil].tgl-28;
                    selesai[kountertampil].bulan=pembuatan[kountertampil].bulan+1;
                }
            }
            else{
            selesai[kountertampil].tgl=selesai[kountertampil].tgl-31;
            selesai[kountertampil].bulan=pembuatan[kountertampil].bulan+1;
            }
            if(selesai[kountertampil].bulan>12){
                selesai[kountertampil].bulan=selesai[kountertampil].bulan-12;
                selesai[kountertampil].tahun=selesai[kountertampil].tahun+1;
            }
        }
        cout<<selesai[kountertampil].tgl<<"-";
        cout<<bulan[selesai[kountertampil].bulan-1]<<"-";
        cout<<selesai[kountertampil].tahun<<endl;
    }
}

void outputsatu(char nik[100], int kounterinput){
        for(int kountertampil=0; kountertampil<=kounterinput; kountertampil++){
            if(strcmp(nik, penduduk[kountertampil].nik)==0){
                cout<<"                    KARTU TANDA PENDUDUK              \n";
            cout<<"======================================================\n";
            cout<<"NIK                  = "<<penduduk[kountertampil].nik<<endl;
            cout<<"Nama                 = "<<penduduk[kountertampil].nama<<endl;
            cout<<"Tempat/tanggal Lahir = "<<penduduk[kountertampil].tempt<<","<<penduduk[kountertampil].tgl<<endl;
            cout<<"Alamat               = "<<penduduk[kountertampil].alamat<<endl;
            cout<<"  RT/RW              = "<<penduduk[kountertampil].RT<<"/"<<penduduk[kountertampil].RW<<endl;
            cout<<"  Kelurahan/Desa     = "<<penduduk[kountertampil].kel<<endl;
            cout<<"  Kecamatan          = "<<penduduk[kountertampil].kec<<endl;
            cout<<"Agama                = "<<penduduk[kountertampil].agama<<endl;
            cout<<"Status Perkawinan    = "<<penduduk[kountertampil].status<<endl;
            cout<<"Pekerjaan            = "<<penduduk[kountertampil].pekerjaan<<endl;
            cout<<"Kewarganegaraan      = "<<penduduk[kountertampil].kewarganegaraan<<endl;
            cout<<"Golongan Darah       = "<<penduduk[kountertampil].gol_dar<<endl<<endl<<endl;
            }
        }
}

void ubahdata(char nik[100], int kounterinput){
    char ubah;
    bool ketemu, pilihan;
    data ganti;
    char replacedata[10];
    do{
            ketemu=false;
            pilihan=false;
    for(int kountertampil=0; kountertampil<=kounterinput; kountertampil++){
            if(strcmp(nik, penduduk[kountertampil].nik)==0){
            do{
            cout<<endl;
            cout<<"1. Nama             : "<<penduduk[kountertampil].nama<<endl;
            cout<<"2. Tempat lahir     : "<<penduduk[kountertampil].tempt<<endl;
            cout<<"3. Tanggal lahir    : "<<penduduk[kountertampil].tgl<<endl;
            cout<<"4. Alamat           : "<<penduduk[kountertampil].alamat<<endl;
            cout<<"   RT               : "<<penduduk[kountertampil].RT<<endl;
            cout<<"   RW               : "<<penduduk[kountertampil].RW<<endl;
            cout<<"   Kelurahan        : "<<penduduk[kountertampil].kel<<endl;
            cout<<"   Kecamatan        : "<<penduduk[kountertampil].kec<<endl;
            cout<<"5. Agama            : "<<penduduk[kountertampil].agama<<endl;
            cout<<"6. Status Perkawinan: "<<penduduk[kountertampil].status<<endl;
            cout<<"7. Pekerjaan        : "<<penduduk[kountertampil].pekerjaan<<endl;
            cout<<"8. Kewarganegaraan  : "<<penduduk[kountertampil].kewarganegaraan<<endl;
            cout<<"9. Golongan darah   : "<<penduduk[kountertampil].gol_dar<<endl;
            cout<<"ketik 'k' untuk Kembali\n";
            cout<<"Data Mana yang ingin anda ubah ?";
            cin>>ubah;
            cin.ignore();
            switch(ubah){
                case '1':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].nama<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.nama, 30);
                system("CLS");
                cout<<"Nama Sebelumnya : "<<penduduk[kountertampil].nama<<endl;
                cout<<"Menjadi         : "<<ganti.nama<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].nama, ganti.nama);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                break;

                case '2':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].tempt<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.tempt, 15);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].tempt<<endl;
                cout<<"Menjadi         : "<<ganti.tempt<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].tempt, ganti.tempt);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                break;
                case '3':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].tgl<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.tgl, 20);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].tgl<<endl;
                cout<<"Menjadi         : "<<ganti.tgl<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].tgl, ganti.tgl);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;

                case '4':
                cout<<"Data Sebelumnya : \n";
                cout<<"Alamat               = "<<penduduk[kountertampil].alamat<<endl;
                cout<<"  RT/RW              = "<<penduduk[kountertampil].RT<<"/"<<penduduk[kountertampil].RW<<endl;
                cout<<"  Kelurahan/Desa     = "<<penduduk[kountertampil].kel<<endl;
                cout<<"  Kecamatan          = "<<penduduk[kountertampil].kec<<endl;
                cout<<"Ganti Dengan    : \n";
                cout<<"Alamat            = ";
                cin.getline(ganti.alamat, 50);
                cout<<"RT                = ";
                cin.getline(ganti.RT, 4);
                cout<<"RW                = ";
                cin.getline(ganti.RW, 4);
                cout<<"Kelurahan / Desa  = ";
                cin.getline(ganti.kel, 15);
                cout<<"Kecamatan         = ";
                cin.getline(ganti.kec, 15);
                system("CLS");
                cout<<"Data Sebelumnya : \n";
                cout<<"Alamat               = "<<penduduk[kountertampil].alamat<<endl;
                cout<<"  RT/RW              = "<<penduduk[kountertampil].RT<<"/"<<penduduk[kountertampil].RW<<endl;
                cout<<"  Kelurahan/Desa     = "<<penduduk[kountertampil].kel<<endl;
                cout<<"  Kecamatan          = "<<penduduk[kountertampil].kec<<endl;
                cout<<"Menjadi         : \n";
                cout<<"Alamat               = "<<ganti.alamat<<endl;
                cout<<"  RT/RW              = "<<ganti.RT<<"/"<<ganti.RW<<endl;
                cout<<"  Kelurahan/Desa     = "<<ganti.kel<<endl;
                cout<<"  Kecamatan          = "<<ganti.kec<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].alamat, ganti.alamat);
                    strcpy(penduduk[kountertampil].RT, ganti.RT);
                    strcpy(penduduk[kountertampil].RW, ganti.RW);
                    strcpy(penduduk[kountertampil].kel, ganti.kec);
                    strcpy(penduduk[kountertampil].kec, ganti.kec);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;
                case '5':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].agama<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.agama, 10);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].agama<<endl;
                cout<<"Menjadi         : "<<ganti.agama<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].agama, ganti.agama);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;
                case '6':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].status<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.status, 13);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].status<<endl;
                cout<<"Menjadi         : "<<ganti.status<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].status, ganti.status);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;
                case '7':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].pekerjaan<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.pekerjaan, 20);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].pekerjaan<<endl;
                cout<<"Menjadi         : "<<ganti.pekerjaan<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].pekerjaan, ganti.pekerjaan);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;
                case '8':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].kewarganegaraan<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.kewarganegaraan, 4);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].kewarganegaraan<<endl;
                cout<<"Menjadi         : "<<ganti.kewarganegaraan<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].kewarganegaraan, ganti.kewarganegaraan);
                    cout<<"Data Berhasil Di Ubah";
                }
                else{
                    pilihan=true;
                }
                    break;
                case '9':
                cout<<"Data Sebelumnya = "<<penduduk[kountertampil].gol_dar<<endl;
                cout<<"Ganti Dengan    = ";
                cin.getline(ganti.gol_dar, 4);
                system("CLS");
                cout<<"Data Sebelumnya : "<<penduduk[kountertampil].gol_dar<<endl;
                cout<<"Menjadi         : "<<ganti.gol_dar<<endl;
                cout<<"Anda Yakin ingin Mengubah [ya/tidak]: ";
                cin.getline(replacedata, 10);
                if(strcmp(replacedata, "ya")==0){
                    strcpy(penduduk[kountertampil].gol_dar, ganti.gol_dar);
                    cout<<"Data Berhasil Di Ubah\n";
                }
                else{
                    pilihan=true;
                }
                    break;

                case 'k':
                    break;
                default:
                    system("CLS");
                    cout<<"Silahkan Pilih Lagi \n";
                    ketemu=true;
                    break;
            }
            }while(pilihan==true);
            if(ubah!='k')ketemu=true;
            }
            else if(ketemu=false){
                cout<<"Data Tidak Ditemukan\n";
            }
    }
    }while(ketemu==true);
}

int hapusdata (char nik[100], int kounterinput){
    int sukses=0;
    for(int kountertampil=0; kountertampil<=kounterinput; kountertampil++){
            char deletedata[10];
            if(strcmp(nik, penduduk[kountertampil].nik)==0){
            cout<<"                    KARTU TANDA PENDUDUK              \n";
            cout<<"======================================================\n";
            cout<<"NIK                  = "<<penduduk[kountertampil].nik<<endl;
            cout<<"Nama                 = "<<penduduk[kountertampil].nama<<endl;
            cout<<"Tempat/tanggal Lahir = "<<penduduk[kountertampil].tempt<<","<<penduduk[kountertampil].tgl<<endl;
            cout<<"Alamat               = "<<penduduk[kountertampil].alamat<<endl;
            cout<<"  RT/RW              = "<<penduduk[kountertampil].RT<<"/"<<penduduk[kountertampil].RW<<endl;
            cout<<"  Kelurahan/Desa     = "<<penduduk[kountertampil].kel<<endl;
            cout<<"  Kecamatan          = "<<penduduk[kountertampil].kec<<endl;
            cout<<"Agama                = "<<penduduk[kountertampil].agama<<endl;
            cout<<"Status Perkawinan    = "<<penduduk[kountertampil].status<<endl;
            cout<<"Pekerjaan            = "<<penduduk[kountertampil].pekerjaan<<endl;
            cout<<"Kewarganegaraan      = "<<penduduk[kountertampil].kewarganegaraan<<endl;
            cout<<"Golongan Darah       = "<<penduduk[kountertampil].gol_dar<<endl<<endl<<endl;
            bool ulang=false;
            do{
            cout<<"Anda Yakin ingin menghapus Data Penduduk Ini  [ya/tidak] ?";
            cin.getline(deletedata, 10);
            if(strcmp(deletedata, "ya")!=0 && strcmp(deletedata, "tidak")!=0){
                cout<<"Perintah tidak Dikenal";
                ulang=true;
            }}while(ulang==true);
            cout<<"Login untuk Melanjutkan :\n";
            bool log=login();
            if(strcmp(deletedata,"ya")==0 && log==true){
                    for(int kounter=kountertampil; kounter<=kounterinput; kounter++){
            strcpy(penduduk[kounter].nik, penduduk[kounter+1].nik) ;
            strcpy(penduduk[kounter].nama, penduduk[kounter+1].nama);
            strcpy(penduduk[kounter].tempt, penduduk[kounter+1].tempt);
            strcpy(penduduk[kounter].tgl, penduduk[kounter+1].tgl);
            strcpy(penduduk[kounter].alamat, penduduk[kounter+1].alamat);
            strcpy(penduduk[kounter].RT, penduduk[kounter+1].RT);
            strcpy(penduduk[kounter].RW, penduduk[kounter+1].RW);
            strcpy(penduduk[kounter].kel, penduduk[kounter+1].kel);
            strcpy(penduduk[kounter].kec, penduduk[kounter+1].kec);
            strcpy(penduduk[kounter].agama, penduduk[kounter+1].agama);
            strcpy(penduduk[kounter].status, penduduk[kounter+1].status);
            strcpy(penduduk[kounter].pekerjaan, penduduk[kounter+1].pekerjaan);
            strcpy(penduduk[kounter].kewarganegaraan, penduduk[kounter+1].kewarganegaraan);
            strcpy(penduduk[kounter].gol_dar, penduduk[kounter+1].gol_dar);
            pembuatan[kounter].tgl=pembuatan[kounter+1].tgl;
            pembuatan[kounter].bulan=pembuatan[kounter+1].bulan;
            pembuatan[kounter].tahun=pembuatan[kounter+1].tahun;
            }
            sukses=1;
            cout<<"Data Berhasil dihapus\n";
            }
            else{
                cout<<"Data Tidak Dihapus\n";
            }
            }
            else{
                cout<<"Data Tidak Ditemukan\n";
            }
    }
    return sukses;
}

void exit(){
    cout<<"\n\n\n\n ";
    garis();
    cout<<"|\t                                \t\t\t\t\t |\n";
    cout<<"|\t\t\t            Terima Kasih          \t\t\t |\n";
    cout<<"|\t\t\t   Telah Menggunakan Program ini   \t\t\t |\n";
    cout<<"|\t                                \t\t\t\t\t |\n ";
    garis();
    cout<<"\n\n\n\n";
}

void awal(){
    cout<<"\n\n\n\n ";
    garis();
    cout<<"|\t                                \t\t\t\t\t |\n";
    cout<<"|\t\t\t          Selamat Datang          \t\t\t |\n";
    cout<<"|\t\t\t      Program Pembuatan KTP       \t\t\t |\n";
    cout<<"|\t\t\t          Rizki Setiawan          \t\t\t |\n";
    cout<<"|\t\t\t        06 .2016 . 1 . 06621      \t\t\t |\n";
    cout<<"|\t                                \t\t\t\t\t |\n ";
    garis();
    cout<<"\n\n\n\n";
}
#endif // DATAKTP_H_INCLUDED

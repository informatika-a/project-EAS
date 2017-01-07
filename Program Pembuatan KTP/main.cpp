#include "dataktp.h"

int main()
{
    int kounterinput=-1, kountertampil, pilih;
    bool kembali,  log_in=false;
    char pilih1[20];
    char nik[100];
    char awalan[15];
    awal();
    system("pause");
    do{
    system("CLS");
            kembali=false;
    cout<<"Login \n";
    cout<<"Register \n";
    cout<<"Ketik Pilihan Anda = ";
    cin>>awalan;
    cin.ignore();
    if(strcmp(awalan, "login")==0){
    do{
    system("CLS");
    cout<<"\t\t\t\tLOGIN \n";
    garis();
    log_in=login();
    garis();
    system("pause");
    if(log_in==false){
        string daftarakun;
        cout<<"Anda Ingin daftar akun[ya/tidak] = ";
        cin>>daftarakun;
        if(daftarakun=="ya"){
            system("CLS");
            daftar();
        }
    }
    }while(log_in==false);
    }
    else if(strcmp(awalan, "register")==0){
        daftar();
    }
    }while(log_in==false);
    menu:
    do{
    system("CLS");
    garis();
    cout<<"\t\t\t   Menu\n";
    garis();
    cout<<"1. Input Data\n";
    cout<<"2. Lihat Data\n";
    cout<<"3. Edit Data\n";
    cout<<"4. Hapus Data\n";
    cout<<"5. Keluar dan Logout\n";
    garis();
    cout<<"Masukan Pilihan = ";
    cin>>pilih;
    cin.ignore();
    switch(pilih){
    case 1:
    kounterinput++;
    system("CLS");
    cout<<"\t\t\tINPUT DATA\n";
    garis();
    inputdata(kounterinput);
    system("CLS");
    cout<<"Data Telah Diinput Terimakasih\n";
    cout<<"KTP bisa diambil 14 hari dari tanggal mendaftar\n";
    system("pause");
    system("CLS");
    break;

    case 2:
        do{
        system("CLS");
        cout<<"\t\t\tCEK DATA\n";
        garis();
        cout<<"1. Lihat Tanggal Selesai\n";
        cout<<"2. Lihat Semua KTP yang Siap di Cetak\n";
        cout<<"3. Lihat KTP anda Sendiri\n";
        cout<<"4. Kembali Ke Menu Utama\n";
        cout<<"Masukan Pilihan Anda = ";
        cin>>pilih;
        cin.ignore();
        switch(pilih){
            case 1:
        system("CLS");
        cout<<"\t\t\tKTP SELESAI\n";
        garis();
        cout<<endl;
        if(kounterinput!=-1){
        tabeljadi(kountertampil,kounterinput);}
        else{
            cout<<"Data Kosong\n";
        }
        system("pause");
        system("CLS");
        break;
            case 2:
        system("CLS");
        cout<<"\t\t\tTAMPILAN KTP SIAP CETAK\n";
        garis();
        cout<<endl;
        if(kounterinput!=-1){
        outputall(kountertampil, kounterinput);}
        else{
            cout<<"Data Kosong\n\n";
        }
        system("pause");
        system("CLS");
        break;
            case 3:
        system("CLS");
        if(kounterinput!=-1){
        cout<<"Masukan NIK anda = ";
        cin.getline(nik, 100);
        system("CLS");
        cout<<"\t\t\tKTP ANDA\n\n";
        garis();
        cout<<endl;
        cout<<endl;
        outputsatu(nik, kounterinput);}
        else{
            cout<<"Data Kosong\n\n";
        }
        system("pause");
        system("CLS");
        break;
            case 4:
        system("CLS");
        kembali=true;
        break;
            default:
            system("CLS");
            cout<<"Maaf Pilihan Anda Tidak Tersedia, Anda akan dikembalikan ke menu sebelumnya !!";
            system("pause");
            system("CLS");
            kembali=true;
            break;
        }
        }while(pilih!=4);
        break;

    case 3:
        system("CLS");
        cout<<"\t\t\tEDIT DATA\n";
        garis();
        if(kounterinput!=-1){
        cout<<"Masukan NIK Data yang ingin di ubah : ";
        cin.getline(nik, 100);
        ubahdata(nik, kounterinput);}
        else{
            cout<<"Data Kosong\n\n";
        }
        cout<<endl;
        system("pause");
        system("CLS");
        break;
    case 4:
        int sukseshapus;
        system("CLS");
        cout<<"\t\t\tHAPUS DATA\n";
        garis();
        if(kounterinput!=-1){
        cout<<"Masukan NIK Data yang ingin di hapus : ";
        cin.getline(nik, 100);
        sukseshapus=hapusdata(nik, kounterinput);
        if(sukseshapus==1){
            kounterinput--;
        }
        }
        else{
            cout<<"Data Kosong\n\n";
        }
        system("pause");
        system("CLS");
        break;
    case 5:
        cout<<"Anda akan Keluar dari Program ini \n";
        system("pause");
        system("CLS");
        exit();
        system("pause");
        return 0;
        break;
    default:
        cout<<"Pilihan Tidak ada, Anda akan di alihkan ke Menu Utama\n";
        system("pause");
        system("CLS");
        kembali=true;
        break;
    }
    kembali=true;
    }while(kembali==true);
}

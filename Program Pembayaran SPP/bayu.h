#ifndef BAYU_H_INCLUDED
#define BAYU_H_INCLUDED
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
struct {
         int i=1;
         int user = 007;
         int pass = 123456;
         char username[100],password[100];
         char user1[5]="bayu";
         char password1[6]="admin";
}data;

char nama [100] = "Bayu Ramadhan";

void introLogin(){
    cout << "--------------------------------------------------\n";
    cout << "Selamat Datang Di Form Login Pembayaran SPP ITATS \n";
    cout << "--------------------------------------------------\n\n";
}

void introUserPass(){
      cout << "Username : "; cin.getline(data.username, 100);
      cout << "Password : "; cin.getline(data.password, 100);
       if (strcmp(data.username, data.user1)==0 && strcmp(data.password, data.password1)==0) {
         cout << "\n--------------------\n";
         cout << "Anda Berhasil Login" << endl;
         cout << "--------------------\n\n";
         cout<<nama;
         cout<<endl;
         cout<<">>Kelas               = 1a";
         cout<<endl;
         cout<<">>Semester            = 1";
         cout<<endl;
         cout<<"\tKeterangan :\n";
         cout<<"Belum membayar spp bulan 12-2016";
         cout<<endl;
       }
       else if (strcmp(data.username, "bayu_ramad@gmail.com")==0 && strcmp(data.password, "kepodahlu")==0) {
         cout << "\n--------------------\n";
         cout << "Anda Berhasil Login" << endl;
         cout << "--------------------\n\n";
         cout<<"BAYU RAMADHAN\n";
         cout<<endl;
         cout<<">>Kelas               = 1a";
         cout<<endl;
         cout<<">>Semester            = 1";
         cout<<endl;
         cout<<"Belum membayar spp........";
         cout<<endl;

    }

    else {
              cout << "\n------------------------\n";
              cout << "Maaf ID & PASSWORD Salah!" << endl;
             cout << "-------------------------\n\n";
             // return username;
          }
}


#endif // BAYU_H_INCLUDED

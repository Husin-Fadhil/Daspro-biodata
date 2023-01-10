//judul
//BIODATA
#include <iostream>
#include <string>
using namespace std;

//kamus
int namadepan,namatengah,namabelakang;
int alamat;
int tempattanggallahir;
int status;
int namalengkap;



//deskripsi
main()
{
    string namadepan = "Husin";
    string namatengah = "Fadhil";
    string namabelakang = "Azizi";
    string namalengkap = namadepan + " " + namatengah + " " + namabelakang;
    string alamat = "Ngesrep Timur III";
    string tempattanggallahir = "Semarang, 15 Desember 2003";
    string status = "Pelajar";
    cout << "Nama                  :" << namalengkap << endl;
    cout << "Tempat, Tanggal Lahir :" << tempattanggallahir << endl;
    cout << "Alamat                :" << alamat << endl;
    cout << "Status                :" << status << endl;
    return 0;
}

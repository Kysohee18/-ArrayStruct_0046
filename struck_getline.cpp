#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

Mahasiswa mhs[2]; // Array untuk menyimpan 2 data mahasiswa

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

Mahasiswa mhs[2]; // Array untuk menyimpan 2 data mahasiswa



Commit 2: Input and Display Data
int main()
{
    // Mengambil input data dari pengguna
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim = ";
        cin >> mhs[i].nim;
        cin.ignore(); // Mengatasi masalah input string setelah cin
        cout << "Masukan nama = ";
        getline(cin, mhs[i].nama);
        cout << "Masukan kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukan provinsi = ";
        cin >> mhs[i].alamat.provinsi;
        cin.ignore(); // Mengatasi masalah input string setelah cin
    }

    // Menampilkan data mahasiswa
    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Kota = " << mhs[i].alamat.kota << endl;
        cout << "Provinsi = " << mhs[i].alamat.provinsi << endl;
    }
}



Setelah membaginya ke dalam dua commit ini, Anda akan memiliki kode yang terstruktur untuk GitHub. Jika ada hal lain yang perlu diperbaiki atau disesuaikan, beri tahu saya! 😊

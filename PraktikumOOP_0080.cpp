#include <iostream>
using namespace std;

class Barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

        void printData(){
            cout << "Nama Barang = " << nama << endl;
            cout << "Jumlah = " << jumlah << endl;
            cout << "Kategori = " << kategori << endl;
            cout << "Tanggal Produksi = " << tanggalProduksi << endl;
        }
};

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Televisi";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-10-20";

    nonElektronik.nama = "Lemari";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2025-10-05";

    elektronik.printData();
    cout << endl;
    nonElektronik.printData();
}
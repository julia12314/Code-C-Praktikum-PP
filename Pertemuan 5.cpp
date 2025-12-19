#include <iostream>
using namespace std;

int main() {
    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
    cout << "Tanggal " << tanggal[9];

    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu" };
    cout << "Hari" << hari[4] << endl;

    char namaP[] = {'k', 'a', 'i'};
    cout << "Nama Panggilan (char) : " << namaP << endl;

    string namaL = "Kai Penakluk Dunia";
    cout << "Nama Lengkap (string) : " << namaL << endl << endl;

    int i = 0;
    while(i < 7) {
        cout << "Hari Ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;

    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang Array Hari Ini Adalah : " << panjang << endl;
    cout << "Kai Menaklukkan Dunia" << panjang << "hari" << endl << endl;

    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    cout << "Masukkan penjualan berapa porsi Chikken Katsu selama " << jumlahHari << " hari:" << endl;
    for(int j = 0; j < jumlahHari; j++){
        cout << "Penjualan Hari " << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "Total porsi CHikken Katsu yang telah terjual : " << totalPenjualan << "porsi" << endl;
    cout << "Rata-rata penjualan Chikken Katsu selama " << jumlahHari << " hari adalah : " << rataRata << " porsi." << endl << endl;

    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai Chikken Katsu: " << endl;
    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (Kolom matriks) : ";
    cin >> jumlahKolom;

    for(int x = 0; x < jumlahBaris; x++) {
        for(int y = 0; y < jumlahKolom; y++) {
            cout << "Baris" << i + 1 << ", Kolom " << y + 1 << " = ";
            cin >> matriks[x][y]; 
        }
    }

    cout << "Kedai Chikken Katsu buka selama : " << jumlahBaris << " bulan di tanggal tertentu" << endl;

    for(int x = 0; x < jumlahBaris; x++) {
        for(int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}

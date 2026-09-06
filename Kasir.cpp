#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int harga[5] = { //menyimpan data harga 
        4000,
        10000,
        1000,
        15000,
        10000
    };

    string barang[5] = { // menyimpan teks dan juga tanda [] digunakan untuk menyimpan data dalam jumlah banyak
        "Popmie",
        "Popcorn",
        "Soprei",
        "Susu",
        "Pales"
    };

    int pilihan; // membuat input pada user
    int kembalian; // int juga variabel
    int total = 0;
    int jumlah;
    int bayar;
    char lanjut;

    cout << "Kasir Kopdes" << endl;

    do { //digunakan untuk mengulang sebuah pilihan

        cout << endl;
        cout << "=== Daftar Barang ===" << endl;

        for (int i = 0; i < 5; i++) { // untuk mengulang program dimulai dari 0 sampai total barang. Contoh i = 0, i = 1, i = 2, dan seterus nya.
            // dan arti i++ ialah nilai satu yaitu agar program naik nilai yang dimulai dari 0.
            cout << i + 1 << ". "
                 << barang[i]
                 << " - Rp " << harga[i] << endl;
        }

        cout << endl;
        cout << "Pilih Barang: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) { // arti operator >= artinya pilihan lebih besar atau sama dengan 1. Dan arti operator <= adalah lebih kecil atau sama dengan 5
                    // operator && ialah kedua kondisi wajib bernilai benar
            cout << "Jumlah: ";
            cin >> jumlah;

            int totalBarang = harga[pilihan - 1] * jumlah;

            total = total + totalBarang;

            cout << "Barang : " << barang[pilihan - 1] << endl; 
            cout << "Jumlah : " << jumlah << endl;
            cout << "Total  : Rp " << totalBarang << endl;
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

        cout << endl;
        cout << "Tambah barang ga? (y/n): ";
        cin >> lanjut; // ini contoh penggunaan char = lanjut 

    } while (lanjut == 'y' || lanjut == 'Y'); // arti || adalah atau jika user input y atau Y besar maka bernilai true.
      // operator == digunakan untuk membandingkan sebuah pilihan dari user atau piihan yang ditampilkan.


    cout << endl;
    cout << "===== PEMBAYARAN =====" << endl;
    cout << "Total belanja: Rp " << total << endl;

    cout << "Bayar: Rp ";
    cin >> bayar;

    if (bayar >= total) {

        kembalian = bayar - total;

        cout << "Kembalian: Rp " << kembalian << endl;
        cout << "Transaksi berhasil!" << endl;

    }
    else {
        cout << "Uang tidak cukup!" << endl;
    }

    cout << endl;
    cout << "Terima kasih!" << endl;

    system("pause");

    return 0;
}

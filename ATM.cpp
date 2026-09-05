#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main() {

    int pilihan = 0; /* pilihan yang diinput user */
    int pin_benar = 1234; /* memvalidasi pin yang dibuat user */
    int pin; /* integer pin agar muncul saat di run */
    int saldo = 100000; /* total saldo awal */
    int penarikan_uang; /* pilihan penarikan uang */ 
    int tambahSaldo; /* penambahan saldo yang di input ke Cek Saldo */
    int totalSaldo = 0; /* total saldo yang diinput yang berasal dari saldo awal + saldo akhir */
    int totalTarik = 0; /* sama juga seperti di atas */

    cout << "ATM Online " << endl;
    cout << "Masukkan pin dulu bos: "; /* menampilkan pin saat di run */
    cin  >> pin; /* memasukkan input user dari pin */

    if (pin == pin_benar) {  /* jika pin user benar, maka akan memicu pilihan ATM */

        cout << "Pin Kamu benar " << endl;
        cout << "Masuk dalam Menu" << endl;

        Sleep(1000); /* sebuah waktu tunggu setelah pin valid langsung menjalankan proses clear terminal */
        system("cls");

        while (pilihan != 4) { /* membuat pengulangan pilihan dan arti != harus tidak sama dengan 4 yang artinya jika angka yang dimasukkan user lebih dari 4 akan memicu pilihan tak tersedia*/

            cout << "ATM Online" << endl;
            cout << "1. Penarikan Uang" << endl;
            cout << "2. Tambah Uang" << endl;
            cout << "3. Cek Saldo" << endl;
            cout << "4. Keluar" << endl;

            cout << "Pilih yang mana boss: ";
            cin >> pilihan;

            switch (pilihan) { /* membuat input yang di buat user dari pilihan yang tersedia */

                case 1:
                    cout << "Mau Tarik Berapa: ";
                    cin >> penarikan_uang;

                    if (penarikan_uang <= saldo) {
                        saldo = saldo - penarikan_uang; /* membuat sebuah perhitungan sederhana antara saldo awal dan penarikan user */
                        totalTarik = totalTarik + penarikan_uang; /* menampilkan total penarikan user di case ke 3 */
                        cout << "Penarikan Berhasil!" << endl;
                    }
                    else {
                        cout << "Saldo Engga Cukup Cinta" << endl; /* menampilkan saldo jika tidak cukup */
                    }

                    break;

                case 2: {
                    int tambahSaldo;
                    cout << "Tambah berapa boss: ";
                    cin >> tambahSaldo;
                    saldo = saldo + tambahSaldo;
                    totalSaldo = totalSaldo + tambahSaldo;
                    cout << "Penambahan Saldo Berhasil!" << endl;
                    break;
                }
                
                case 3:
                     
                    cout << "Saldo Boss: " << saldo << endl;
                    cout << "Total Penarikan: " << totalTarik << endl;
                    cout << "Total Penambahan Saldo: " << totalSaldo << endl; 
                    break;

                case 4:
                    cout << "Terima kasih sudah menggunakan ATM!" << endl;
                    break;

                default:
                    cout << "Pilihan tidak tersedia!" << endl;
                    break;
            }
        }

    }
    else { /* menampilkan jika pin yang di input user salah */
        cout << "Pin Kamu Salah Bolo" << endl;
    }

    system("pause");
    return 0;
}

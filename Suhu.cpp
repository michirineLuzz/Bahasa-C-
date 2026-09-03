#include <iostream>
using namespace std;

int main() {
    double suhu; /* menyimpan angka dan untuk menghitung angka desimal*/
    int pilihan; /* menyimpan pilihan yang di input pengguna */
    
    cout << "Konversi Suhu Gacor" << endl;
    cout << "1. Konversi Celcius Ke Fahrenheit" << endl;
    cout << "2. Konversi Celsius ke Kelvin" << endl;
    
    cout << "Pilihan : ";
    cin >> pilihan;
    
    cout <<"Masukan celcius: " ;
    cin >> suhu;
    
    if (pilihan == 1) {
       double fahrenheit = (suhu * 9/5) + 32;
       
       cout << suhu << "C = "
            << fahrenheit << " F" << endl;
}
    else if (pilihan == 2) {
         double kelvin = suhu + 273;
         
       cout << suhu << "C = "
            << kelvin << " K " << endl;
}
    else {
         cout << "Pilihan mu belum ada wok " << endl;
}
         system("Pause");
         return 0;
}
    

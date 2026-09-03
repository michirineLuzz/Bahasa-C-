#include <iostream>
using namespace std;

int main() 
{
    int angka; /* memasukan fungsi angka dimana user mengetik dari cout dan masuk di memori cin >> angka sehingga diproses di if(angka /2 == 0) */
     
    cout << "Menebak ganjil dan genap" << endl;
    
    cout << "masukkan angka mu :" ;
    cin >> angka;
    
    if (angka / 2 == 0) {
     cout << "Angka mu "<< angka << " genap kek nya" << endl;
     }
    else {
     cout << "Angka mu "<< angka << " ganjil lek keknya" << endl;
}
     system ("Pause");
     return 0;
}
      

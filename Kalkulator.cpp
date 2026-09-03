#include <iostream>
using namespace std;

int main() 
{
    double angka1, angka2;
    char simbol;
    
    cout << "=======Kalkulator===========" << endl;
    
    cout << "Masukkan angka 1: ";
    cin >> angka1;
    
    cout << "Simbol apa yang tersedia masih (+, -, *): ";
    cin >> simbol;
    
    cout << " Masukkan angka 2: ";
    cin >> angka2;
    
    switch (simbol) {
           case '+' : 
           cout << "Total Penjumlahan angka mu lek: " << angka1 + angka2 << endl;
           break;
           
           case '-' :
           cout << "Total Pengurangan angka mu lek: " << angka1 - angka2 << endl;
           break;
           
           case '*' :
           cout << "Total Perkalian angka mu lek: " << angka1 * angka2 << endl;
           break;
           
           default:
           cout <<"Operasi gagal mungkin salah ketik tolol" << endl;
}
           system("Pause");
           return 0;
}

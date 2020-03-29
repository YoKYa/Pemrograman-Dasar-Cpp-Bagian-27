#include <iostream>

using namespace std;

int main(){
    system("cls");

    int Angka1 = 10; // Deklarasi

    int &Angka2 = Angka1; // Referensi

    cout << "Masukkan sebuah angka : ";
    cin >> Angka2; // Merubah variabel pada Angka2 akan merubah variabel Angka1

    cout << endl << "Angka Yang dimasukkan : " << Angka1;

    cin.get();
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int inputAngka;

    cout << "Masukkan Angka : " << endl;
    cin >> inputAngka;

    if(inputAngka >= 0){
        cout << inputAngka << " adalah bilangan positif " << endl;
    } else if(inputAngka < 0){
        cout << inputAngka << " adalah bilangan negatif " << endl;
    } else {
        cout << "Angka yang anda masukkan tidak valid" << endl;
    }
    return 0;
}
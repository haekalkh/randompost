#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int inputAngka;
    int inputPangkat;
    int hasilAkhir = 1;
    

    cout << "Masukkan Angka : " << endl;
    cin >> inputAngka;
    cout << "Dipangkatkan : " << endl;
    cin >> inputPangkat;

    for(int i = 0; i < inputPangkat; i++){
        hasilAkhir = hasilAkhir * inputAngka; 
    }

    cout << inputAngka << " dipangkatkan " << inputPangkat << " adalah " << hasilAkhir << endl;
    return 0;


}

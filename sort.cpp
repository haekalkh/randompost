#include <iostream>
using namespace std;

int main(){
    int angkaPertama;
    int angkaKedua;
    int angkaKetiga;

    cout << "Masukkan nilai pertama : " << endl;
    cin >> angkaPertama;
    cout << "Masukkan nilai kedua : " << endl;
    cin >> angkaKedua;
    cout << "Masukkan nilai ketiga : " << endl;
    cin >> angkaKetiga;

    if(angkaPertama < angkaKedua && angkaPertama < angkaKetiga){
        if(angkaKedua < angkaKetiga){
            cout << angkaPertama << ' ' << angkaKedua << ' ' << angkaKetiga << endl;
        }else{
            cout << angkaPertama << ' ' << angkaKetiga << ' ' << angkaKedua << endl;
        }
    }else if(angkaKedua < angkaPertama && angkaKedua < angkaKetiga){
        if(angkaPertama < angkaKetiga){
            cout << angkaKedua << ' ' << angkaPertama << ' ' << angkaKetiga << endl;
        }else{
            cout << angkaKedua << ' ' << angkaKetiga << ' ' << angkaPertama << endl;
        }
    }else{
        if(angkaKedua < angkaPertama){
            cout << angkaKetiga << ' ' << angkaKedua << ' ' << angkaPertama << endl;
        }else{
            cout << angkaKetiga << ' ' << angkaPertama << ' ' << angkaKedua << endl;
        }
    }
    return 0;
}

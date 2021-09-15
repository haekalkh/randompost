#include <iostream>
using namespace std;



int main(){
    string nama;
    int nilaiMahasiswa;

    cout << "Masukkan nama : " << endl;
    cin >> nama;
    cout << "Masukkan nilai : " << endl;
    cin >> nilaiMahasiswa;

    if(nilaiMahasiswa >= 60){
        cout << nama << " " << "Lulus" << endl;
    } else{
        cout << nama << " " << "Tidak Lulus" << endl;
    }
}

   
#include <iostream>
using namespace std;

int tambah(int y,int x){
    return y+x;
}

int main(){
    int a,b;
    cout << "Program Kalkulator Sederhana "<<"\nMasukan Angka"<<endl;
    cin >> a;
    cout << "ditambah ";
    cin >>b;
    cout << "Hasil "<<a<<" ditambah "<< b << " adalah = " << tambah(a,b);
}

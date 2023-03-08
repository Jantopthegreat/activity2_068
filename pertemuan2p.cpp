#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
cout << "Masukan Panjang = ";
cin >> P;
cout << "Masukan Lebar = ";
cin >> L;
}

void proses(){
Luas = P*L;
}

void output(){
    cout << "Luasnya =" << Luas;
}

int main (){
    input();
    proses();
    output();
}
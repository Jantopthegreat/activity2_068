#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
cout << "Masukan Panjang = ";
cin >> P;
cout << "Masukan Lebar = ";
cin >> L;
}

double proses(){
return  P*L;
}

double proses2(double a, double b){
return  a*b;
}

void output(){
    cout << "Luasnya =" << proses();
    cout << "Luasnya ke 2" <<
    proses2(P,L);
}

int main (){
    input();
    proses();
    output();
}
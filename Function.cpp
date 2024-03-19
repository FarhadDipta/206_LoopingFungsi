#include<iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nCompass, nNike;
int hAdidas, hPuma, hCompass, hNike;

void input()
{
    cout << "masukan jumlah adidas = ";
    cin >> nAdidas;
    cout << "masukan jumlah  puma = ";
    cin >> nPuma;
    cout << "masukan jumlah compass = ";
    cin >> nCompass;
    cout << "masukan jumlah nike = ";
    cin >> nNike;

} 

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nCompass * hCompass) + (nNike * hNike); 
}

void display()
{
    cout << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << "jumlah puma = " << nPuma << endl;
    cout << "jumlah adidas = " << nAdidas << endl;
    cout << "jumlah compass = " << nCompass << endl;
    cout << "jumlah nika = " << nNike << endl;
    cout << endl;
    cout << "Total Harga = Rp."<< totalHarga() << endl;
}

int main(){
    input();
    display();
}
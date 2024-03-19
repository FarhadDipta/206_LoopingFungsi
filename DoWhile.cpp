#include <iostream>
using namespace std;

int main()
{
    string pilihan;
    do 
    {
        cout << "makan " << endl;
        cout << "tidur " << endl;
        cout << "main " << endl;

        cout << "maih hidup?(yes/no)";
        cin >> pilihan;
    } while (pilihan == "yes");  
}
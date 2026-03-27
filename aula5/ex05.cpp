#include <iostream>
using namespace std;

int main(){
    int dia_semana;
    cout << "digite o dia da semana";
    cin >> dia_semana;
    switch (dia_semana)
    {
        case 1:
            cout << "domingo";
            break;
        case 2:
            cout << "Segunda";
            break;
        case 3:
            cout << "Terca";
            break;
        case 4:
            cout << "Quarta";
            break;
        case 5:
            cout << "Quinta";
            break;
        case 6:
            cout << "Sexta";
            break;
        case 7:
            cout << "Sabado";
            break;
        default:
            cout << "Este dia nao existe";
            break;
    }
}
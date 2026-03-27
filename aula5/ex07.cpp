#include <iostream>
using namespace std;

int main() {
    char tamanho;
    float imc;
    cout << "Digite seu IMC";
    cin >> imc;
    cout << "Digite o tamanho (p/m/g)";
    cin >> tamanho;
    switch(tamanho) 
    {
        case 'p':
            cout << "Pequeno";
            if ((imc >= 18) && (imc <= 24)){
                cout << "para este imc sugiro tamanho M";
            }
            break;
        case 'm':
            cout << "Medio";
            if ((imc >= 20) && (imc <= 24)){
                cout << "para este imc sugiro tamanho G";
            }
            break;
        case 'g':
            cout << "Grande";
            if ((imc >= 25) && (imc <= 29)){
                cout << "para este imc usar GG";
            }
            break;
    }
}
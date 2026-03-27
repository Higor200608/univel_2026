#include <iostream>
using namespace std;

int main() {
    char tamanho;
    cout << "Digite o tamanho: (p/m/g)";
    cin >> tamanho;
    switch(tamanho){
        case 'p':
            cout << "pequeno";
            break;
        case 'm':
            cout << "medio";
            break;
        case 'g':
            cout << "grande";
            break;
        default:
            cout << "nao atendemos " << "este publico";
            break;
    }
    return 0;
}
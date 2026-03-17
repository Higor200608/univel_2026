#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome = "Higor";
    string letra = "H";
    string sobrenome = " Cavalheiro de Oliveira";

    cout << "Meu nome e: " << nome << endl;
    cout << "Nome Completo: " << (nome.append(sobrenome)) << endl;
    cout << "tamanho: " << (nome.length()) << endl;
    cout << "\nPrimeira letra do nome: " << nome[0] << endl;
    nome[0]= 'T';
    cout << "meu nome agora e: " << nome << endl;

    return 0;
}
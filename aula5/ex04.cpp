#include <iostream>
using namespace std;

int main() {
    bool  aprova, emancipado;
    float n1, n2, media=0;
    int faltas =0, idade;
    cout << "Digite a quantidade de faltas: ";
    cin >> faltas;
    cout << "Digite a Nota 1:";
    cin >> n1;
    cout << "Digite a Nota 2:";
    cin >> n2;
    media = (n1+n2)/2;

    if ((faltas < 180) && (media>=6)) {
        cout << "Aprovado" << endl;
    }
        else {
            if (faltas >= 180) {
                cout << "reprovado";
            }
        else {
            cout << "aprova conselho (0 nao 1 sim)";
            cin >> aprova;
            if (!(aprova)) {
                cout << "reprovado por conselho de classe";
            }
            else {
                cout << "Aluno aprovado";
            }
        }
        }
    cout << "digite a idade: ";
    cin >> idade;
    cout << "digite se for emancipado (1 sim 0 nao):    ";
    cin >> emancipado;

    if ((idade >= 18) || (emancipado)) {
        cout << "voce pode retirar o boletim";
    }
    else {
        cout << "os responsaveis devem retirar o boletim";
    }
    if (idade >= 18) {
        cout << "a partir deste mes o boleto segue em seu nome...";
    }
    return 0;
}
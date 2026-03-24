#include <iostream>
using namespace std;

int main() {
    float n1, n2, media=0;
    int faltas =0;
    cout << "Digite a quantidade de faltas: ";
    cin >> faltas;
    cout << "Digite a Nota 1:";
    cin >> n1;
    cout << "Digite a Nota 2:";
    cin >> n2;
    media = (n1+n2)/2;

    if (faltas > 180) {
        cout << "Reprovado por falta";}
    else {
        if (media >= 6) {
            cout << "Aluno Aprovado " << media << endl;
    }
        else {
            cout << "Aluno Reprovado media";
    }
}

    return 0;
}

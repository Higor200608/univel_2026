#include <iostream>
#include <cmath>
using namespace std;

float areaQuadrada(float lado) {
    return lado * lado;
}

float areaRetangular(float base, float altura) {
    float resultado = 0;
    resultado = base * altura;
    return resultado;
}

float areaCirculo(float raio) {
    return M_PI * raio * raio;
}

void menu() {
     
    int opcao;

    cout << "=== Calculo de Areas ===" << endl;
    cout << "1 - Quadrado" << endl;
    cout << "2 - Retangulo" << endl;
    cout << "3 - Circulo" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;

    if (opcao == 1) {
        float lado;
        cout << "Digite o lado do quadrado: ";
        cin >> lado;
        cout << "Area do quadrado: " << areaQuadrada(lado) << endl;
    
    } else if (opcao == 2){
        float base, altura;
        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite a altura: ";
        cin >> altura;
        cout << "Area do ratangulo: " << areaRetangular(base, altura) << endl;

    } else if (opcao == 3){
        float raio;
        cout << "Digite o raio do circulo: ";
        cin >> raio;
        cout << "Area do circulo: " << areaCirculo(raio) << endl;

    } else {
        cout << "Opcao Invalida" << endl;
    }

}

int main () {
    menu();
    return 0;
}
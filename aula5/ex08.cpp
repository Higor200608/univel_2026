#include <iostream>
using namespace std;
#include <string>
int main(){
    int opcao;
    int opcao_2;
    int escolha;
    cout << "Menu Principal: 1 - Pediatria / 2 - Clinica Geral ";
    cin >> escolha;
    int parada = 1;
while(parada == 1){
    switch(escolha) {
        case 1:
          cout << "Pediatria: 1 - Recem-nascidos / 2 - Infantil " << endl;
          cin >> opcao;
          switch(opcao) {
            case 1:
            cout << "Voce escolheu Recem-nascidos (0 a 28 dias) " << endl;
            break;
            case 2:
            cout << "Voce escolheu Infantil (1 mês a 12 anos) " << endl;
            break;
            default:
            cout << "Tente novamente/opção invalida" << endl;
            break;
          }
         break;

        case 2:
            cout << "Clinica Geral: 1 - Consulta de rotina / 2 - Urgencia Leve " << endl;
            cin >> opcao_2;
         switch(opcao_2) {
            case 1:
            cout << "Voce escolheu Consulta de Rotina (Check-Up) " << endl;
            break;
            case 2:
            cout << "Voce escolheu Urgencia Leve (Dores de cabeca, sintomas gripais) " << endl;
            break;
            default:
            cout << "Tente novamente/opção invalida" << endl;
            break;
          }
    }
    cout << "Deseja continuar a consulta? (1 - Sim / 0 - Nao)" << endl;
    cin >> parada;
}
}
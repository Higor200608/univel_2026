#include <iostream>
using namespace std;
int main(){
    int Vetor[5];
    int Matriz[5][3];
    
    Vetor[0] = 9;
    Vetor[4] = 30;

    Matriz[0][1] = 15; //primeiro a linha depois a coluna 0==linha 1==coluna

    cout << "o vetor na posicao 0 tem o valor " << Vetor[0];
    return 0;
}
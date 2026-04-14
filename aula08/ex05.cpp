#include <iostream>
using namespace std;

int main(){
    int i;
    int Vetor[5];

    for(i=0; i<5; i++)
    {Vetor[i] = 5-i;}

    for(i=0; i<5; i++){
        cout << "o valor guardado na posição " << i << " é " << Vetor[i] << endl;
    }
    
    return 0;
}
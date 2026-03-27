#include <iostream>
using namespace std;

int main() {
bool porta;
cout << "Digite se a porta esta aberta ou fechada(1 sim 0 nao) ";
cin >> porta;
if (porta) {
    cout << "A porta esta aberta favor fechar e lihar o ar-condicionado";   
}else {
    cout << "ligar ar-condicionado";
}
return 0;
}
#include <iostream>
using namespace std;
int main() {
int k = 10, j = 10;
cout << "Antes do pre fixado " << k << "\n";
cout << "Durante o pre fixado " << ++k << "\n";
cout << "Depois do pre fixado " << k << "\n";

cout << "Antes do pos fixado " << j << "\n";
cout << "Durante o pos fixado " << j++ << "\n" <<
" Primeiro imprime o valor depois soma \n";
cout << "Depois do pos fixado " << j << "\n";
return 0;
}
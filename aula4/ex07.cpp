#include <iostream>
using namespace std;

int main() {
    int x =10, y = 2, z=0;
    cout << "O valor de x = " << x << "\n";
    cout << "O valor de y = " << y << "\n";
    cout << "troquei valores\n";
    z = y;
    y = x;
    x = z;

    cout << "O valor de x = " << x << "\n";
    cout << "O valor de y = " << y << "\n";

    y = x*3 + (z*4);
    x *= z / y;
    cout << "O valor de x: " << x << endl;
    return 0;
}
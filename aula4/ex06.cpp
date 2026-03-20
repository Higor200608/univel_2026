#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2 = 50, n3, x = 3, y = 4, i = 5;

    x += 3;
    x *= y +1;
    x *= y++;
    y = i++;
    y = i++;
    y = ++i;

    cout << "Entre com um numero inteiro (n1): ";
    cin >> n1; // input = 5
    n1 += n1 * 10; //55
    n2 = n1 / 5; // 11
    n3 = n2 % 5 * 7; // 7
    n2 *= n3-- % 4; // 6
    cout << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;
    cout << i << " " << y << " "<< x << " "<< n1 << endl;
    return 0;
}
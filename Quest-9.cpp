#include <iostream>
using namespace std;

int quadrado(int n) {
    return n * n;
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    cout << "Quadrado: " << quadrado(num) << endl;
    return 0;
}

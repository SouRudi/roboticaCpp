#include <iostream>
using namespace std;

bool ehPar(int num) {
    return (num % 2 == 0);
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    if (ehPar(n))
        cout << n << " é par" << endl;
    else
        cout << n << " é impar" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Fatorial: " << fatorial(num) << endl;
    return 0;
}

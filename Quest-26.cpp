#include <iostream>
using namespace std;

void imprimePares(int n) {
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    imprimePares(num);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int comprimento(string s) {
    int count = 0;
    for (char c : s) {
        count++;
    }
    return count;
}

int main() {
    string texto;
    cout << "Digite uma palavra: ";
    cin >> texto;

    cout << "Comprimento: " << comprimento(texto) << endl;
    return 0;
}

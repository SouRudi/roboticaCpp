#include <iostream>
#include <string>
using namespace std;

int contarVogais(string s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main() {
    string texto;
    cout << "Digite uma frase: ";
    getline(cin, texto);

    cout << "Numero de vogais: " << contarVogais(texto) << endl;
    return 0;
}

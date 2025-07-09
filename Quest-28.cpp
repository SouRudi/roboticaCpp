#include <iostream>
#include <string>
using namespace std;

string removeEspacos(string s) {
    string resultado = "";
    for (char c : s) {
        if (c != ' ')
            resultado += c;
    }
    return resultado;
}

int main() {
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Sem espacos: " << removeEspacos(frase) << endl;
    return 0;
}

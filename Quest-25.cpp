#include <iostream>
using namespace std;

int maiorValor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

int main() {
    int v[6] = {10, 5, 30, 20, 15, 25};
    cout << "Maior valor: " << maiorValor(v, 6) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int par[5], impar[5];
    int cont_par = 0, cont_impar = 0;
    int num;

    for (int i = 0; i < 15; i++) {
        cin >> num;

        // Verifica se é par
        if (num % 2 == 0) {
            par[cont_par] = num;
            cont_par++;

            // Se o vetor encheu (5 posições), imprime e zera o contador
            if (cont_par == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << "\n";
                }
                cont_par = 0;
            }
        } 
        // Caso contrário, é ímpar
        else {
            impar[cont_impar] = num;
            cont_impar++;

            // Se o vetor encheu (5 posições), imprime e zera o contador
            if (cont_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << "\n";
                }
                cont_impar = 0;
            }
        }
    }

    // Terminada a leitura, imprime os que sobraram, imprimindo o ímpar primeiro
    for (int i = 0; i < cont_impar; i++) {
        cout << "impar[" << i << "] = " << impar[i] << "\n";
    }

    for (int i = 0; i < cont_par; i++) {
        cout << "par[" << i << "] = " << par[i] << "\n";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    long long n; 
    
    if (cin >> n) {
        long long temp = n;
        bool mala_suerte = false;

        // Verifica os dígitos de trás para frente
        while (temp > 0) {
            if (temp % 100 == 13) {
                mala_suerte = true;
                break; // Encontrou o 13, pode parar o loop
            }
            temp /= 10; // Remove o último dígito e repete
        }

        if (mala_suerte) {
            cout << n << " es de Mala Suerte\n";
        } else {
            cout << n << " NO es de Mala Suerte\n";
        }
    }
    
    return 0;
}
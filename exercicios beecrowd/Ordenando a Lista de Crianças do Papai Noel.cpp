#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<string> nomes;
        int comportaram = 0;
        int nao_comportaram = 0;
        
        for (int i = 0; i < n; i++) {
            char comportamento;
            string nome;
            cin >> comportamento >> nome;
            
            if (comportamento == '+') {
                comportaram++;
            } else if (comportamento == '-') {
                nao_comportaram++;
            }
            
            nomes.push_back(nome);
        }
        
        // Ordena o vetor de nomes em ordem alfabética
        sort(nomes.begin(), nomes.end());
        
        // Imprime os nomes ordenados
        for (const string& nome : nomes) {
            cout << nome << endl;
        }
        
        // Imprime o resumo dos comportamentos
        cout << "Se comportaram: " << comportaram << " | Nao se comportaram: " << nao_comportaram << endl;
    }
    
    return 0;
}
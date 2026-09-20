#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Estrutura para armazenar os dados do aluno
struct Aluno {
    string nome;
    char regiao;
    int custo;
};

// Função de comparação baseada nas regras do problema
bool compara(Aluno a, Aluno b) {
    // 1º Critério: Distância (menor para maior)
    if (a.custo != b.custo) {
        return a.custo < b.custo;
    }
    // 2º Critério: Região (ordem alfabética)
    if (a.regiao != b.regiao) {
        return a.regiao < b.regiao;
    }
    // 3º Critério: Nome (ordem alfabética)
    return a.nome < b.nome;
}

int main() {
    int Q;
    
    // Leitura até o Final do Arquivo (EOF)
    while (cin >> Q) {
        vector<Aluno> alunos(Q);
        
        for (int i = 0; i < Q; i++) {
            cin >> alunos[i].nome >> alunos[i].regiao >> alunos[i].custo;
        }
        
        // Ordena o vetor usando a função 'compara'
        sort(alunos.begin(), alunos.end(), compara);
        
        // Imprime a rota final (apenas o nome)
        for (int i = 0; i < Q; i++) {
            cout << alunos[i].nome << endl;
        }
    }
    
    return 0;
}
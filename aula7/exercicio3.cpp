#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s); 

    stack<char> pilha;
    bool bem_formada = true;

    for (char c : s) {
        if (c == '{' || c == '[' || c == '(') {

            if (!pilha.empty()) {
                char topo = pilha.top();

                if (c == '{' && (topo == '[' || topo == '(')) {
                    bem_formada = false;
                    break;
                }

                if (c == '[' && topo == '(') {
                    bem_formada = false;
                    break;
                }
            }
            pilha.push(c);
        } 
        else if (c == '}' || c == ']' || c == ')') {
            if (pilha.empty()) {
                bem_formada = false;
                break;
            }
            char topo = pilha.top();
            
            if ((c == '}' && topo != '{') ||
                (c == ']' && topo != '[') ||
                (c == ')' && topo != '(')) {
                bem_formada = false;
                break;
            }
            pilha.pop(); 
        }
    }


    if (!pilha.empty()) {
        bem_formada = false;
    }

    if (bem_formada) {
        cout << "Bem formada" << endl;
    } else {
        cout << "Mal formada" << endl;
    }

    return 0;
}
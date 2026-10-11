#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int avaliarRPN(const vector<string>& tokens) {
    stack<int> pilha;

    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {

            int b = pilha.top();
            pilha.pop();
            int a = pilha.top();
            pilha.pop();

            if (token == "+") pilha.push(a + b);
            else if (token == "-") pilha.push(a - b);
            else if (token == "*") pilha.push(a * b);
            else if (token == "/") pilha.push(a / b); 
        } else {

            pilha.push(stoi(token));
        }
    }
    

    return pilha.top();
}
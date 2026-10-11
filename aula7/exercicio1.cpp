#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> back_stack;
    stack<string> forward_stack;
    string current_page = "";
    string command, url;

    while (cin >> command) {
        if (command == "VISIT") {
            cin >> url;
            if (!current_page.empty()) {
                back_stack.push(current_page);
            }
            current_page = url;
            
            while (!forward_stack.empty()) {
                forward_stack.pop(); 
            }
        } 
        else if (command == "BACK") {
            if (back_stack.empty()) {
                cout << "SEM HISTORICO" << endl;
            } else {
                forward_stack.push(current_page);
                current_page = back_stack.top();
                back_stack.pop();
            }
        } 
        else if (command == "FORWARD") {
            if (forward_stack.empty()) {
                cout << "SEM HISTORICO" << endl;
            } else {
                back_stack.push(current_page);
                current_page = forward_stack.top();
                forward_stack.pop();
            }
        } 
        else if (command == "SHOW") {
            if (current_page.empty()) {
                cout << "SEM HISTORICO" << endl;
            } else {
                cout << current_page << endl;
            }
        }
    }
    return 0;
}
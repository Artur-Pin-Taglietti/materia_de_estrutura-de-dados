#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i = 0;
    for(char c: s){
        cout << i<< " : " << c << endl;    
        i++;    
    }

    return 0;
}

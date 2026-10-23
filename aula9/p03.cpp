//exemplo de mudança de endereço em tempo de execução
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 10;
    int c = 20;
    int *p;
    p=&a;
    cout << p <<" "<< *p<< endl;
    p=&b;
    cout << p <<" "<< *p<< endl;
    p=&c;
    cout << p <<" "<< *p<< endl;
    

    return 0;
}
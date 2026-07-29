//exemplo de if e else
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"informe um valor inteiro: ";
    cin >> n;
    // && é o and
    // || é o or
    // se o n é maior que dez e n maior que vinte
    // if(n>10)
    if (n > 10  && n < 20){
        cout <<"ok\n";// \n e endl ambos pulam uma linha

    }
    else{
        cout<<"não\n";
    }
    return 0;
}
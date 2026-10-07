#include <queue>
#include <iostream>


using namespace std;

int main(){
    queue<int> fila;
    fila.push(100);
    fila.push(200);
    fila.push(300);
    fila.push(400);
    fila.push(500);
    fila.push(600);

    while(!fila.empty()){ //while (fila.size()>0)
        cout << "tamanho da fila "<< fila.size()<<endl;
        cout<< "front "<<fila.front() <<endl;//primeiro elemento
        cout<< "back "<< fila.back() << endl;//ultimo elemento
        cout<< endl;
        fila.pop();
    }
    return 0;
}

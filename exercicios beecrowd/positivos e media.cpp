#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int positivo = 0;
    float nota = 0, n;

    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0) {
            positivo++;
            nota += n;
        }
    }

    cout << positivo << " valores positivos\n";
    cout << fixed << setprecision(1) << nota / positivo << endl;

    return 0;
}
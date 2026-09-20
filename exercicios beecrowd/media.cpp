#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;

    if (cin >> a >> b >> c) {
        double media = (a * 2.0 + b * 3.0 + c * 5.0) / 10.0;
        
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
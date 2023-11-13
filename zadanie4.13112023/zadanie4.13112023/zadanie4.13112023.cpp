#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    cout << "Число   Квадрат   Куб" << endl;

    for (int i = 1; i <= 10; ++i) {
        int square = i * i;
        int cube = i * i * i;
        cout << i << "       " << square << "         " << cube << endl;
    }

    return 0;
}
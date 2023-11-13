#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int number = 15;
    long long factorial = 1;


    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }


    cout << "Факториал числа " << number << " равен: " << factorial << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int number;
    int count = 0;
    int sum = 0;

    while (true) {
        cout << "Введите число (для завершения введите 0): ";
        cin >> number;

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;

        cout << "Количество введенных чисел: " << count << endl;
        cout << "Общая сумма: " << sum << endl;
        cout << "Среднее арифметическое: " << average << endl;
    }
    else {
        cout << "Вы не ввели ни одного числа." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int num, count, sum = 0, proizv = 1;
    cout << "Введите число: ";
    cin >> num;
    while (num > 0) {
        count = num % 10;
        num = num / 10;
        sum += count;
        proizv *= count;
    }
    cout << "Сумма чисел: " << sum << endl;
    cout << "Произведение чисел: " << proizv << endl;
    return 0;
}
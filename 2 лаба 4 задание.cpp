#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    char ch;
    short int num1, num2, itog;
    cout << "Введите первое число" << endl;
    cin >> num1;
    cout << " Введите второе число" << endl;
    cin >> num2;
    cout << " Результат" << endl;
    cin >> itog;
    if (itog == num1 * num2) {
        cout << "Правильно";
    }
    else cout << "не правилбно,ответ будет >> " << num1 * num2;
    return 0;

}
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int NumberOffinger = 0;
    cout << "Введите номер:";
    cin >> NumberOffinger;
    if (NumberOffinger == 1)
        cout << "Большой палец\n";
    else if (NumberOffinger == 2)
        cout << "Указательный палец\n";
    else if (NumberOffinger == 3)
        cout << "Средний палец\n";
    else if (NumberOffinger == 4)
        cout << "Безымянный палец\n";
    else if (NumberOffinger == 5)
        cout << "Мизинец\n";
    else
        cout << "Нет больше названий у 5 пальцев\n";
        return 0;

}
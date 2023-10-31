#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int n,i;
    cout << "Введите число: ";
    cin >> n;
    for (i = 0; i < 9999999; i++) {
        if (n == 0)

            break;
        else n /= 10;
    }
    cout <<"Количество цифр: " << i << "\n";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << " Введите размер массива: ";
    int n, sum = 0;
    cin >> n;
    int* a = new int[n];
    cout << " Запишите элементы массива: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " элемент: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (a[i] % 3 == 0) {
            sum += a[i];
        }
    }
    cout << endl;
    cout << " Сумма элементов кратных 3 = " << sum << endl;
    delete[] a;
    return 0;
}
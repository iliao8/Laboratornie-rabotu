#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 99999999, count_num = 0;
    int const SIZE = 10;
    int arr[SIZE] = { 3, 7, 5, 1, 4, 1 , 2 , 1 , 9 , 2 };
    for (int i = 0; i < SIZE; i++) {
        cout << " " << arr[i];
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] <= count) {
            count = arr[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == count) {
            count_num += 1;
        }
    }
    cout << endl << "Минимальное число массива: " << count;
    cout << endl << "Его количество в массиве: " << count_num;
    return 0;
}
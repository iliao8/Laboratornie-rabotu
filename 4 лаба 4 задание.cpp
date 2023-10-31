#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int min_count = 999999999, max_count = -999999999, max_in, min_in;
    int const N = 6;
    int x[N] = { 2, 2, 3, 4, 5, 6 };
    for (int i = 0; i < N; i++) {
        cout << x[i];
    }
    for (int i = 0; i < N; i++) {
        if (x[i] < min_count) {
            min_count = x[i];
            min_in = i;
        }
        if (x[i] > max_count) {
            max_count = x[i];
            max_in = i;
        }
    }
    
    cout << endl << "минимальный элемент массива: " << min_count << " индекс: " << min_in;
    cout << endl << "максимальный элемент массива: " << max_count << " индекс: " << max_in;
    return 0;
}
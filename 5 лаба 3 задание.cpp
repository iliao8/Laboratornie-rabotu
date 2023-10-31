#include<iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Pазмер массива: ";
    int sum = 0;
    const int SIZE = 10;
    int arr[SIZE]{ 1,2,4,5,8,10,3,6,7,9};
 
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        if (arr[i] % 1 == 0) {
            sum += arr[i];
        }
    }
    cout << endl;
    cout << "Сумма элементов массива = " << sum << endl;
    
    return 0;
}